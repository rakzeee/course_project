INCLUDE_PATH =  -I"$(ISE_LIBRARY)/unstable/library/persistency/database/sqlite3/spec/include" -I"-DSQLITE_THREADSAFE=0"
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

OBJECTS = big_file_C30_c.o 

OLDOBJECTS =  rt958.o rt958d.o rt959.o rt959d.o ws957.o ws957d.o db968.o db968d.o \
	sq986.o sq986d.o qu967.o qu967d.o sq989.o sq989d.o sq970.o sq970d.o \
	sq966.o sq966d.o sq965.o sq965d.o sq971.o sq971d.o sq964.o sq964d.o \
	sq974.o sq974d.o sq963.o sq963d.o me983.o me983d.o sq984.o sq984d.o \
	sq982.o sq982d.o sq973.o sq973d.o sq980.o sq980d.o sq981.o sq981d.o \
	sq985.o sq985d.o sq988.o sq988d.o me979.o me979d.o gc978.o gc978d.o \
	me977.o me977d.o sq976.o sq976d.o sq962.o sq962d.o sq961.o sq961d.o \
	sq969.o sq969d.o sq987.o sq987d.o me972.o me972d.o sq960.o sq960d.o \
	sq975.o sq975d.o 

all: Cobj30.o

Cobj30.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj30.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

