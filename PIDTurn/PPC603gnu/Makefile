# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/Users/user/Documents/GitHub/software2
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/PIDTurn



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = PIDTurn/$(MODE_DIR)/PIDTurn.out \
	 PIDTurn_partialImage/$(MODE_DIR)/PIDTurn_partialImage.o


#Rules

# PIDTurn
ifeq ($(DEBUG_MODE),1)
PIDTurn/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
PIDTurn/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
PIDTurn/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
PIDTurn/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
PIDTurn/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
PIDTurn/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
PIDTurn/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
PIDTurn/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
PIDTurn/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
PIDTurn/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
PIDTurn/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
PIDTurn/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
PIDTurn/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
PIDTurn/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
PIDTurn/$(MODE_DIR)/% : IDE_DEFINES = 
PIDTurn/$(MODE_DIR)/% : PROJECT_TYPE = DKM
PIDTurn/$(MODE_DIR)/% : DEFINES = 
PIDTurn/$(MODE_DIR)/% : EXPAND_DBG = 0
PIDTurn/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
PIDTurn/$(MODE_DIR)/% : CPU = PPC603
PIDTurn/$(MODE_DIR)/% : TOOL_FAMILY = gnu
PIDTurn/$(MODE_DIR)/% : TOOL = gnu
PIDTurn/$(MODE_DIR)/% : TOOL_PATH = 
PIDTurn/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
PIDTurn/$(MODE_DIR)/% : LIBPATH = 
PIDTurn/$(MODE_DIR)/% : LIBS = 
PIDTurn/$(MODE_DIR)/% : OBJ_DIR := PIDTurn/$(MODE_DIR)

OBJECTS_PIDTurn = PIDTurn_partialImage/$(MODE_DIR)/PIDTurn_partialImage.o

PIDTurn/$(MODE_DIR)/PIDTurn.out : $(OBJECTS_PIDTurn)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_PIDTurn) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_PIDTurn) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

PIDTurn/$(MODE_DIR)/PIDTurn_compile_file : $(FILE) ;

_clean :: PIDTurn/$(MODE_DIR)/PIDTurn_clean

PIDTurn/$(MODE_DIR)/PIDTurn_clean : 
	$(TRACE_FLAG)if [ -d "PIDTurn" ]; then cd "PIDTurn"; rm -rf $(MODE_DIR); fi


# PIDTurn_partialImage
ifeq ($(DEBUG_MODE),1)
PIDTurn_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
PIDTurn_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
PIDTurn_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
PIDTurn_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
PIDTurn_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
PIDTurn_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
PIDTurn_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
PIDTurn_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
PIDTurn_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
PIDTurn_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
PIDTurn_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
PIDTurn_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
PIDTurn_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
PIDTurn_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
PIDTurn_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
PIDTurn_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
PIDTurn_partialImage/$(MODE_DIR)/% : DEFINES = 
PIDTurn_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
PIDTurn_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
PIDTurn_partialImage/$(MODE_DIR)/% : CPU = PPC603
PIDTurn_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
PIDTurn_partialImage/$(MODE_DIR)/% : TOOL = gnu
PIDTurn_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
PIDTurn_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
PIDTurn_partialImage/$(MODE_DIR)/% : LIBPATH = 
PIDTurn_partialImage/$(MODE_DIR)/% : LIBS = 
PIDTurn_partialImage/$(MODE_DIR)/% : OBJ_DIR := PIDTurn_partialImage/$(MODE_DIR)

PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/CommandBase.o : $(PRJ_ROOT_DIR)/CommandBase.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/CommandBasedRobot.o : $(PRJ_ROOT_DIR)/CommandBasedRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/Commands/DriveInSquare.o : $(PRJ_ROOT_DIR)/Commands/DriveInSquare.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/Commands/DriveStraight.o : $(PRJ_ROOT_DIR)/Commands/DriveStraight.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/Commands/DriveWithJoystick.o : $(PRJ_ROOT_DIR)/Commands/DriveWithJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/Commands/Turn.o : $(PRJ_ROOT_DIR)/Commands/Turn.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/Subsystems/Chassis.o : $(PRJ_ROOT_DIR)/Subsystems/Chassis.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_PIDTurn_partialImage = PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/CommandBase.o \
	 PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/CommandBasedRobot.o \
	 PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/Commands/DriveInSquare.o \
	 PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/Commands/DriveStraight.o \
	 PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/Commands/DriveWithJoystick.o \
	 PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/Commands/Turn.o \
	 PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/OI.o \
	 PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/Subsystems/Chassis.o

PIDTurn_partialImage/$(MODE_DIR)/PIDTurn_partialImage.o : $(OBJECTS_PIDTurn_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_PIDTurn_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

PIDTurn_partialImage/$(MODE_DIR)/PIDTurn_partialImage_compile_file : $(FILE) ;

_clean :: PIDTurn_partialImage/$(MODE_DIR)/PIDTurn_partialImage_clean

PIDTurn_partialImage/$(MODE_DIR)/PIDTurn_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "PIDTurn_partialImage" ]; then cd "PIDTurn_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/CommandBase.d PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/CommandBasedRobot.d PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/Commands/DriveInSquare.d \
	 PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/Commands/DriveStraight.d PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/Commands/DriveWithJoystick.d PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/Commands/Turn.d \
	 PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/OI.d PIDTurn_partialImage/$(MODE_DIR)/Objects/PIDTurn/Subsystems/Chassis.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
