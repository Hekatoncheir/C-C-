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
CMAKE_SOURCE_DIR = D:\GitHub\repository\test7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\GitHub\repository\test7\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test7.dir/flags.make

CMakeFiles/test7.dir/_2_(8).cpp.obj: CMakeFiles/test7.dir/flags.make
CMakeFiles/test7.dir/_2_(8).cpp.obj: CMakeFiles/test7.dir/includes_CXX.rsp
CMakeFiles/test7.dir/_2_(8).cpp.obj: ../_2_(8).cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\GitHub\repository\test7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test7.dir/_2_(8).cpp.obj"
	C:\Mingw\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test7.dir\_2_(8).cpp.obj -c D:\GitHub\repository\test7\_2_(8).cpp

CMakeFiles/test7.dir/_2_(8).cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test7.dir/_2_(8).cpp.i"
	C:\Mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\GitHub\repository\test7\_2_(8).cpp > CMakeFiles\test7.dir\_2_(8).cpp.i

CMakeFiles/test7.dir/_2_(8).cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test7.dir/_2_(8).cpp.s"
	C:\Mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\GitHub\repository\test7\_2_(8).cpp -o CMakeFiles\test7.dir\_2_(8).cpp.s

CMakeFiles/test7.dir/_2_(8).cpp.obj.requires:

.PHONY : CMakeFiles/test7.dir/_2_(8).cpp.obj.requires

CMakeFiles/test7.dir/_2_(8).cpp.obj.provides: CMakeFiles/test7.dir/_2_(8).cpp.obj.requires
	$(MAKE) -f CMakeFiles\test7.dir\build.make CMakeFiles/test7.dir/_2_(8).cpp.obj.provides.build
.PHONY : CMakeFiles/test7.dir/_2_(8).cpp.obj.provides

CMakeFiles/test7.dir/_2_(8).cpp.obj.provides.build: CMakeFiles/test7.dir/_2_(8).cpp.obj


CMakeFiles/test7.dir/_2_(8)PR.cpp.obj: CMakeFiles/test7.dir/flags.make
CMakeFiles/test7.dir/_2_(8)PR.cpp.obj: CMakeFiles/test7.dir/includes_CXX.rsp
CMakeFiles/test7.dir/_2_(8)PR.cpp.obj: ../_2_(8)PR.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\GitHub\repository\test7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test7.dir/_2_(8)PR.cpp.obj"
	C:\Mingw\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test7.dir\_2_(8)PR.cpp.obj -c D:\GitHub\repository\test7\_2_(8)PR.cpp

CMakeFiles/test7.dir/_2_(8)PR.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test7.dir/_2_(8)PR.cpp.i"
	C:\Mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\GitHub\repository\test7\_2_(8)PR.cpp > CMakeFiles\test7.dir\_2_(8)PR.cpp.i

CMakeFiles/test7.dir/_2_(8)PR.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test7.dir/_2_(8)PR.cpp.s"
	C:\Mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\GitHub\repository\test7\_2_(8)PR.cpp -o CMakeFiles\test7.dir\_2_(8)PR.cpp.s

CMakeFiles/test7.dir/_2_(8)PR.cpp.obj.requires:

.PHONY : CMakeFiles/test7.dir/_2_(8)PR.cpp.obj.requires

CMakeFiles/test7.dir/_2_(8)PR.cpp.obj.provides: CMakeFiles/test7.dir/_2_(8)PR.cpp.obj.requires
	$(MAKE) -f CMakeFiles\test7.dir\build.make CMakeFiles/test7.dir/_2_(8)PR.cpp.obj.provides.build
.PHONY : CMakeFiles/test7.dir/_2_(8)PR.cpp.obj.provides

CMakeFiles/test7.dir/_2_(8)PR.cpp.obj.provides.build: CMakeFiles/test7.dir/_2_(8)PR.cpp.obj


# Object files for target test7
test7_OBJECTS = \
"CMakeFiles/test7.dir/_2_(8).cpp.obj" \
"CMakeFiles/test7.dir/_2_(8)PR.cpp.obj"

# External object files for target test7
test7_EXTERNAL_OBJECTS =

test7.exe: CMakeFiles/test7.dir/_2_(8).cpp.obj
test7.exe: CMakeFiles/test7.dir/_2_(8)PR.cpp.obj
test7.exe: CMakeFiles/test7.dir/build.make
test7.exe: CMakeFiles/test7.dir/linklibs.rsp
test7.exe: CMakeFiles/test7.dir/objects1.rsp
test7.exe: CMakeFiles/test7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\GitHub\repository\test7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable test7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test7.dir/build: test7.exe

.PHONY : CMakeFiles/test7.dir/build

CMakeFiles/test7.dir/requires: CMakeFiles/test7.dir/_2_(8).cpp.obj.requires
CMakeFiles/test7.dir/requires: CMakeFiles/test7.dir/_2_(8)PR.cpp.obj.requires

.PHONY : CMakeFiles/test7.dir/requires

CMakeFiles/test7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\test7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/test7.dir/clean

CMakeFiles/test7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\GitHub\repository\test7 D:\GitHub\repository\test7 D:\GitHub\repository\test7\cmake-build-debug D:\GitHub\repository\test7\cmake-build-debug D:\GitHub\repository\test7\cmake-build-debug\CMakeFiles\test7.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test7.dir/depend

