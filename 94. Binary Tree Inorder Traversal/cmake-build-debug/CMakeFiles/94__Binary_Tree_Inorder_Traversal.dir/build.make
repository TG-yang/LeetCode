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
CMAKE_SOURCE_DIR = "/Users/wenyangzheng/CLion/94. Binary Tree Inorder Traversal"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/wenyangzheng/CLion/94. Binary Tree Inorder Traversal/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/flags.make

CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.o: CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/flags.make
CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/wenyangzheng/CLion/94. Binary Tree Inorder Traversal/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.o -c "/Users/wenyangzheng/CLion/94. Binary Tree Inorder Traversal/main.cpp"

CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/wenyangzheng/CLion/94. Binary Tree Inorder Traversal/main.cpp" > CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.i

CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/wenyangzheng/CLion/94. Binary Tree Inorder Traversal/main.cpp" -o CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.s

CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.o.requires

CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.o.provides: CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/build.make CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.o.provides

CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.o.provides.build: CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.o


# Object files for target 94__Binary_Tree_Inorder_Traversal
94__Binary_Tree_Inorder_Traversal_OBJECTS = \
"CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.o"

# External object files for target 94__Binary_Tree_Inorder_Traversal
94__Binary_Tree_Inorder_Traversal_EXTERNAL_OBJECTS =

94__Binary_Tree_Inorder_Traversal: CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.o
94__Binary_Tree_Inorder_Traversal: CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/build.make
94__Binary_Tree_Inorder_Traversal: CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/wenyangzheng/CLion/94. Binary Tree Inorder Traversal/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 94__Binary_Tree_Inorder_Traversal"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/build: 94__Binary_Tree_Inorder_Traversal

.PHONY : CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/build

CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/requires: CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/main.cpp.o.requires

.PHONY : CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/requires

CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/cmake_clean.cmake
.PHONY : CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/clean

CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/depend:
	cd "/Users/wenyangzheng/CLion/94. Binary Tree Inorder Traversal/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/wenyangzheng/CLion/94. Binary Tree Inorder Traversal" "/Users/wenyangzheng/CLion/94. Binary Tree Inorder Traversal" "/Users/wenyangzheng/CLion/94. Binary Tree Inorder Traversal/cmake-build-debug" "/Users/wenyangzheng/CLion/94. Binary Tree Inorder Traversal/cmake-build-debug" "/Users/wenyangzheng/CLion/94. Binary Tree Inorder Traversal/cmake-build-debug/CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/94__Binary_Tree_Inorder_Traversal.dir/depend

