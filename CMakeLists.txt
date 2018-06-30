cmake_minimum_required (VERSION 2.6)

project (CockroachRacing)

################################
# Sources
################################
set(HEADERS
		src/CockroachRacing.h
		src/Menu.h
)

set(SOURCES
		src/CockroachRacing.cpp
		src/Menu.cpp
)

add_executable (CockroachRacing ${HEADERS} ${SOURCES})

################################
# Lib
################################
if(WIN32)
set(PDCURSES_LIB_INCLUDE "${CMAKE_SOURCE_DIR}/lib/pdcurses/include/" CACHE PATH "Pdcurses lib include")
set(PDCURSES_LIB "${CMAKE_SOURCE_DIR}/lib/pdcurses/pdcurses.lib" CACHE FILEPATH "Pdcurses *.lib file")

include_directories(${PDCURSES_LIB_INCLUDE})
target_link_libraries(CockroachRacing ${PDCURSES_LIB})
elseif(UNIX)
set(PDCURSES_LIB_INCLUDE "${CMAKE_SOURCE_DIR}/lib/pdcurses/include/" CACHE PATH "Pdcurses lib include")
set(PDCURSES_LIB "${CMAKE_SOURCE_DIR}/lib/pdcurses/pdcurses.a" CACHE FILEPATH "Pdcurses *.a file")

include_directories(${PDCURSES_LIB_INCLUDE})
target_link_libraries(CockroachRacing ${PDCURSES_LIB})
else()
endif()