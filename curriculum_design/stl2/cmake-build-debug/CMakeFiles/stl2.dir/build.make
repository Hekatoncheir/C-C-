# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\GitHub\repository\curriculum_design\stl2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\GitHub\repository\curriculum_design\stl2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stl2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stl2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stl2.dir/flags.make

CMakeFiles/stl2.dir/main.cpp.obj: CMakeFiles/stl2.dir/flags.make
CMakeFiles/stl2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\GitHub\repository\curriculum_design\stl2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stl2.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\stl2.dir\main.cpp.obj -c E:\GitHub\repository\curriculum_design\stl2\main.cpp

CMakeFiles/stl2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stl2.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\GitHub\repository\curriculum_design\stl2\main.cpp > CMakeFiles\stl2.dir\main.cpp.i

CMakeFiles/stl2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stl2.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\GitHub\repository\curriculum_design\stl2\main.cpp -o CMakeFiles\stl2.dir\main.cpp.s

CMakeFiles/stl2.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/stl2.dir/main.cpp.obj.requires

CMakeFiles/stl2.dir/main.cpp.obj.provides: CMakeFiles/stl2.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\stl2.dir\build.make CMakeFiles/stl2.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/stl2.dir/main.cpp.obj.provides

CMakeFiles/stl2.dir/main.cpp.obj.provides.build: CMakeFiles/stl2.dir/main.cpp.obj


# Object files for target stl2
stl2_OBJECTS = \
"CMakeFiles/stl2.dir/main.cpp.obj"

# External object files for target stl2
stl2_EXTERNAL_OBJECTS =

stl2.exe: CMakeFiles/stl2.dir/main.cpp.obj
stl2.exe: CMakeFiles/stl2.dir/build.make
stl2.exe: CMakeFiles/stl2.dir/linklibs.rsp
stl2.exe: CMakeFiles/stl2.dir/objects1.rsp
stl2.exe: CMakeFiles/stl2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\GitHub\repository\curriculum_design\stl2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stl2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\stl2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stl2.dir/build: stl2.exe

.PHONY : CMakeFiles/stl2.dir/build

CMakeFiles/stl2.dir/requires: CMakeFiles/stl2.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/stl2.dir/requires

CMakeFiles/stl2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\stl2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/stl2.dir/clean

CMakeFiles/stl2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\GitHub\repository\curriculum_design\stl2 E:\GitHub\repository\curriculum_design\stl2 E:\GitHub\repository\curriculum_design\stl2\cmake-build-debug E:\GitHub\repository\curriculum_design\stl2\cmake-build-debug E:\GitHub\repository\curriculum_design\stl2\cmake-build-debug\CMakeFiles\stl2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stl2.dir/depend

