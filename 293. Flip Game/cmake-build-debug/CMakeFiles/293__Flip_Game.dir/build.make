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
CMAKE_SOURCE_DIR = "/Users/wenyangzheng/LeetCode/293. Flip Game"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/wenyangzheng/LeetCode/293. Flip Game/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/293__Flip_Game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/293__Flip_Game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/293__Flip_Game.dir/flags.make

CMakeFiles/293__Flip_Game.dir/main.cpp.o: CMakeFiles/293__Flip_Game.dir/flags.make
CMakeFiles/293__Flip_Game.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/wenyangzheng/LeetCode/293. Flip Game/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/293__Flip_Game.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/293__Flip_Game.dir/main.cpp.o -c "/Users/wenyangzheng/LeetCode/293. Flip Game/main.cpp"

CMakeFiles/293__Flip_Game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/293__Flip_Game.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/wenyangzheng/LeetCode/293. Flip Game/main.cpp" > CMakeFiles/293__Flip_Game.dir/main.cpp.i

CMakeFiles/293__Flip_Game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/293__Flip_Game.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/wenyangzheng/LeetCode/293. Flip Game/main.cpp" -o CMakeFiles/293__Flip_Game.dir/main.cpp.s

# Object files for target 293__Flip_Game
293__Flip_Game_OBJECTS = \
"CMakeFiles/293__Flip_Game.dir/main.cpp.o"

# External object files for target 293__Flip_Game
293__Flip_Game_EXTERNAL_OBJECTS =

293__Flip_Game: CMakeFiles/293__Flip_Game.dir/main.cpp.o
293__Flip_Game: CMakeFiles/293__Flip_Game.dir/build.make
293__Flip_Game: CMakeFiles/293__Flip_Game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/wenyangzheng/LeetCode/293. Flip Game/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 293__Flip_Game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/293__Flip_Game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/293__Flip_Game.dir/build: 293__Flip_Game

.PHONY : CMakeFiles/293__Flip_Game.dir/build

CMakeFiles/293__Flip_Game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/293__Flip_Game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/293__Flip_Game.dir/clean

CMakeFiles/293__Flip_Game.dir/depend:
	cd "/Users/wenyangzheng/LeetCode/293. Flip Game/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/wenyangzheng/LeetCode/293. Flip Game" "/Users/wenyangzheng/LeetCode/293. Flip Game" "/Users/wenyangzheng/LeetCode/293. Flip Game/cmake-build-debug" "/Users/wenyangzheng/LeetCode/293. Flip Game/cmake-build-debug" "/Users/wenyangzheng/LeetCode/293. Flip Game/cmake-build-debug/CMakeFiles/293__Flip_Game.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/293__Flip_Game.dir/depend

