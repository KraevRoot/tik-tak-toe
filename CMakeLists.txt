cmake_minimum_required(VERSION 2.8)

FIND_PACKAGE(Boost)
IF (Boost_FOUND)
  INCLUDE_DIRECTORIES($(Boost_INCLUDE_DIR))
  ADD_DEFINITIONS( "-DHAS_BOOST" )
ENDIF()

project(tic-tac-toe)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra -Wno-unused-parameter")

add_executable(tic-tac-toe main.cpp PlayField.cpp PlayersConnector.cpp Player.cpp)
