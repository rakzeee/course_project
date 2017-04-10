INCLUDE_PATH = 
SHELL = /bin/sh
CC = cc
CPP = c++
CFLAGS = -O0 -pipe -fno-common -fPIC  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"/usr/local/Eiffel_16.05/studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -fno-common -fPIC  -DWORKBENCH -I"/usr/local/Eiffel_16.05/studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   
LDSHAREDFLAGS =   -dynamiclib -flat_namespace -undefined suppress -o
EIFLIB = "/usr/local/Eiffel_16.05/studio/spec/macosx-x86-64/lib/libwkbench.a"
EIFTEMPLATES = /usr/local/Eiffel_16.05/studio/config/macosx-x86-64/templates
LIBS = -lm
MAKE = make
AR = ar
LD = ld
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
CP = /bin/cp
RANLIB = :
RM = /bin/rm -f
FILE_EXIST = 
RMDIR = 
X2C = "/usr/local/Eiffel_16.05/studio/spec/macosx-x86-64/bin/x2c"
SHAREDLINK = cc
SHAREDLIBS = -lm
SHARED_SUFFIX = .dylib
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = touch finished 
SYSTEM_IN_DYNAMIC_LIB = web_annual_reports.dylib 

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C12_c.o 

OLDOBJECTS =  sp382.o sp382d.o fu364.o fu364d.o ty381.o ty381d.o sp383.o sp383d.o \
	re373.o re373d.o ar395.o ar395d.o ar385.o ar385d.o re377.o re377d.o \
	in369.o in369d.o to394.o to394d.o it371.o it371d.o it372.o it372d.o \
	ge384.o ge384d.o in370.o in370d.o re374.o re374d.o cu365.o cu365d.o \
	tr363.o tr363d.o ar388.o ar388d.o se386.o se386d.o dy389.o dy389d.o \
	bo378.o bo378d.o ta376.o ta376d.o li390.o li390d.o un393.o un393d.o \
	ty375.o ty375d.o ac366.o ac366d.o bi387.o bi387d.o fi379.o fi379d.o \
	dy392.o dy392d.o ba367.o ba367d.o ch391.o ch391d.o co368.o co368d.o \
	bo380.o bo380d.o 

all: Cobj12.o

Cobj12.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj12.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

