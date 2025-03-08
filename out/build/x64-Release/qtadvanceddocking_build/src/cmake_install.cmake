# Install script for directory: C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/rciron/Documents/GitHub/ModMaker/out/install/x64-Release")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtadvanceddocking-qt6" TYPE FILE FILES
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/ads_globals.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/DockAreaTabBar.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/DockAreaTitleBar.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/DockAreaTitleBar_p.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/DockAreaWidget.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/DockContainerWidget.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/DockManager.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/DockOverlay.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/DockSplitter.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/DockWidget.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/DockWidgetTab.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/DockingStateReader.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/DockFocusController.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/ElidingLabel.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/FloatingDockContainer.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/FloatingDragPreview.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/IconProvider.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/DockComponentsFactory.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/AutoHideSideBar.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/AutoHideTab.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/AutoHideDockContainer.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/PushButton.h"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/ResizeHandle.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "license" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/license/ads" TYPE FILE FILES
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/../LICENSE"
    "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/../gnu-lgpl-v2.1.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/rciron/Documents/GitHub/ModMaker/out/build/x64-Release/x64/lib/qtadvanceddocking-qt6.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Users/rciron/Documents/GitHub/ModMaker/out/build/x64-Release/x64/bin/qtadvanceddocking-qt6.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6/adsTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6/adsTargets.cmake"
         "C:/Users/rciron/Documents/GitHub/ModMaker/out/build/x64-Release/qtadvanceddocking_build/src/CMakeFiles/Export/2474d83cc2ab45303ccb90badc3f1894/adsTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6/adsTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6/adsTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6" TYPE FILE FILES "C:/Users/rciron/Documents/GitHub/ModMaker/out/build/x64-Release/qtadvanceddocking_build/src/CMakeFiles/Export/2474d83cc2ab45303ccb90badc3f1894/adsTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6" TYPE FILE FILES "C:/Users/rciron/Documents/GitHub/ModMaker/out/build/x64-Release/qtadvanceddocking_build/src/CMakeFiles/Export/2474d83cc2ab45303ccb90badc3f1894/adsTargets-relwithdebinfo.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6" TYPE FILE RENAME "qtadvanceddocking-qt6Config.cmake" FILES "C:/Users/rciron/Documents/GitHub/ModMaker/libs/Qt-Advanced-Docking-System/src/qtadvanceddockingConfig.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6" TYPE FILE FILES "C:/Users/rciron/Documents/GitHub/ModMaker/out/build/x64-Release/qtadvanceddocking_build/src/qtadvanceddocking-qt6ConfigVersion.cmake")
endif()

