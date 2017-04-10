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

OBJECTS = big_file_C28_c.o 

OLDOBJECTS =  ty897.o ty897d.o ty898.o ty898d.o ty912.o ty912d.o ty913.o ty913d.o \
	ty917.o ty917d.o ty918.o ty918d.o ty899.o ty899d.o ty914.o ty914d.o \
	ty919.o ty919d.o ce903.o ce903d.o ha923.o ha923d.o st921.o st921d.o \
	li907.o li907d.o ha922.o ha922d.o li902.o li902d.o li901.o li901d.o \
	li908.o li908d.o rt891.o rt891d.o rt893.o rt893d.o rt894.o rt894d.o \
	rt895.o rt895d.o rt896.o rt896d.o rt909.o rt909d.o rt910.o rt910d.o \
	rt911.o rt911d.o rt915.o rt915d.o rt916.o rt916d.o rt920.o rt920d.o \
	ar892.o ar892d.o li900.o li900d.o di906.o di906d.o st904.o st904d.o \
	ar905.o ar905d.o 

all: Cobj28.o

Cobj28.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj28.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

