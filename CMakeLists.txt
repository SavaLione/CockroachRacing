cmake_minimum_required (VERSION 2.6)

project (CockroachRacing)

################################
# Sources
################################
set(HEADERS
		src/CockroachRacing.h
)

set(SOURCES
		src/Authors.cpp
		src/Crew.cpp
		src/Engine.cpp
		src/GraphicEngine.cpp
		src/Main.cpp
		src/MenuMain.cpp
)

add_executable (CockroachRacing ${HEADERS} ${SOURCES})