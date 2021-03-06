#!/usr/bin/env bash

OS="$(uname)"
USER="thomas.collins@moduscreate.com"

if [[ "$OS" == "Darwin" ]]; then
  echo "notarizing..."

  xcrun altool --notarize-app --primary-bundle-id "com.moduscreate.modite-adventure" -u $USER -p ${APP_PASS} --asc-provider ModusCreateInc --file /Users/travis/build/ModusCreateOrg/modite-adventure/build/modite-mac.zip
fi
