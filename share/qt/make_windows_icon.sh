#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/Latium.ico

convert ../../src/qt/res/icons/Latium-16.png ../../src/qt/res/icons/Latium-32.png ../../src/qt/res/icons/Latium-48.png ${ICON_DST}
