#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/Thebigcoin.ico

convert ../../src/qt/res/icons/Thebigcoin-16.png ../../src/qt/res/icons/Thebigcoin-32.png ../../src/qt/res/icons/Thebigcoin-48.png ${ICON_DST}
