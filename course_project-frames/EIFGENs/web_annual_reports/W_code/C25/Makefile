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

OBJECTS = big_file_C25_c.o 

OLDOBJECTS =  ar805.o ar805d.o sp792.o sp792d.o na806.o na806d.o re818.o re818d.o \
	li808.o li808d.o ar804.o ar804d.o ar794.o ar794d.o re822.o re822d.o \
	in814.o in814d.o to803.o to803d.o it816.o it816d.o it817.o it817d.o \
	ge793.o ge793d.o in815.o in815d.o re819.o re819d.o cu810.o cu810d.o \
	tr809.o tr809d.o ar797.o ar797d.o se795.o se795d.o dy798.o dy798d.o \
	bo823.o bo823d.o ta821.o ta821d.o li799.o li799d.o un802.o un802d.o \
	ty820.o ty820d.o ac811.o ac811d.o co807.o co807d.o bi796.o bi796d.o \
	fi824.o fi824d.o dy801.o dy801d.o ba812.o ba812d.o ch800.o ch800d.o \
	co813.o co813d.o 

all: Cobj25.o

Cobj25.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj25.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

