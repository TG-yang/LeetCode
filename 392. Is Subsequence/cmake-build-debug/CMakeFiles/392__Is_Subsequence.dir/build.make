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
CMAKE_SOURCE_DIR = "/Users/wenyangzheng/LeetCode/392. Is Subsequence"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/wenyangzheng/LeetCode/392. Is Subsequence/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/392__Is_Subsequence.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/392__Is_Subsequence.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/392__Is_Subsequence.dir/flags.make

CMakeFiles/392__Is_Subsequence.dir/main.cpp.o: CMakeFiles/392__Is_Subsequence.dir/flags.make
CMakeFiles/392__Is_Subsequence.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/wenyangzheng/LeetCode/392. Is Subsequence/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/392__Is_Subsequence.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/392__Is_Subsequence.dir/main.cpp.o -c "/Users/wenyangzheng/LeetCode/392. Is Subsequence/main.cpp"

CMakeFiles/392__Is_Subsequence.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/392__Is_Subsequence.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/wenyangzheng/LeetCode/392. Is Subsequence/main.cpp" > CMakeFiles/392__Is_Subsequence.dir/main.cpp.i

CMakeFiles/392__Is_Subsequence.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/392__Is_Subsequence.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/wenyangzheng/LeetCode/392. Is Subsequence/main.cpp" -o CMakeFiles/392__Is_Subsequence.dir/main.cpp.s

# Object files for target 392__Is_Subsequence
392__Is_Subsequence_OBJECTS = \
"CMakeFiles/392__Is_Subsequence.dir/main.cpp.o"

# External object files for target 392__Is_Subsequence
392__Is_Subsequence_EXTERNAL_OBJECTS =

392__Is_Subsequence: CMakeFiles/392__Is_Subsequence.dir/main.cpp.o
392__Is_Subsequence: CMakeFiles/392__Is_Subsequence.dir/build.make
392__Is_Subsequence: CMakeFiles/392__Is_Subsequence.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/wenyangzheng/LeetCode/392. Is Subsequence/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 392__Is_Subsequence"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/392__Is_Subsequence.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/392__Is_Subsequence.dir/build: 392__Is_Subsequence

.PHONY : CMakeFiles/392__Is_Subsequence.dir/build

CMakeFiles/392__Is_Subsequence.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/392__Is_Subsequence.dir/cmake_clean.cmake
.PHONY : CMakeFiles/392__Is_Subsequence.dir/clean

CMakeFiles/392__Is_Subsequence.dir/depend:
	cd "/Users/wenyangzheng/LeetCode/392. Is Subsequence/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/wenyangzheng/LeetCode/392. Is Subsequence" "/Users/wenyangzheng/LeetCode/392. Is Subsequence" "/Users/wenyangzheng/LeetCode/392. Is Subsequence/cmake-build-debug" "/Users/wenyangzheng/LeetCode/392. Is Subsequence/cmake-build-debug" "/Users/wenyangzheng/LeetCode/392. Is Subsequence/cmake-build-debug/CMakeFiles/392__Is_Subsequence.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/392__Is_Subsequence.dir/depend

