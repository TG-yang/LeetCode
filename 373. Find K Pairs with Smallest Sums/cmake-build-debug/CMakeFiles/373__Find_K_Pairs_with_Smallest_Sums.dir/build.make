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
CMAKE_SOURCE_DIR = "/Users/wenyangzheng/LeetCode/373. Find K Pairs with Smallest Sums"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/wenyangzheng/LeetCode/373. Find K Pairs with Smallest Sums/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/flags.make

CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/main.cpp.o: CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/flags.make
CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/wenyangzheng/LeetCode/373. Find K Pairs with Smallest Sums/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/main.cpp.o -c "/Users/wenyangzheng/LeetCode/373. Find K Pairs with Smallest Sums/main.cpp"

CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/wenyangzheng/LeetCode/373. Find K Pairs with Smallest Sums/main.cpp" > CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/main.cpp.i

CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/wenyangzheng/LeetCode/373. Find K Pairs with Smallest Sums/main.cpp" -o CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/main.cpp.s

# Object files for target 373__Find_K_Pairs_with_Smallest_Sums
373__Find_K_Pairs_with_Smallest_Sums_OBJECTS = \
"CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/main.cpp.o"

# External object files for target 373__Find_K_Pairs_with_Smallest_Sums
373__Find_K_Pairs_with_Smallest_Sums_EXTERNAL_OBJECTS =

373__Find_K_Pairs_with_Smallest_Sums: CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/main.cpp.o
373__Find_K_Pairs_with_Smallest_Sums: CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/build.make
373__Find_K_Pairs_with_Smallest_Sums: CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/wenyangzheng/LeetCode/373. Find K Pairs with Smallest Sums/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 373__Find_K_Pairs_with_Smallest_Sums"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/build: 373__Find_K_Pairs_with_Smallest_Sums

.PHONY : CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/build

CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/cmake_clean.cmake
.PHONY : CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/clean

CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/depend:
	cd "/Users/wenyangzheng/LeetCode/373. Find K Pairs with Smallest Sums/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/wenyangzheng/LeetCode/373. Find K Pairs with Smallest Sums" "/Users/wenyangzheng/LeetCode/373. Find K Pairs with Smallest Sums" "/Users/wenyangzheng/LeetCode/373. Find K Pairs with Smallest Sums/cmake-build-debug" "/Users/wenyangzheng/LeetCode/373. Find K Pairs with Smallest Sums/cmake-build-debug" "/Users/wenyangzheng/LeetCode/373. Find K Pairs with Smallest Sums/cmake-build-debug/CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/373__Find_K_Pairs_with_Smallest_Sums.dir/depend

