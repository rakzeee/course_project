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

OBJECTS = big_file_C29_c.o 

OLDOBJECTS =  ty936.o ty936d.o ty937.o ty937d.o ty938.o ty938d.o ta926.o ta926d.o \
	co943.o co943d.o li946.o li946d.o ta925.o ta925d.o ta924.o ta924d.o \
	co944.o co944d.o li948.o li948d.o li947.o li947d.o li949.o li949d.o \
	rt929.o rt929d.o rt930.o rt930d.o rt931.o rt931d.o rt932.o rt932d.o \
	rt933.o rt933d.o rt934.o rt934d.o rt935.o rt935d.o rt939.o rt939d.o \
	rt940.o rt940d.o rt941.o rt941d.o rt942.o rt942d.o rt927.o rt927d.o \
	rt928.o rt928d.o rt951.o rt951d.o rt950.o rt950d.o rt952.o rt952d.o \
	rt953.o rt953d.o rt954.o rt954d.o rt955.o rt955d.o rt956.o rt956d.o \
	in945.o in945d.o 

all: Cobj29.o

Cobj29.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj29.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

