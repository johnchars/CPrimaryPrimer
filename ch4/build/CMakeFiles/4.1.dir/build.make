# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cwj/CPlusPlus_ws/ch4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cwj/CPlusPlus_ws/ch4/build

# Include any dependencies generated for this target.
include CMakeFiles/4.1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/4.1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/4.1.dir/flags.make

CMakeFiles/4.1.dir/4.1.cxx.o: CMakeFiles/4.1.dir/flags.make
CMakeFiles/4.1.dir/4.1.cxx.o: ../4.1.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cwj/CPlusPlus_ws/ch4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/4.1.dir/4.1.cxx.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/4.1.dir/4.1.cxx.o -c /home/cwj/CPlusPlus_ws/ch4/4.1.cxx

CMakeFiles/4.1.dir/4.1.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/4.1.dir/4.1.cxx.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cwj/CPlusPlus_ws/ch4/4.1.cxx > CMakeFiles/4.1.dir/4.1.cxx.i

CMakeFiles/4.1.dir/4.1.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/4.1.dir/4.1.cxx.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cwj/CPlusPlus_ws/ch4/4.1.cxx -o CMakeFiles/4.1.dir/4.1.cxx.s

CMakeFiles/4.1.dir/4.1.cxx.o.requires:

.PHONY : CMakeFiles/4.1.dir/4.1.cxx.o.requires

CMakeFiles/4.1.dir/4.1.cxx.o.provides: CMakeFiles/4.1.dir/4.1.cxx.o.requires
	$(MAKE) -f CMakeFiles/4.1.dir/build.make CMakeFiles/4.1.dir/4.1.cxx.o.provides.build
.PHONY : CMakeFiles/4.1.dir/4.1.cxx.o.provides

CMakeFiles/4.1.dir/4.1.cxx.o.provides.build: CMakeFiles/4.1.dir/4.1.cxx.o


# Object files for target 4.1
4_1_OBJECTS = \
"CMakeFiles/4.1.dir/4.1.cxx.o"

# External object files for target 4.1
4_1_EXTERNAL_OBJECTS =

4.1: CMakeFiles/4.1.dir/4.1.cxx.o
4.1: CMakeFiles/4.1.dir/build.make
4.1: CMakeFiles/4.1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cwj/CPlusPlus_ws/ch4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 4.1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/4.1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/4.1.dir/build: 4.1

.PHONY : CMakeFiles/4.1.dir/build

CMakeFiles/4.1.dir/requires: CMakeFiles/4.1.dir/4.1.cxx.o.requires

.PHONY : CMakeFiles/4.1.dir/requires

CMakeFiles/4.1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/4.1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/4.1.dir/clean

CMakeFiles/4.1.dir/depend:
	cd /home/cwj/CPlusPlus_ws/ch4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cwj/CPlusPlus_ws/ch4 /home/cwj/CPlusPlus_ws/ch4 /home/cwj/CPlusPlus_ws/ch4/build /home/cwj/CPlusPlus_ws/ch4/build /home/cwj/CPlusPlus_ws/ch4/build/CMakeFiles/4.1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/4.1.dir/depend
