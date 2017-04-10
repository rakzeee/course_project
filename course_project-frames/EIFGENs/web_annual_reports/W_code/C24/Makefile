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

OBJECTS = big_file_C24_c.o 

OLDOBJECTS =  sp791.o sp791d.o ar770.o ar770d.o na771.o na771d.o re783.o re783d.o \
	li773.o li773d.o ar769.o ar769d.o ar759.o ar759d.o re787.o re787d.o \
	in779.o in779d.o to768.o to768d.o it781.o it781d.o it782.o it782d.o \
	in780.o in780d.o re784.o re784d.o cu775.o cu775d.o tr774.o tr774d.o \
	ar762.o ar762d.o se760.o se760d.o dy763.o dy763d.o bo788.o bo788d.o \
	ta786.o ta786d.o li764.o li764d.o un767.o un767d.o ty785.o ty785d.o \
	ac776.o ac776d.o co772.o co772d.o bi761.o bi761d.o fi789.o fi789d.o \
	dy766.o dy766d.o ba777.o ba777d.o ch765.o ch765d.o co778.o co778d.o \
	bo790.o bo790d.o 

all: Cobj24.o

Cobj24.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj24.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

