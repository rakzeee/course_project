case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C29"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)/unstable/library/persistency/database/sqlite3/spec/include" -I"-DSQLITE_THREADSAFE=0"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $ccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $cppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $windows_flags
LDSHAREDFLAGS =  $ldsharedflags
EIFLIB = "$rt_lib/$prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $libs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = web_annual_reports$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C29_c.o 

OLDOBJECTS =  ty936.o ty936d.o ty937.o ty937d.o ty938.o ty938d.o ta926.o ta926d.o \
	co943.o co943d.o li946.o li946d.o ta925.o ta925d.o ta924.o ta924d.o \
	co944.o co944d.o li948.o li948d.o li947.o li947d.o li949.o li949d.o \
	rt929.o rt929d.o rt930.o rt930d.o rt931.o rt931d.o rt932.o rt932d.o \
	rt933.o rt933d.o rt934.o rt934d.o rt935.o rt935d.o rt939.o rt939d.o \
	rt940.o rt940d.o rt941.o rt941d.o rt942.o rt942d.o rt927.o rt927d.o \
	rt928.o rt928d.o rt951.o rt951d.o rt950.o rt950d.o rt952.o rt952d.o \
	rt953.o rt953d.o rt954.o rt954d.o rt955.o rt955d.o rt956.o rt956d.o \
	in945.o in945d.o 

all: Cobj29.o

Cobj29.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj29.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

