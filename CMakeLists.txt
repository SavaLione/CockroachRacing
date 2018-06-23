message(STATUS "Run CMake")
cmake_minimum_required (VERSION 2.6)

message(STATUS "CockroachRacing project")

if (WIN32)
    message (STATUS "WIN32 All is well")
    set (WINDOWS 1)
endif (WIN32)
if (UNIX)
    message (WARNING "Unix! CockroachRacing only work on windows")
    set (WINDOWS 0)
endif (UNIX)

set (PROJECT CockroachRacing)

set_property( GLOBAL PROPERTY USE_FOLDERS ON )
set( CMAKE_SUPPRESS_REGENERATION true)
set( CMAKE_BUILD_TYPE RELEASE )
set( CMAKE_CONFIGURATION_TYPES "Release;Debug" )
message(STATUS "Bild type:  " ${CMAKE_BUILD_TYPE})
message(STATUS "Configuration type:  " ${CMAKE_BUILD_TYPE})
message(STATUS "---------[CHECK]-----------" )
message(STATUS "[CMAKE_SUPPRESS_REGENERATION " ${USE_FOLDERS} "]" "[CMAKE_BUILD_TYPE " ${CMAKE_BUILD_TYPE} "]" "[CMAKE_CONFIGURATION_TYPES " ${CMAKE_CONFIGURATION_TYPES} "]" )
message(STATUS "--------[PROJECT]----------" )
project (${PROJECT})
if (WINDOWS)
	message(STATUS "---------[SRC]------------")
	set (SOURCES src/core/ADB_mod.cpp)
	set (HEADERS src/core/ADB_mod.cpp)
	message(STATUS ${CORE_HEADERS})
	message(STATUS "--------------------------")
	add_executable (${PROJECT} ${SOURCES} ${HEADERS})
endif()

if (UNIX)
	message(STATUS "Unix is not supported")
	message(STATUS "---------[EXAMPLES]----------")
	set (UNIX_SOURCES examples/Unix.cpp)
	add_executable (${PROJECT} ${UNIX_SOURCES})
	message(STATUS "---------------------------")
endif()
message(STATUS "Stop CMake")