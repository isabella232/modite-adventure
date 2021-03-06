#!/usr/bin/env bash

OS="$(uname)"

if [[ "$OS" == "Darwin" ]]; then
  echo "Code signing..."

  codesign -f -s - /Users/travis/build/ModusCreateOrg/modite-adventure/build/Modite.app/Contents/MacOS/libs/libjpeg.dylib
  codesign -f -s - /Users/travis/build/ModusCreateOrg/modite-adventure/build/Modite.app/Contents/MacOS/libs/libpng.dylib
  codesign -f -s - /Users/travis/build/ModusCreateOrg/modite-adventure/build/Modite.app/Contents/MacOS/libs/libSDL2_image.dylib
  codesign -f -s - /Users/travis/build/ModusCreateOrg/modite-adventure/build/Modite.app/Contents/MacOS/libs/libSDL2.dylib
  codesign -f -s - /Users/travis/build/ModusCreateOrg/modite-adventure/build/Modite.app/Contents/MacOS/libs/libtiff.dylib
  codesign -f -s - /Users/travis/build/ModusCreateOrg/modite-adventure/build/Modite.app/Contents/MacOS/libs/libwebp.dylib

  codesign --force --deep --verbose --timestamp --options=runtime -s "Developer ID Application: Modus Create, Inc. (287TS9B2H2)" --keychain /Users/travis/Library/Keychains/ios-build.keychain /Users/travis/build/ModusCreateOrg/modite-adventure/build/Modite.app

  echo "Verifying signature..."

  codesign -v --deep --verbose=2 /Users/travis/build/ModusCreateOrg/modite-adventure/build/Modite.app

  spctl --assess -vv /Users/travis/build/ModusCreateOrg/modite-adventure/build/Modite.app
fi
