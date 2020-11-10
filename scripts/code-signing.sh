#!/usr/bin/env bash

OS="$(uname)"

if [[ "$OS" == "Darwin" ]]; then
  echo "Code signing..."

  codesign --force --verbose --timestamp -o runtime -i com.moduscreate.modite-adventure.Modite -s "Developer ID Application: Modus Create, Inc. (287TS9B2H2)" --keychain /Users/travis/Library/Keychains/ios-build.keychain /Users/travis/build/ModusCreateOrg/modite-adventure/build/Modite.app

  echo "Verifying signature..."

  codesign -v --deep --verbose=2 /Users/travis/build/ModusCreateOrg/modite-adventure/build/Modite.app

  spctl --assess -vv /Users/travis/build/ModusCreateOrg/modite-adventure/build/Modite.app
fi
