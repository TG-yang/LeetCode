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
CMAKE_SOURCE_DIR = "/Users/wenyangzheng/LeetCode/291. Word Pattern II"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/wenyangzheng/LeetCode/291. Word Pattern II/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/291__Word_Pattern_II.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/291__Word_Pattern_II.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/291__Word_Pattern_II.dir/flags.make

CMakeFiles/291__Word_Pattern_II.dir/main.cpp.o: CMakeFiles/291__Word_Pattern_II.dir/flags.make
CMakeFiles/291__Word_Pattern_II.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/wenyangzheng/LeetCode/291. Word Pattern II/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/291__Word_Pattern_II.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/291__Word_Pattern_II.dir/main.cpp.o -c "/Users/wenyangzheng/LeetCode/291. Word Pattern II/main.cpp"

CMakeFiles/291__Word_Pattern_II.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/291__Word_Pattern_II.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/wenyangzheng/LeetCode/291. Word Pattern II/main.cpp" > CMakeFiles/291__Word_Pattern_II.dir/main.cpp.i

CMakeFiles/291__Word_Pattern_II.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/291__Word_Pattern_II.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/wenyangzheng/LeetCode/291. Word Pattern II/main.cpp" -o CMakeFiles/291__Word_Pattern_II.dir/main.cpp.s

# Object files for target 291__Word_Pattern_II
291__Word_Pattern_II_OBJECTS = \
"CMakeFiles/291__Word_Pattern_II.dir/main.cpp.o"

# External object files for target 291__Word_Pattern_II
291__Word_Pattern_II_EXTERNAL_OBJECTS =

291__Word_Pattern_II: CMakeFiles/291__Word_Pattern_II.dir/main.cpp.o
291__Word_Pattern_II: CMakeFiles/291__Word_Pattern_II.dir/build.make
291__Word_Pattern_II: CMakeFiles/291__Word_Pattern_II.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/wenyangzheng/LeetCode/291. Word Pattern II/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 291__Word_Pattern_II"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/291__Word_Pattern_II.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/291__Word_Pattern_II.dir/build: 291__Word_Pattern_II

.PHONY : CMakeFiles/291__Word_Pattern_II.dir/build

CMakeFiles/291__Word_Pattern_II.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/291__Word_Pattern_II.dir/cmake_clean.cmake
.PHONY : CMakeFiles/291__Word_Pattern_II.dir/clean

CMakeFiles/291__Word_Pattern_II.dir/depend:
	cd "/Users/wenyangzheng/LeetCode/291. Word Pattern II/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/wenyangzheng/LeetCode/291. Word Pattern II" "/Users/wenyangzheng/LeetCode/291. Word Pattern II" "/Users/wenyangzheng/LeetCode/291. Word Pattern II/cmake-build-debug" "/Users/wenyangzheng/LeetCode/291. Word Pattern II/cmake-build-debug" "/Users/wenyangzheng/LeetCode/291. Word Pattern II/cmake-build-debug/CMakeFiles/291__Word_Pattern_II.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/291__Word_Pattern_II.dir/depend

