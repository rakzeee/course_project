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

OBJECTS = big_file_C16_c.o 

OLDOBJECTS =  sp503.o sp503d.o ar513.o ar513d.o sp510.o sp510d.o na512.o na512d.o \
	re504.o re504d.o li515.o li515d.o ar495.o ar495d.o ar527.o ar527d.o \
	re523.o re523d.o in521.o in521d.o it505.o it505d.o it506.o it506d.o \
	ge511.o ge511d.o in507.o in507d.o re508.o re508d.o cu517.o cu517d.o \
	tr516.o tr516d.o ar496.o ar496d.o dy497.o dy497d.o bo524.o bo524d.o \
	ta522.o ta522d.o li498.o li498d.o un501.o un501d.o ty509.o ty509d.o \
	ac518.o ac518d.o co514.o co514d.o fi525.o fi525d.o dy500.o dy500d.o \
	ba519.o ba519d.o ch499.o ch499d.o co520.o co520d.o bo526.o bo526d.o \
	in502.o in502d.o 

all: Cobj16.o

Cobj16.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj16.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

