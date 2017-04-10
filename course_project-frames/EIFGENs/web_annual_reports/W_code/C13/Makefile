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

OBJECTS = big_file_C13_c.o 

OLDOBJECTS =  ty396.o ty396d.o ty397.o ty397d.o ty422.o ty422d.o ty423.o ty423d.o \
	ty424.o ty424d.o ty425.o ty425d.o ty426.o ty426d.o ty427.o ty427d.o \
	ty428.o ty428d.o re405.o re405d.o li408.o li408d.o in420.o in420d.o \
	it406.o it406d.o it400.o it400d.o ce398.o ce398d.o in407.o in407d.o \
	re403.o re403d.o cu411.o cu411d.o tr409.o tr409d.o se415.o se415d.o \
	ta421.o ta421d.o li402.o li402d.o ta399.o ta399d.o ty404.o ty404d.o \
	ac412.o ac412d.o co410.o co410d.o bi416.o bi416d.o fi417.o fi417d.o \
	ba413.o ba413d.o ch419.o ch419d.o rt401.o rt401d.o co414.o co414d.o \
	bo418.o bo418d.o 

all: Cobj13.o

Cobj13.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj13.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

