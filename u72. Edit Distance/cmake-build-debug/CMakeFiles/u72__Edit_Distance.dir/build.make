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
CMAKE_SOURCE_DIR = "/Users/wenyangzheng/CLion/u72. Edit Distance"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/wenyangzheng/CLion/u72. Edit Distance/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/u72__Edit_Distance.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/u72__Edit_Distance.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/u72__Edit_Distance.dir/flags.make

CMakeFiles/u72__Edit_Distance.dir/main.cpp.o: CMakeFiles/u72__Edit_Distance.dir/flags.make
CMakeFiles/u72__Edit_Distance.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/wenyangzheng/CLion/u72. Edit Distance/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/u72__Edit_Distance.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/u72__Edit_Distance.dir/main.cpp.o -c "/Users/wenyangzheng/CLion/u72. Edit Distance/main.cpp"

CMakeFiles/u72__Edit_Distance.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/u72__Edit_Distance.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/wenyangzheng/CLion/u72. Edit Distance/main.cpp" > CMakeFiles/u72__Edit_Distance.dir/main.cpp.i

CMakeFiles/u72__Edit_Distance.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/u72__Edit_Distance.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/wenyangzheng/CLion/u72. Edit Distance/main.cpp" -o CMakeFiles/u72__Edit_Distance.dir/main.cpp.s

CMakeFiles/u72__Edit_Distance.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/u72__Edit_Distance.dir/main.cpp.o.requires

CMakeFiles/u72__Edit_Distance.dir/main.cpp.o.provides: CMakeFiles/u72__Edit_Distance.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/u72__Edit_Distance.dir/build.make CMakeFiles/u72__Edit_Distance.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/u72__Edit_Distance.dir/main.cpp.o.provides

CMakeFiles/u72__Edit_Distance.dir/main.cpp.o.provides.build: CMakeFiles/u72__Edit_Distance.dir/main.cpp.o


# Object files for target u72__Edit_Distance
u72__Edit_Distance_OBJECTS = \
"CMakeFiles/u72__Edit_Distance.dir/main.cpp.o"

# External object files for target u72__Edit_Distance
u72__Edit_Distance_EXTERNAL_OBJECTS =

u72__Edit_Distance: CMakeFiles/u72__Edit_Distance.dir/main.cpp.o
u72__Edit_Distance: CMakeFiles/u72__Edit_Distance.dir/build.make
u72__Edit_Distance: CMakeFiles/u72__Edit_Distance.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/wenyangzheng/CLion/u72. Edit Distance/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable u72__Edit_Distance"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/u72__Edit_Distance.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/u72__Edit_Distance.dir/build: u72__Edit_Distance

.PHONY : CMakeFiles/u72__Edit_Distance.dir/build

CMakeFiles/u72__Edit_Distance.dir/requires: CMakeFiles/u72__Edit_Distance.dir/main.cpp.o.requires

.PHONY : CMakeFiles/u72__Edit_Distance.dir/requires

CMakeFiles/u72__Edit_Distance.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/u72__Edit_Distance.dir/cmake_clean.cmake
.PHONY : CMakeFiles/u72__Edit_Distance.dir/clean

CMakeFiles/u72__Edit_Distance.dir/depend:
	cd "/Users/wenyangzheng/CLion/u72. Edit Distance/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/wenyangzheng/CLion/u72. Edit Distance" "/Users/wenyangzheng/CLion/u72. Edit Distance" "/Users/wenyangzheng/CLion/u72. Edit Distance/cmake-build-debug" "/Users/wenyangzheng/CLion/u72. Edit Distance/cmake-build-debug" "/Users/wenyangzheng/CLion/u72. Edit Distance/cmake-build-debug/CMakeFiles/u72__Edit_Distance.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/u72__Edit_Distance.dir/depend

