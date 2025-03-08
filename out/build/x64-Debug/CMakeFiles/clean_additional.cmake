# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "ModMakerApp\\CMakeFiles\\ModMakerApp_autogen.dir\\AutogenUsed.txt"
  "ModMakerApp\\CMakeFiles\\ModMakerApp_autogen.dir\\ParseCache.txt"
  "ModMakerApp\\ModMakerApp_autogen"
  "RCLib\\CMakeFiles\\RCLib_autogen.dir\\AutogenUsed.txt"
  "RCLib\\CMakeFiles\\RCLib_autogen.dir\\ParseCache.txt"
  "RCLib\\RCLib_autogen"
  "qtadvanceddocking_build\\src\\CMakeFiles\\qtadvanceddocking-qt6_autogen.dir\\AutogenUsed.txt"
  "qtadvanceddocking_build\\src\\CMakeFiles\\qtadvanceddocking-qt6_autogen.dir\\ParseCache.txt"
  "qtadvanceddocking_build\\src\\qtadvanceddocking-qt6_autogen"
  )
endif()
