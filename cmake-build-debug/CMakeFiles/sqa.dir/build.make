# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_SOURCE_DIR = /Users/cswu/sqa

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/cswu/sqa/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sqa.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sqa.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sqa.dir/flags.make

CMakeFiles/sqa.dir/main.cpp.o: CMakeFiles/sqa.dir/flags.make
CMakeFiles/sqa.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cswu/sqa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sqa.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sqa.dir/main.cpp.o -c /Users/cswu/sqa/main.cpp

CMakeFiles/sqa.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sqa.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cswu/sqa/main.cpp > CMakeFiles/sqa.dir/main.cpp.i

CMakeFiles/sqa.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sqa.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cswu/sqa/main.cpp -o CMakeFiles/sqa.dir/main.cpp.s

CMakeFiles/sqa.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/sqa.dir/main.cpp.o.requires

CMakeFiles/sqa.dir/main.cpp.o.provides: CMakeFiles/sqa.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/sqa.dir/build.make CMakeFiles/sqa.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/sqa.dir/main.cpp.o.provides

CMakeFiles/sqa.dir/main.cpp.o.provides.build: CMakeFiles/sqa.dir/main.cpp.o


# Object files for target sqa
sqa_OBJECTS = \
"CMakeFiles/sqa.dir/main.cpp.o"

# External object files for target sqa
sqa_EXTERNAL_OBJECTS =

sqa: CMakeFiles/sqa.dir/main.cpp.o
sqa: CMakeFiles/sqa.dir/build.make
sqa: CMakeFiles/sqa.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/cswu/sqa/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sqa"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sqa.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sqa.dir/build: sqa

.PHONY : CMakeFiles/sqa.dir/build

CMakeFiles/sqa.dir/requires: CMakeFiles/sqa.dir/main.cpp.o.requires

.PHONY : CMakeFiles/sqa.dir/requires

CMakeFiles/sqa.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sqa.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sqa.dir/clean

CMakeFiles/sqa.dir/depend:
	cd /Users/cswu/sqa/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/cswu/sqa /Users/cswu/sqa /Users/cswu/sqa/cmake-build-debug /Users/cswu/sqa/cmake-build-debug /Users/cswu/sqa/cmake-build-debug/CMakeFiles/sqa.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sqa.dir/depend

