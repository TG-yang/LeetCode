# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/wenyangzheng/CLion/65. Valid Number"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/wenyangzheng/CLion/65. Valid Number/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/65__Valid_Number.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/65__Valid_Number.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/65__Valid_Number.dir/flags.make

CMakeFiles/65__Valid_Number.dir/main.cpp.o: CMakeFiles/65__Valid_Number.dir/flags.make
CMakeFiles/65__Valid_Number.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/wenyangzheng/CLion/65. Valid Number/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/65__Valid_Number.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/65__Valid_Number.dir/main.cpp.o -c "/Users/wenyangzheng/CLion/65. Valid Number/main.cpp"

CMakeFiles/65__Valid_Number.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/65__Valid_Number.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/wenyangzheng/CLion/65. Valid Number/main.cpp" > CMakeFiles/65__Valid_Number.dir/main.cpp.i

CMakeFiles/65__Valid_Number.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/65__Valid_Number.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/wenyangzheng/CLion/65. Valid Number/main.cpp" -o CMakeFiles/65__Valid_Number.dir/main.cpp.s

CMakeFiles/65__Valid_Number.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/65__Valid_Number.dir/main.cpp.o.requires

CMakeFiles/65__Valid_Number.dir/main.cpp.o.provides: CMakeFiles/65__Valid_Number.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/65__Valid_Number.dir/build.make CMakeFiles/65__Valid_Number.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/65__Valid_Number.dir/main.cpp.o.provides

CMakeFiles/65__Valid_Number.dir/main.cpp.o.provides.build: CMakeFiles/65__Valid_Number.dir/main.cpp.o


# Object files for target 65__Valid_Number
65__Valid_Number_OBJECTS = \
"CMakeFiles/65__Valid_Number.dir/main.cpp.o"

# External object files for target 65__Valid_Number
65__Valid_Number_EXTERNAL_OBJECTS =

65__Valid_Number: CMakeFiles/65__Valid_Number.dir/main.cpp.o
65__Valid_Number: CMakeFiles/65__Valid_Number.dir/build.make
65__Valid_Number: CMakeFiles/65__Valid_Number.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/wenyangzheng/CLion/65. Valid Number/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 65__Valid_Number"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/65__Valid_Number.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/65__Valid_Number.dir/build: 65__Valid_Number

.PHONY : CMakeFiles/65__Valid_Number.dir/build

CMakeFiles/65__Valid_Number.dir/requires: CMakeFiles/65__Valid_Number.dir/main.cpp.o.requires

.PHONY : CMakeFiles/65__Valid_Number.dir/requires

CMakeFiles/65__Valid_Number.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/65__Valid_Number.dir/cmake_clean.cmake
.PHONY : CMakeFiles/65__Valid_Number.dir/clean

CMakeFiles/65__Valid_Number.dir/depend:
	cd "/Users/wenyangzheng/CLion/65. Valid Number/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/wenyangzheng/CLion/65. Valid Number" "/Users/wenyangzheng/CLion/65. Valid Number" "/Users/wenyangzheng/CLion/65. Valid Number/cmake-build-debug" "/Users/wenyangzheng/CLion/65. Valid Number/cmake-build-debug" "/Users/wenyangzheng/CLion/65. Valid Number/cmake-build-debug/CMakeFiles/65__Valid_Number.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/65__Valid_Number.dir/depend

