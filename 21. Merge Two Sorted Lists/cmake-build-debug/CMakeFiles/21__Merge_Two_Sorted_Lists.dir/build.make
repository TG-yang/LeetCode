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
CMAKE_SOURCE_DIR = "/Users/wenyangzheng/CLion/21. Merge Two Sorted Lists"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/wenyangzheng/CLion/21. Merge Two Sorted Lists/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/21__Merge_Two_Sorted_Lists.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/21__Merge_Two_Sorted_Lists.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/21__Merge_Two_Sorted_Lists.dir/flags.make

CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.o: CMakeFiles/21__Merge_Two_Sorted_Lists.dir/flags.make
CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/wenyangzheng/CLion/21. Merge Two Sorted Lists/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.o -c "/Users/wenyangzheng/CLion/21. Merge Two Sorted Lists/main.cpp"

CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/wenyangzheng/CLion/21. Merge Two Sorted Lists/main.cpp" > CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.i

CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/wenyangzheng/CLion/21. Merge Two Sorted Lists/main.cpp" -o CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.s

CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.o.requires

CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.o.provides: CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/21__Merge_Two_Sorted_Lists.dir/build.make CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.o.provides

CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.o.provides.build: CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.o


# Object files for target 21__Merge_Two_Sorted_Lists
21__Merge_Two_Sorted_Lists_OBJECTS = \
"CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.o"

# External object files for target 21__Merge_Two_Sorted_Lists
21__Merge_Two_Sorted_Lists_EXTERNAL_OBJECTS =

21__Merge_Two_Sorted_Lists: CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.o
21__Merge_Two_Sorted_Lists: CMakeFiles/21__Merge_Two_Sorted_Lists.dir/build.make
21__Merge_Two_Sorted_Lists: CMakeFiles/21__Merge_Two_Sorted_Lists.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/wenyangzheng/CLion/21. Merge Two Sorted Lists/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 21__Merge_Two_Sorted_Lists"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/21__Merge_Two_Sorted_Lists.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/21__Merge_Two_Sorted_Lists.dir/build: 21__Merge_Two_Sorted_Lists

.PHONY : CMakeFiles/21__Merge_Two_Sorted_Lists.dir/build

CMakeFiles/21__Merge_Two_Sorted_Lists.dir/requires: CMakeFiles/21__Merge_Two_Sorted_Lists.dir/main.cpp.o.requires

.PHONY : CMakeFiles/21__Merge_Two_Sorted_Lists.dir/requires

CMakeFiles/21__Merge_Two_Sorted_Lists.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/21__Merge_Two_Sorted_Lists.dir/cmake_clean.cmake
.PHONY : CMakeFiles/21__Merge_Two_Sorted_Lists.dir/clean

CMakeFiles/21__Merge_Two_Sorted_Lists.dir/depend:
	cd "/Users/wenyangzheng/CLion/21. Merge Two Sorted Lists/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/wenyangzheng/CLion/21. Merge Two Sorted Lists" "/Users/wenyangzheng/CLion/21. Merge Two Sorted Lists" "/Users/wenyangzheng/CLion/21. Merge Two Sorted Lists/cmake-build-debug" "/Users/wenyangzheng/CLion/21. Merge Two Sorted Lists/cmake-build-debug" "/Users/wenyangzheng/CLion/21. Merge Two Sorted Lists/cmake-build-debug/CMakeFiles/21__Merge_Two_Sorted_Lists.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/21__Merge_Two_Sorted_Lists.dir/depend

