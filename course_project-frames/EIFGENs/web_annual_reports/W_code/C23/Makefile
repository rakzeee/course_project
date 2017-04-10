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

OBJECTS = big_file_C23_c.o 

OLDOBJECTS =  sp735.o sp735d.o ar745.o ar745d.o sp742.o sp742d.o na744.o na744d.o \
	re736.o re736d.o li747.o li747d.o ar734.o ar734d.o ar726.o ar726d.o \
	re755.o re755d.o in753.o in753d.o to733.o to733d.o it737.o it737d.o \
	it738.o it738d.o ge743.o ge743d.o in739.o in739d.o re740.o re740d.o \
	cu749.o cu749d.o tr748.o tr748d.o ar727.o ar727d.o dy728.o dy728d.o \
	bo756.o bo756d.o ta754.o ta754d.o li729.o li729d.o un732.o un732d.o \
	ty741.o ty741d.o ac750.o ac750d.o co746.o co746d.o fi757.o fi757d.o \
	dy731.o dy731d.o ba751.o ba751d.o ch730.o ch730d.o co752.o co752d.o \
	bo758.o bo758d.o 

all: Cobj23.o

Cobj23.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj23.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

