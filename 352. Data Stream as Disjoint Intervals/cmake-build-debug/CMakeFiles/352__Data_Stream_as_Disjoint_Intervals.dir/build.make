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
CMAKE_SOURCE_DIR = "/Users/wenyangzheng/LeetCode/352. Data Stream as Disjoint Intervals"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/wenyangzheng/LeetCode/352. Data Stream as Disjoint Intervals/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/flags.make

CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/main.cpp.o: CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/flags.make
CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/wenyangzheng/LeetCode/352. Data Stream as Disjoint Intervals/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/main.cpp.o -c "/Users/wenyangzheng/LeetCode/352. Data Stream as Disjoint Intervals/main.cpp"

CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/wenyangzheng/LeetCode/352. Data Stream as Disjoint Intervals/main.cpp" > CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/main.cpp.i

CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/wenyangzheng/LeetCode/352. Data Stream as Disjoint Intervals/main.cpp" -o CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/main.cpp.s

# Object files for target 352__Data_Stream_as_Disjoint_Intervals
352__Data_Stream_as_Disjoint_Intervals_OBJECTS = \
"CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/main.cpp.o"

# External object files for target 352__Data_Stream_as_Disjoint_Intervals
352__Data_Stream_as_Disjoint_Intervals_EXTERNAL_OBJECTS =

352__Data_Stream_as_Disjoint_Intervals: CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/main.cpp.o
352__Data_Stream_as_Disjoint_Intervals: CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/build.make
352__Data_Stream_as_Disjoint_Intervals: CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/wenyangzheng/LeetCode/352. Data Stream as Disjoint Intervals/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 352__Data_Stream_as_Disjoint_Intervals"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/build: 352__Data_Stream_as_Disjoint_Intervals

.PHONY : CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/build

CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/cmake_clean.cmake
.PHONY : CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/clean

CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/depend:
	cd "/Users/wenyangzheng/LeetCode/352. Data Stream as Disjoint Intervals/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/wenyangzheng/LeetCode/352. Data Stream as Disjoint Intervals" "/Users/wenyangzheng/LeetCode/352. Data Stream as Disjoint Intervals" "/Users/wenyangzheng/LeetCode/352. Data Stream as Disjoint Intervals/cmake-build-debug" "/Users/wenyangzheng/LeetCode/352. Data Stream as Disjoint Intervals/cmake-build-debug" "/Users/wenyangzheng/LeetCode/352. Data Stream as Disjoint Intervals/cmake-build-debug/CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/352__Data_Stream_as_Disjoint_Intervals.dir/depend
