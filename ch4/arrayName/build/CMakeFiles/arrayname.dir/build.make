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
CMAKE_SOURCE_DIR = /home/cwj/CPlusPlus_ws/ch4/arrayName

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cwj/CPlusPlus_ws/ch4/arrayName/build

# Include any dependencies generated for this target.
include CMakeFiles/arrayname.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/arrayname.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arrayname.dir/flags.make

CMakeFiles/arrayname.dir/main.cpp.o: CMakeFiles/arrayname.dir/flags.make
CMakeFiles/arrayname.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cwj/CPlusPlus_ws/ch4/arrayName/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/arrayname.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arrayname.dir/main.cpp.o -c /home/cwj/CPlusPlus_ws/ch4/arrayName/main.cpp

CMakeFiles/arrayname.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arrayname.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cwj/CPlusPlus_ws/ch4/arrayName/main.cpp > CMakeFiles/arrayname.dir/main.cpp.i

CMakeFiles/arrayname.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arrayname.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cwj/CPlusPlus_ws/ch4/arrayName/main.cpp -o CMakeFiles/arrayname.dir/main.cpp.s

CMakeFiles/arrayname.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/arrayname.dir/main.cpp.o.requires

CMakeFiles/arrayname.dir/main.cpp.o.provides: CMakeFiles/arrayname.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/arrayname.dir/build.make CMakeFiles/arrayname.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/arrayname.dir/main.cpp.o.provides

CMakeFiles/arrayname.dir/main.cpp.o.provides.build: CMakeFiles/arrayname.dir/main.cpp.o


# Object files for target arrayname
arrayname_OBJECTS = \
"CMakeFiles/arrayname.dir/main.cpp.o"

# External object files for target arrayname
arrayname_EXTERNAL_OBJECTS =

arrayname: CMakeFiles/arrayname.dir/main.cpp.o
arrayname: CMakeFiles/arrayname.dir/build.make
arrayname: CMakeFiles/arrayname.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cwj/CPlusPlus_ws/ch4/arrayName/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable arrayname"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/arrayname.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arrayname.dir/build: arrayname

.PHONY : CMakeFiles/arrayname.dir/build

CMakeFiles/arrayname.dir/requires: CMakeFiles/arrayname.dir/main.cpp.o.requires

.PHONY : CMakeFiles/arrayname.dir/requires

CMakeFiles/arrayname.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/arrayname.dir/cmake_clean.cmake
.PHONY : CMakeFiles/arrayname.dir/clean

CMakeFiles/arrayname.dir/depend:
	cd /home/cwj/CPlusPlus_ws/ch4/arrayName/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cwj/CPlusPlus_ws/ch4/arrayName /home/cwj/CPlusPlus_ws/ch4/arrayName /home/cwj/CPlusPlus_ws/ch4/arrayName/build /home/cwj/CPlusPlus_ws/ch4/arrayName/build /home/cwj/CPlusPlus_ws/ch4/arrayName/build/CMakeFiles/arrayname.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/arrayname.dir/depend

