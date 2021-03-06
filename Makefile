# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/charles/dev/Ecole/comp/tp-comp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/charles/dev/Ecole/comp/tp-comp

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/charles/dev/Ecole/comp/tp-comp/CMakeFiles /home/charles/dev/Ecole/comp/tp-comp/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/charles/dev/Ecole/comp/tp-comp/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named tp_comp

# Build rule for target.
tp_comp: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 tp_comp
.PHONY : tp_comp

# fast build rule for target.
tp_comp/fast:
	$(MAKE) -f CMakeFiles/tp_comp.dir/build.make CMakeFiles/tp_comp.dir/build
.PHONY : tp_comp/fast

LexicalAnalyser.o: LexicalAnalyser.cpp.o

.PHONY : LexicalAnalyser.o

# target to build an object file
LexicalAnalyser.cpp.o:
	$(MAKE) -f CMakeFiles/tp_comp.dir/build.make CMakeFiles/tp_comp.dir/LexicalAnalyser.cpp.o
.PHONY : LexicalAnalyser.cpp.o

LexicalAnalyser.i: LexicalAnalyser.cpp.i

.PHONY : LexicalAnalyser.i

# target to preprocess a source file
LexicalAnalyser.cpp.i:
	$(MAKE) -f CMakeFiles/tp_comp.dir/build.make CMakeFiles/tp_comp.dir/LexicalAnalyser.cpp.i
.PHONY : LexicalAnalyser.cpp.i

LexicalAnalyser.s: LexicalAnalyser.cpp.s

.PHONY : LexicalAnalyser.s

# target to generate assembly for a file
LexicalAnalyser.cpp.s:
	$(MAKE) -f CMakeFiles/tp_comp.dir/build.make CMakeFiles/tp_comp.dir/LexicalAnalyser.cpp.s
.PHONY : LexicalAnalyser.cpp.s

State.o: State.cpp.o

.PHONY : State.o

# target to build an object file
State.cpp.o:
	$(MAKE) -f CMakeFiles/tp_comp.dir/build.make CMakeFiles/tp_comp.dir/State.cpp.o
.PHONY : State.cpp.o

State.i: State.cpp.i

.PHONY : State.i

# target to preprocess a source file
State.cpp.i:
	$(MAKE) -f CMakeFiles/tp_comp.dir/build.make CMakeFiles/tp_comp.dir/State.cpp.i
.PHONY : State.cpp.i

State.s: State.cpp.s

.PHONY : State.s

# target to generate assembly for a file
State.cpp.s:
	$(MAKE) -f CMakeFiles/tp_comp.dir/build.make CMakeFiles/tp_comp.dir/State.cpp.s
.PHONY : State.cpp.s

SyntaxAnalyser.o: SyntaxAnalyser.cpp.o

.PHONY : SyntaxAnalyser.o

# target to build an object file
SyntaxAnalyser.cpp.o:
	$(MAKE) -f CMakeFiles/tp_comp.dir/build.make CMakeFiles/tp_comp.dir/SyntaxAnalyser.cpp.o
.PHONY : SyntaxAnalyser.cpp.o

SyntaxAnalyser.i: SyntaxAnalyser.cpp.i

.PHONY : SyntaxAnalyser.i

# target to preprocess a source file
SyntaxAnalyser.cpp.i:
	$(MAKE) -f CMakeFiles/tp_comp.dir/build.make CMakeFiles/tp_comp.dir/SyntaxAnalyser.cpp.i
.PHONY : SyntaxAnalyser.cpp.i

SyntaxAnalyser.s: SyntaxAnalyser.cpp.s

.PHONY : SyntaxAnalyser.s

# target to generate assembly for a file
SyntaxAnalyser.cpp.s:
	$(MAKE) -f CMakeFiles/tp_comp.dir/build.make CMakeFiles/tp_comp.dir/SyntaxAnalyser.cpp.s
.PHONY : SyntaxAnalyser.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/tp_comp.dir/build.make CMakeFiles/tp_comp.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/tp_comp.dir/build.make CMakeFiles/tp_comp.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/tp_comp.dir/build.make CMakeFiles/tp_comp.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... tp_comp"
	@echo "... LexicalAnalyser.o"
	@echo "... LexicalAnalyser.i"
	@echo "... LexicalAnalyser.s"
	@echo "... State.o"
	@echo "... State.i"
	@echo "... State.s"
	@echo "... SyntaxAnalyser.o"
	@echo "... SyntaxAnalyser.i"
	@echo "... SyntaxAnalyser.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

