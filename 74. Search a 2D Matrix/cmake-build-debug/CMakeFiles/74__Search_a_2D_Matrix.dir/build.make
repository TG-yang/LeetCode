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
CMAKE_SOURCE_DIR = "/Users/wenyangzheng/CLion/74. Search a 2D Matrix"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/wenyangzheng/CLion/74. Search a 2D Matrix/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/74__Search_a_2D_Matrix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/74__Search_a_2D_Matrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/74__Search_a_2D_Matrix.dir/flags.make

CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.o: CMakeFiles/74__Search_a_2D_Matrix.dir/flags.make
CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/wenyangzheng/CLion/74. Search a 2D Matrix/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.o -c "/Users/wenyangzheng/CLion/74. Search a 2D Matrix/main.cpp"

CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/wenyangzheng/CLion/74. Search a 2D Matrix/main.cpp" > CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.i

CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/wenyangzheng/CLion/74. Search a 2D Matrix/main.cpp" -o CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.s

CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.o.requires

CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.o.provides: CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/74__Search_a_2D_Matrix.dir/build.make CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.o.provides

CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.o.provides.build: CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.o


# Object files for target 74__Search_a_2D_Matrix
74__Search_a_2D_Matrix_OBJECTS = \
"CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.o"

# External object files for target 74__Search_a_2D_Matrix
74__Search_a_2D_Matrix_EXTERNAL_OBJECTS =

74__Search_a_2D_Matrix: CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.o
74__Search_a_2D_Matrix: CMakeFiles/74__Search_a_2D_Matrix.dir/build.make
74__Search_a_2D_Matrix: CMakeFiles/74__Search_a_2D_Matrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/wenyangzheng/CLion/74. Search a 2D Matrix/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 74__Search_a_2D_Matrix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/74__Search_a_2D_Matrix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/74__Search_a_2D_Matrix.dir/build: 74__Search_a_2D_Matrix

.PHONY : CMakeFiles/74__Search_a_2D_Matrix.dir/build

CMakeFiles/74__Search_a_2D_Matrix.dir/requires: CMakeFiles/74__Search_a_2D_Matrix.dir/main.cpp.o.requires

.PHONY : CMakeFiles/74__Search_a_2D_Matrix.dir/requires

CMakeFiles/74__Search_a_2D_Matrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/74__Search_a_2D_Matrix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/74__Search_a_2D_Matrix.dir/clean

CMakeFiles/74__Search_a_2D_Matrix.dir/depend:
	cd "/Users/wenyangzheng/CLion/74. Search a 2D Matrix/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/wenyangzheng/CLion/74. Search a 2D Matrix" "/Users/wenyangzheng/CLion/74. Search a 2D Matrix" "/Users/wenyangzheng/CLion/74. Search a 2D Matrix/cmake-build-debug" "/Users/wenyangzheng/CLion/74. Search a 2D Matrix/cmake-build-debug" "/Users/wenyangzheng/CLion/74. Search a 2D Matrix/cmake-build-debug/CMakeFiles/74__Search_a_2D_Matrix.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/74__Search_a_2D_Matrix.dir/depend

