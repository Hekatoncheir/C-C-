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
CMAKE_SOURCE_DIR = D:\GitHub\repository\third_experiment\test5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\GitHub\repository\third_experiment\test5\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test5.dir/flags.make

CMakeFiles/test5.dir/_3_(7).cpp.obj: CMakeFiles/test5.dir/flags.make
CMakeFiles/test5.dir/_3_(7).cpp.obj: ../_3_(7).cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\GitHub\repository\third_experiment\test5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test5.dir/_3_(7).cpp.obj"
	C:\Mingw\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test5.dir\_3_(7).cpp.obj -c D:\GitHub\repository\third_experiment\test5\_3_(7).cpp

CMakeFiles/test5.dir/_3_(7).cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test5.dir/_3_(7).cpp.i"
	C:\Mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\GitHub\repository\third_experiment\test5\_3_(7).cpp > CMakeFiles\test5.dir\_3_(7).cpp.i

CMakeFiles/test5.dir/_3_(7).cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test5.dir/_3_(7).cpp.s"
	C:\Mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\GitHub\repository\third_experiment\test5\_3_(7).cpp -o CMakeFiles\test5.dir\_3_(7).cpp.s

CMakeFiles/test5.dir/_3_(7).cpp.obj.requires:

.PHONY : CMakeFiles/test5.dir/_3_(7).cpp.obj.requires

CMakeFiles/test5.dir/_3_(7).cpp.obj.provides: CMakeFiles/test5.dir/_3_(7).cpp.obj.requires
	$(MAKE) -f CMakeFiles\test5.dir\build.make CMakeFiles/test5.dir/_3_(7).cpp.obj.provides.build
.PHONY : CMakeFiles/test5.dir/_3_(7).cpp.obj.provides

CMakeFiles/test5.dir/_3_(7).cpp.obj.provides.build: CMakeFiles/test5.dir/_3_(7).cpp.obj


# Object files for target test5
test5_OBJECTS = \
"CMakeFiles/test5.dir/_3_(7).cpp.obj"

# External object files for target test5
test5_EXTERNAL_OBJECTS =

test5.exe: CMakeFiles/test5.dir/_3_(7).cpp.obj
test5.exe: CMakeFiles/test5.dir/build.make
test5.exe: CMakeFiles/test5.dir/linklibs.rsp
test5.exe: CMakeFiles/test5.dir/objects1.rsp
test5.exe: CMakeFiles/test5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\GitHub\repository\third_experiment\test5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test5.dir/build: test5.exe

.PHONY : CMakeFiles/test5.dir/build

CMakeFiles/test5.dir/requires: CMakeFiles/test5.dir/_3_(7).cpp.obj.requires

.PHONY : CMakeFiles/test5.dir/requires

CMakeFiles/test5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\test5.dir\cmake_clean.cmake
.PHONY : CMakeFiles/test5.dir/clean

CMakeFiles/test5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\GitHub\repository\third_experiment\test5 D:\GitHub\repository\third_experiment\test5 D:\GitHub\repository\third_experiment\test5\cmake-build-debug D:\GitHub\repository\third_experiment\test5\cmake-build-debug D:\GitHub\repository\third_experiment\test5\cmake-build-debug\CMakeFiles\test5.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test5.dir/depend

