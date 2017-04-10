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

OBJECTS = big_file_C8_c.o 

OLDOBJECTS =  tu255.o tu255d.o ch260.o ch260d.o ch261.o ch261d.o ch257.o ch257d.o \
	ch258.o ch258d.o bo263.o bo263d.o mi237.o mi237d.o ha254.o ha254d.o \
	bo262.o bo262d.o ch259.o ch259d.o ch256.o ch256d.o ws248.o ws248d.o \
	mi250.o mi250d.o in251.o in251d.o st243.o st243d.o st245.o st245d.o \
	st244.o st244d.o ws234.o ws234d.o ws242.o ws242d.o ht252.o ht252d.o \
	ws233.o ws233d.o ws241.o ws241d.o ws236.o ws236d.o ws253.o ws253d.o \
	ht246.o ht246d.o ws247.o ws247d.o ws232.o ws232d.o ws231.o ws231d.o \
	ws235.o ws235d.o ar240.o ar240d.o ar239.o ar239d.o da238.o da238d.o \
	ht249.o ht249d.o 

all: Cobj8.o

Cobj8.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj8.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

