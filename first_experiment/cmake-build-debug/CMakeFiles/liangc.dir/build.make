# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\jetbrains\Cmake\bin\cmake.exe

# The command to remove a file.
RM = D:\jetbrains\Cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\linuxtool\liangc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\linuxtool\liangc\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/liangc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/liangc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/liangc.dir/flags.make

CMakeFiles/liangc.dir/_1_(1).cpp.obj: CMakeFiles/liangc.dir/flags.make
CMakeFiles/liangc.dir/_1_(1).cpp.obj: ../_1_(1).cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\linuxtool\liangc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/liangc.dir/_1_(1).cpp.obj"
	C:\Mingw\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\liangc.dir\_1_(1).cpp.obj -c D:\linuxtool\liangc\_1_(1).cpp

CMakeFiles/liangc.dir/_1_(1).cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/liangc.dir/_1_(1).cpp.i"
	C:\Mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\linuxtool\liangc\_1_(1).cpp > CMakeFiles\liangc.dir\_1_(1).cpp.i

CMakeFiles/liangc.dir/_1_(1).cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/liangc.dir/_1_(1).cpp.s"
	C:\Mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\linuxtool\liangc\_1_(1).cpp -o CMakeFiles\liangc.dir\_1_(1).cpp.s

CMakeFiles/liangc.dir/_1_(1).cpp.obj.requires:

.PHONY : CMakeFiles/liangc.dir/_1_(1).cpp.obj.requires

CMakeFiles/liangc.dir/_1_(1).cpp.obj.provides: CMakeFiles/liangc.dir/_1_(1).cpp.obj.requires
	$(MAKE) -f CMakeFiles\liangc.dir\build.make CMakeFiles/liangc.dir/_1_(1).cpp.obj.provides.build
.PHONY : CMakeFiles/liangc.dir/_1_(1).cpp.obj.provides

CMakeFiles/liangc.dir/_1_(1).cpp.obj.provides.build: CMakeFiles/liangc.dir/_1_(1).cpp.obj


# Object files for target liangc
liangc_OBJECTS = \
"CMakeFiles/liangc.dir/_1_(1).cpp.obj"

# External object files for target liangc
liangc_EXTERNAL_OBJECTS =

liangc.exe: CMakeFiles/liangc.dir/_1_(1).cpp.obj
liangc.exe: CMakeFiles/liangc.dir/build.make
liangc.exe: CMakeFiles/liangc.dir/linklibs.rsp
liangc.exe: CMakeFiles/liangc.dir/objects1.rsp
liangc.exe: CMakeFiles/liangc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\linuxtool\liangc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable liangc.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\liangc.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/liangc.dir/build: liangc.exe

.PHONY : CMakeFiles/liangc.dir/build

CMakeFiles/liangc.dir/requires: CMakeFiles/liangc.dir/_1_(1).cpp.obj.requires

.PHONY : CMakeFiles/liangc.dir/requires

CMakeFiles/liangc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\liangc.dir\cmake_clean.cmake
.PHONY : CMakeFiles/liangc.dir/clean

CMakeFiles/liangc.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\linuxtool\liangc D:\linuxtool\liangc D:\linuxtool\liangc\cmake-build-debug D:\linuxtool\liangc\cmake-build-debug D:\linuxtool\liangc\cmake-build-debug\CMakeFiles\liangc.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/liangc.dir/depend
