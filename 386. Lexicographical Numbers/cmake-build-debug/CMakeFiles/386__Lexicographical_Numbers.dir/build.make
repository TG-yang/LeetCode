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
CMAKE_SOURCE_DIR = "/Users/wenyangzheng/LeetCode/386. Lexicographical Numbers"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/wenyangzheng/LeetCode/386. Lexicographical Numbers/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/386__Lexicographical_Numbers.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/386__Lexicographical_Numbers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/386__Lexicographical_Numbers.dir/flags.make

CMakeFiles/386__Lexicographical_Numbers.dir/main.cpp.o: CMakeFiles/386__Lexicographical_Numbers.dir/flags.make
CMakeFiles/386__Lexicographical_Numbers.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/wenyangzheng/LeetCode/386. Lexicographical Numbers/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/386__Lexicographical_Numbers.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/386__Lexicographical_Numbers.dir/main.cpp.o -c "/Users/wenyangzheng/LeetCode/386. Lexicographical Numbers/main.cpp"

CMakeFiles/386__Lexicographical_Numbers.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/386__Lexicographical_Numbers.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/wenyangzheng/LeetCode/386. Lexicographical Numbers/main.cpp" > CMakeFiles/386__Lexicographical_Numbers.dir/main.cpp.i

CMakeFiles/386__Lexicographical_Numbers.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/386__Lexicographical_Numbers.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/wenyangzheng/LeetCode/386. Lexicographical Numbers/main.cpp" -o CMakeFiles/386__Lexicographical_Numbers.dir/main.cpp.s

# Object files for target 386__Lexicographical_Numbers
386__Lexicographical_Numbers_OBJECTS = \
"CMakeFiles/386__Lexicographical_Numbers.dir/main.cpp.o"

# External object files for target 386__Lexicographical_Numbers
386__Lexicographical_Numbers_EXTERNAL_OBJECTS =

386__Lexicographical_Numbers: CMakeFiles/386__Lexicographical_Numbers.dir/main.cpp.o
386__Lexicographical_Numbers: CMakeFiles/386__Lexicographical_Numbers.dir/build.make
386__Lexicographical_Numbers: CMakeFiles/386__Lexicographical_Numbers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/wenyangzheng/LeetCode/386. Lexicographical Numbers/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 386__Lexicographical_Numbers"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/386__Lexicographical_Numbers.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/386__Lexicographical_Numbers.dir/build: 386__Lexicographical_Numbers

.PHONY : CMakeFiles/386__Lexicographical_Numbers.dir/build

CMakeFiles/386__Lexicographical_Numbers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/386__Lexicographical_Numbers.dir/cmake_clean.cmake
.PHONY : CMakeFiles/386__Lexicographical_Numbers.dir/clean

CMakeFiles/386__Lexicographical_Numbers.dir/depend:
	cd "/Users/wenyangzheng/LeetCode/386. Lexicographical Numbers/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/wenyangzheng/LeetCode/386. Lexicographical Numbers" "/Users/wenyangzheng/LeetCode/386. Lexicographical Numbers" "/Users/wenyangzheng/LeetCode/386. Lexicographical Numbers/cmake-build-debug" "/Users/wenyangzheng/LeetCode/386. Lexicographical Numbers/cmake-build-debug" "/Users/wenyangzheng/LeetCode/386. Lexicographical Numbers/cmake-build-debug/CMakeFiles/386__Lexicographical_Numbers.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/386__Lexicographical_Numbers.dir/depend

