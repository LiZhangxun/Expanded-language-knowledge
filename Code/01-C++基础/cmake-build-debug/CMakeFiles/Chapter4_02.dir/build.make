# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/lizhangxun/CLion/clion-2021.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/lizhangxun/CLion/clion-2021.2/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lizhangxun/CLion/Clion_Project/Code/01-C++基础

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lizhangxun/CLion/Clion_Project/Code/01-C++基础/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Chapter4_02.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Chapter4_02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Chapter4_02.dir/flags.make

CMakeFiles/Chapter4_02.dir/Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp.o: CMakeFiles/Chapter4_02.dir/flags.make
CMakeFiles/Chapter4_02.dir/Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp.o: ../Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lizhangxun/CLion/Clion_Project/Code/01-C++基础/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Chapter4_02.dir/Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Chapter4_02.dir/Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp.o -c /home/lizhangxun/CLion/Clion_Project/Code/01-C++基础/Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp

CMakeFiles/Chapter4_02.dir/Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chapter4_02.dir/Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lizhangxun/CLion/Clion_Project/Code/01-C++基础/Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp > CMakeFiles/Chapter4_02.dir/Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp.i

CMakeFiles/Chapter4_02.dir/Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chapter4_02.dir/Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lizhangxun/CLion/Clion_Project/Code/01-C++基础/Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp -o CMakeFiles/Chapter4_02.dir/Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp.s

# Object files for target Chapter4_02
Chapter4_02_OBJECTS = \
"CMakeFiles/Chapter4_02.dir/Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp.o"

# External object files for target Chapter4_02
Chapter4_02_EXTERNAL_OBJECTS =

Chapter4_02: CMakeFiles/Chapter4_02.dir/Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp.o
Chapter4_02: CMakeFiles/Chapter4_02.dir/build.make
Chapter4_02: CMakeFiles/Chapter4_02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lizhangxun/CLion/Clion_Project/Code/01-C++基础/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Chapter4_02"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Chapter4_02.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Chapter4_02.dir/build: Chapter4_02
.PHONY : CMakeFiles/Chapter4_02.dir/build

CMakeFiles/Chapter4_02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Chapter4_02.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Chapter4_02.dir/clean

CMakeFiles/Chapter4_02.dir/depend:
	cd /home/lizhangxun/CLion/Clion_Project/Code/01-C++基础/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lizhangxun/CLion/Clion_Project/Code/01-C++基础 /home/lizhangxun/CLion/Clion_Project/Code/01-C++基础 /home/lizhangxun/CLion/Clion_Project/Code/01-C++基础/cmake-build-debug /home/lizhangxun/CLion/Clion_Project/Code/01-C++基础/cmake-build-debug /home/lizhangxun/CLion/Clion_Project/Code/01-C++基础/cmake-build-debug/CMakeFiles/Chapter4_02.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Chapter4_02.dir/depend

