cmake_minimum_required(VERSION 3.14)
project(Testing)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  Main
  Main.cpp
  Alien.cpp
  Boss.cpp
  Boss.h
  GameObject.cpp
  GameObject.h
  Tests.h
  Alien.h
  MegaBoss.h
  MegaBoss.cpp
  
)
target_link_libraries(
  Main
  gtest_main
)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Main)

include(GoogleTest)
gtest_discover_tests(Main)

set(CMAKE_SUPPRESS_REGENERATION true)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)