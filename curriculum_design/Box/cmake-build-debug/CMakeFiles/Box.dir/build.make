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
CMAKE_SOURCE_DIR = E:\GitHub\repository\curriculum_design\Box

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\GitHub\repository\curriculum_design\Box\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Box.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Box.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Box.dir/flags.make

CMakeFiles/Box.dir/main.cpp.obj: CMakeFiles/Box.dir/flags.make
CMakeFiles/Box.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\GitHub\repository\curriculum_design\Box\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Box.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Box.dir\main.cpp.obj -c E:\GitHub\repository\curriculum_design\Box\main.cpp

CMakeFiles/Box.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Box.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\GitHub\repository\curriculum_design\Box\main.cpp > CMakeFiles\Box.dir\main.cpp.i

CMakeFiles/Box.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Box.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\GitHub\repository\curriculum_design\Box\main.cpp -o CMakeFiles\Box.dir\main.cpp.s

CMakeFiles/Box.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/Box.dir/main.cpp.obj.requires

CMakeFiles/Box.dir/main.cpp.obj.provides: CMakeFiles/Box.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Box.dir\build.make CMakeFiles/Box.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/Box.dir/main.cpp.obj.provides

CMakeFiles/Box.dir/main.cpp.obj.provides.build: CMakeFiles/Box.dir/main.cpp.obj


CMakeFiles/Box.dir/mybox.cpp.obj: CMakeFiles/Box.dir/flags.make
CMakeFiles/Box.dir/mybox.cpp.obj: ../mybox.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\GitHub\repository\curriculum_design\Box\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Box.dir/mybox.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Box.dir\mybox.cpp.obj -c E:\GitHub\repository\curriculum_design\Box\mybox.cpp

CMakeFiles/Box.dir/mybox.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Box.dir/mybox.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\GitHub\repository\curriculum_design\Box\mybox.cpp > CMakeFiles\Box.dir\mybox.cpp.i

CMakeFiles/Box.dir/mybox.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Box.dir/mybox.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\GitHub\repository\curriculum_design\Box\mybox.cpp -o CMakeFiles\Box.dir\mybox.cpp.s

CMakeFiles/Box.dir/mybox.cpp.obj.requires:

.PHONY : CMakeFiles/Box.dir/mybox.cpp.obj.requires

CMakeFiles/Box.dir/mybox.cpp.obj.provides: CMakeFiles/Box.dir/mybox.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Box.dir\build.make CMakeFiles/Box.dir/mybox.cpp.obj.provides.build
.PHONY : CMakeFiles/Box.dir/mybox.cpp.obj.provides

CMakeFiles/Box.dir/mybox.cpp.obj.provides.build: CMakeFiles/Box.dir/mybox.cpp.obj


# Object files for target Box
Box_OBJECTS = \
"CMakeFiles/Box.dir/main.cpp.obj" \
"CMakeFiles/Box.dir/mybox.cpp.obj"

# External object files for target Box
Box_EXTERNAL_OBJECTS =

Box.exe: CMakeFiles/Box.dir/main.cpp.obj
Box.exe: CMakeFiles/Box.dir/mybox.cpp.obj
Box.exe: CMakeFiles/Box.dir/build.make
Box.exe: CMakeFiles/Box.dir/linklibs.rsp
Box.exe: CMakeFiles/Box.dir/objects1.rsp
Box.exe: CMakeFiles/Box.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\GitHub\repository\curriculum_design\Box\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Box.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Box.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Box.dir/build: Box.exe

.PHONY : CMakeFiles/Box.dir/build

CMakeFiles/Box.dir/requires: CMakeFiles/Box.dir/main.cpp.obj.requires
CMakeFiles/Box.dir/requires: CMakeFiles/Box.dir/mybox.cpp.obj.requires

.PHONY : CMakeFiles/Box.dir/requires

CMakeFiles/Box.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Box.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Box.dir/clean

CMakeFiles/Box.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\GitHub\repository\curriculum_design\Box E:\GitHub\repository\curriculum_design\Box E:\GitHub\repository\curriculum_design\Box\cmake-build-debug E:\GitHub\repository\curriculum_design\Box\cmake-build-debug E:\GitHub\repository\curriculum_design\Box\cmake-build-debug\CMakeFiles\Box.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Box.dir/depend

