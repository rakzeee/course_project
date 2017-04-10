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

OBJECTS = big_file_C27_c.o 

OLDOBJECTS =  sp861.o sp861d.o ty878.o ty878d.o ty879.o ty879d.o ty883.o ty883d.o \
	ty884.o ty884d.o ty880.o ty880d.o ty885.o ty885d.o ap875.o ap875d.o \
	sp862.o sp862d.o ar874.o ar874d.o ar864.o ar864d.o to873.o to873d.o \
	ha887.o ha887d.o ap876.o ap876d.o ge863.o ge863d.o ar867.o ar867d.o \
	se865.o se865d.o dy868.o dy868d.o bo858.o bo858d.o li869.o li869d.o \
	ha888.o ha888d.o un872.o un872d.o ta890.o ta890d.o ta889.o ta889d.o \
	bi866.o bi866d.o fi859.o fi859d.o dy871.o dy871d.o ch870.o ch870d.o \
	rt886.o rt886d.o rt877.o rt877d.o rt881.o rt881d.o rt882.o rt882d.o \
	bo860.o bo860d.o 

all: Cobj27.o

Cobj27.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj27.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

