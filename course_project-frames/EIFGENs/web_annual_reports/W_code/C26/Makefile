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

OBJECTS = big_file_C26_c.o 

OLDOBJECTS =  sp826.o sp826d.o ar840.o ar840d.o sp827.o sp827d.o na841.o na841d.o \
	re853.o re853d.o li843.o li843d.o ar839.o ar839d.o ar829.o ar829d.o \
	re857.o re857d.o in849.o in849d.o to838.o to838d.o it851.o it851d.o \
	it852.o it852d.o ge828.o ge828d.o in850.o in850d.o re854.o re854d.o \
	cu845.o cu845d.o tr844.o tr844d.o ar832.o ar832d.o se830.o se830d.o \
	dy833.o dy833d.o ta856.o ta856d.o li834.o li834d.o un837.o un837d.o \
	ty855.o ty855d.o ac846.o ac846d.o co842.o co842d.o bi831.o bi831d.o \
	dy836.o dy836d.o ba847.o ba847d.o ch835.o ch835d.o co848.o co848d.o \
	bo825.o bo825d.o 

all: Cobj26.o

Cobj26.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj26.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

