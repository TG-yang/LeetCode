# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/wenyangzheng/LeetCode/529. Minesweeper"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/wenyangzheng/LeetCode/529. Minesweeper/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/529__Minesweeper.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/529__Minesweeper.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/529__Minesweeper.dir/flags.make

CMakeFiles/529__Minesweeper.dir/main.cpp.o: CMakeFiles/529__Minesweeper.dir/flags.make
CMakeFiles/529__Minesweeper.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/wenyangzheng/LeetCode/529. Minesweeper/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/529__Minesweeper.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/529__Minesweeper.dir/main.cpp.o -c "/Users/wenyangzheng/LeetCode/529. Minesweeper/main.cpp"

CMakeFiles/529__Minesweeper.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/529__Minesweeper.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/wenyangzheng/LeetCode/529. Minesweeper/main.cpp" > CMakeFiles/529__Minesweeper.dir/main.cpp.i

CMakeFiles/529__Minesweeper.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/529__Minesweeper.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/wenyangzheng/LeetCode/529. Minesweeper/main.cpp" -o CMakeFiles/529__Minesweeper.dir/main.cpp.s

# Object files for target 529__Minesweeper
529__Minesweeper_OBJECTS = \
"CMakeFiles/529__Minesweeper.dir/main.cpp.o"

# External object files for target 529__Minesweeper
529__Minesweeper_EXTERNAL_OBJECTS =

529__Minesweeper: CMakeFiles/529__Minesweeper.dir/main.cpp.o
529__Minesweeper: CMakeFiles/529__Minesweeper.dir/build.make
529__Minesweeper: CMakeFiles/529__Minesweeper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/wenyangzheng/LeetCode/529. Minesweeper/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 529__Minesweeper"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/529__Minesweeper.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/529__Minesweeper.dir/build: 529__Minesweeper

.PHONY : CMakeFiles/529__Minesweeper.dir/build

CMakeFiles/529__Minesweeper.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/529__Minesweeper.dir/cmake_clean.cmake
.PHONY : CMakeFiles/529__Minesweeper.dir/clean

CMakeFiles/529__Minesweeper.dir/depend:
	cd "/Users/wenyangzheng/LeetCode/529. Minesweeper/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/wenyangzheng/LeetCode/529. Minesweeper" "/Users/wenyangzheng/LeetCode/529. Minesweeper" "/Users/wenyangzheng/LeetCode/529. Minesweeper/cmake-build-debug" "/Users/wenyangzheng/LeetCode/529. Minesweeper/cmake-build-debug" "/Users/wenyangzheng/LeetCode/529. Minesweeper/cmake-build-debug/CMakeFiles/529__Minesweeper.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/529__Minesweeper.dir/depend

