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
CMAKE_SOURCE_DIR = E:\GitHub\repository\curriculum_design\stl1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\GitHub\repository\curriculum_design\stl1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stl1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stl1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stl1.dir/flags.make

CMakeFiles/stl1.dir/main.cpp.obj: CMakeFiles/stl1.dir/flags.make
CMakeFiles/stl1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\GitHub\repository\curriculum_design\stl1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stl1.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\stl1.dir\main.cpp.obj -c E:\GitHub\repository\curriculum_design\stl1\main.cpp

CMakeFiles/stl1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stl1.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\GitHub\repository\curriculum_design\stl1\main.cpp > CMakeFiles\stl1.dir\main.cpp.i

CMakeFiles/stl1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stl1.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\GitHub\repository\curriculum_design\stl1\main.cpp -o CMakeFiles\stl1.dir\main.cpp.s

CMakeFiles/stl1.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/stl1.dir/main.cpp.obj.requires

CMakeFiles/stl1.dir/main.cpp.obj.provides: CMakeFiles/stl1.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\stl1.dir\build.make CMakeFiles/stl1.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/stl1.dir/main.cpp.obj.provides

CMakeFiles/stl1.dir/main.cpp.obj.provides.build: CMakeFiles/stl1.dir/main.cpp.obj


# Object files for target stl1
stl1_OBJECTS = \
"CMakeFiles/stl1.dir/main.cpp.obj"

# External object files for target stl1
stl1_EXTERNAL_OBJECTS =

stl1.exe: CMakeFiles/stl1.dir/main.cpp.obj
stl1.exe: CMakeFiles/stl1.dir/build.make
stl1.exe: CMakeFiles/stl1.dir/linklibs.rsp
stl1.exe: CMakeFiles/stl1.dir/objects1.rsp
stl1.exe: CMakeFiles/stl1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\GitHub\repository\curriculum_design\stl1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stl1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\stl1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stl1.dir/build: stl1.exe

.PHONY : CMakeFiles/stl1.dir/build

CMakeFiles/stl1.dir/requires: CMakeFiles/stl1.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/stl1.dir/requires

CMakeFiles/stl1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\stl1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/stl1.dir/clean

CMakeFiles/stl1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\GitHub\repository\curriculum_design\stl1 E:\GitHub\repository\curriculum_design\stl1 E:\GitHub\repository\curriculum_design\stl1\cmake-build-debug E:\GitHub\repository\curriculum_design\stl1\cmake-build-debug E:\GitHub\repository\curriculum_design\stl1\cmake-build-debug\CMakeFiles\stl1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stl1.dir/depend

