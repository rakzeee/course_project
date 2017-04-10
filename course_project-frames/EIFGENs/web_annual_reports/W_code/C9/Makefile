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

OBJECTS = big_file_C9_c.o 

OLDOBJECTS =  po266.o po266d.o po267.o po267d.o st276.o st276d.o st275.o st275d.o \
	bo264.o bo264d.o ab286.o ab286d.o po265.o po265d.o st274.o st274d.o \
	re268.o re268d.o re272.o re272d.o re270.o re270d.o im273.o im273d.o \
	de277.o de277d.o im271.o im271d.o im269.o im269d.o ht283.o ht283d.o \
	pa282.o pa282d.o ws287.o ws287d.o wg281.o wg281d.o ws291.o ws291d.o \
	ws296.o ws296d.o ws295.o ws295d.o ws294.o ws294d.o ht285.o ht285d.o \
	ws290.o ws290d.o ws280.o ws280d.o ws288.o ws288d.o da279.o da279d.o \
	ht284.o ht284d.o ws293.o ws293d.o ws289.o ws289d.o fi278.o fi278d.o \
	ws292.o ws292d.o 

all: Cobj9.o

Cobj9.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj9.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

