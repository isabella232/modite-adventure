CMAKE_MINIMUM_REQUIRED(VERSION 3.12)
PROJECT(Modite)

ADD_COMPILE_DEFINITIONS(CE_SDL2_WINDOW_TITLE="Modite Adventure :: by Modus Create")

SET(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wno-implicit-exception-spec-mismatch")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wno-implicit-exception-spec-mismatch")
include(ProcessorCount)

SET(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/creative-engine/cmake.files)
SET(RESOURCES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/resources)

#ADD_COMPILE_DEFINITIONS(__DINGUX__=true)
ADD_COMPILE_DEFINITIONS(__MODUS_TARGET_SDL2_AUDIO__=true)
ADD_COMPILE_DEFINITIONS(__MODUS_TARGET_DESKTOP_CONTROLS__=true)
ADD_COMPILE_DEFINITIONS(__MODUS_TARGET_DESKTOP_DISPLAY__=true)

# Include Creative Engine
# Exports:
# ${CREATIVE_ENGINE_INCLUDE_DIRS} - used in INCLUDE_DIRECTORIES(...)
# ${CREATIVE_ENGINE_SOURCE_FILES} - used in ADD_EXECUTABLE(...)
# ${CREATIVE_ENGINE_LINK_LIBRARIES} - used in TARGET_LINK_LIBRARIES(...)

INCLUDE(${CMAKE_CURRENT_SOURCE_DIR}/creative-engine/CreativeEngine.cmake)
# Compiles RCOMP and resources, but only if ${RESOURCES_DIR} exists
IF(EXISTS ${RESOURCES_DIR})
  SET(RESOURCES_BIN_FILE "Resources.bin")
compile_rcomp_and_resources()  # Only used when we are in development mode (AND you have access to licensed resource files)
else()
  SET(RESOURCES_BIN_FILE "${CMAKE_SOURCE_DIR}/src/Resources.bin")
ENDIF()
### LDK END   ####

SET(MODITE_INCLUDE_DIRS
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/src/resources
    ${CMAKE_SOURCE_DIR}/src/LoadGameState
    ${CMAKE_SOURCE_DIR}/src/GameState
    ${CMAKE_SOURCE_DIR}/src/GameState/environment
    ${CMAKE_SOURCE_DIR}/src/GameState/player
    ${CMAKE_SOURCE_DIR}/src/GameState/inventory
    ${CMAKE_SOURCE_DIR}/src/GameState/enemies
    ${CMAKE_SOURCE_DIR}/src/GameState/enemies/final-boss
    ${CMAKE_SOURCE_DIR}/src/GameState/enemies/grunts
    ${CMAKE_SOURCE_DIR}/src/GameState/enemies/mid-bosses
    ${CMAKE_SOURCE_DIR}/src/GameState/enemies/wizard
    ${CMAKE_SOURCE_DIR}/src/GameState/status
    ${CMAKE_SOURCE_DIR}/src/GameMenuState
    ${CMAKE_SOURCE_DIR}/src/DebugMenuState
    ${CMAKE_SOURCE_DIR}/src/GameOverState
    ${CMAKE_SOURCE_DIR}/src/VictoryState
    ${CMAKE_SOURCE_DIR}/src/MainMenuState
    ${CMAKE_SOURCE_DIR}/src/MainOptionsState
    ${CMAKE_SOURCE_DIR}/src/SplashState
    ${CMAKE_SOURCE_DIR}/src/CreditsState
    ${CMAKE_SOURCE_DIR}/src/ResetState
    ${CMAKE_BINARY_DIR}/usr/local/include
)

INCLUDE_DIRECTORIES(
    ${MODITE_INCLUDE_DIRS}
    ${CREATIVE_ENGINE_INCLUDE_DIRS}
)

# gather Modite sources
FILE(GLOB_RECURSE MODITE_SRC RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp")

ADD_EXECUTABLE(
    ${PROJECT_NAME}
    ${RESOURCES_BIN_FILE}
    ${CREATIVE_ENGINE_SOURCE_FILES}
    ${MODITE_SRC}
)

ProcessorCount(N)
if (NOT N EQUAL 0)
  set(${PROJECT_NAME}_FLAGS -j${N})
  set(${PROJECT_NAME}_BUILD_FLAGS -j${N})
  set(${PROJECT_NAME}_args ${${PROJECT_NAME}_args} PARALLEL_LEVEL ${N})
endif ()

BUILD_COMMAND(
    $(MAKE) --silent
)

# make Modite.app
if (APPLE)
  SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES MACOSX_BUNDLE TRUE
  MACOSX_BUNDLE_BUNDLE_NAME ${PROJECT_NAME}
  XCODE_ATTRIBUTE_ENABLE_HARDENED_RUNTIME YES
  CODE_SIGN_INJECT_BASE_ENTITLEMENTS NO)
  INSTALL(TARGETS ${PROJECT_NAME} DESTINATION ".")
endif (APPLE)

TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${CREATIVE_ENGINE_LINK_LIBRARIES})

#INCLUDE( ${CMAKE_CURRENT_SOURCE_DIR}/test/test.cmake )
