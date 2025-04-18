cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME "can_addr")
project(
  ${PROJECT_NAME}
  LANGUAGES C ASM
)
add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME} INTERFACE
    ./
)
