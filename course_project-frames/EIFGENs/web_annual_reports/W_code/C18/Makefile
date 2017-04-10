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

OBJECTS = big_file_C18_c.o 

OLDOBJECTS =  pr585.o pr585d.o ty590.o ty590d.o ty591.o ty591d.o ty593.o ty593d.o \
	ty588.o ty588d.o ty592.o ty592d.o ar580.o ar580d.o ar571.o ar571d.o \
	re567.o re567d.o in565.o in565d.o ce586.o ce586d.o ce587.o ce587d.o \
	ha581.o ha581d.o cu561.o cu561d.o ar574.o ar574d.o se572.o se572d.o \
	dy575.o dy575d.o bo568.o bo568d.o ta566.o ta566d.o li576.o li576d.o \
	ha582.o ha582d.o un579.o un579d.o ta583.o ta583d.o ta584.o ta584d.o \
	ac562.o ac562d.o bi573.o bi573d.o fi569.o fi569d.o dy578.o dy578d.o \
	ba563.o ba563d.o ch577.o ch577d.o rt589.o rt589d.o co564.o co564d.o \
	bo570.o bo570d.o 

all: Cobj18.o

Cobj18.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj18.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

