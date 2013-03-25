#=============================================================================#
# Author: QueezyTheGreat                                                      #
# Date:   26.04.2011                                                          #
#                                                                             #
# Description: Arduino CMake example                                          #
#                                                                             #
#=============================================================================#
set(CMAKE_TOOLCHAIN_FILE cmake/ArduinoToolchain.cmake) # Arduino Toolchain


cmake_minimum_required(VERSION 2.8)
#====================================================================#
#  Setup Project                                                     #
#====================================================================#
project(fenceref C CXX)

generate_arduino_firmware(fenceref
  BOARD uno
  PORT /dev/ttyUSB0
  SRCS fenceref.cpp)

print_board_list()
print_programmer_list()
