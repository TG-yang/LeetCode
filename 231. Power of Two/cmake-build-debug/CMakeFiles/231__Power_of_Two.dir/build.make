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
CMAKE_SOURCE_DIR = "/Users/wenyangzheng/LeetCode/231. Power of Two"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/wenyangzheng/LeetCode/231. Power of Two/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/231__Power_of_Two.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/231__Power_of_Two.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/231__Power_of_Two.dir/flags.make

CMakeFiles/231__Power_of_Two.dir/main.cpp.o: CMakeFiles/231__Power_of_Two.dir/flags.make
CMakeFiles/231__Power_of_Two.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/wenyangzheng/LeetCode/231. Power of Two/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/231__Power_of_Two.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/231__Power_of_Two.dir/main.cpp.o -c "/Users/wenyangzheng/LeetCode/231. Power of Two/main.cpp"

CMakeFiles/231__Power_of_Two.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/231__Power_of_Two.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/wenyangzheng/LeetCode/231. Power of Two/main.cpp" > CMakeFiles/231__Power_of_Two.dir/main.cpp.i

CMakeFiles/231__Power_of_Two.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/231__Power_of_Two.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/wenyangzheng/LeetCode/231. Power of Two/main.cpp" -o CMakeFiles/231__Power_of_Two.dir/main.cpp.s

# Object files for target 231__Power_of_Two
231__Power_of_Two_OBJECTS = \
"CMakeFiles/231__Power_of_Two.dir/main.cpp.o"

# External object files for target 231__Power_of_Two
231__Power_of_Two_EXTERNAL_OBJECTS =

231__Power_of_Two: CMakeFiles/231__Power_of_Two.dir/main.cpp.o
231__Power_of_Two: CMakeFiles/231__Power_of_Two.dir/build.make
231__Power_of_Two: CMakeFiles/231__Power_of_Two.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/wenyangzheng/LeetCode/231. Power of Two/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 231__Power_of_Two"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/231__Power_of_Two.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/231__Power_of_Two.dir/build: 231__Power_of_Two

.PHONY : CMakeFiles/231__Power_of_Two.dir/build

CMakeFiles/231__Power_of_Two.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/231__Power_of_Two.dir/cmake_clean.cmake
.PHONY : CMakeFiles/231__Power_of_Two.dir/clean

CMakeFiles/231__Power_of_Two.dir/depend:
	cd "/Users/wenyangzheng/LeetCode/231. Power of Two/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/wenyangzheng/LeetCode/231. Power of Two" "/Users/wenyangzheng/LeetCode/231. Power of Two" "/Users/wenyangzheng/LeetCode/231. Power of Two/cmake-build-debug" "/Users/wenyangzheng/LeetCode/231. Power of Two/cmake-build-debug" "/Users/wenyangzheng/LeetCode/231. Power of Two/cmake-build-debug/CMakeFiles/231__Power_of_Two.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/231__Power_of_Two.dir/depend

