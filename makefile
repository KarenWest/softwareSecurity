CC = gcc
FILES = ./preReqQuizQ10.c
CCFLAGS = -g -Wall -lrt -pthread -I/usr/include -I.
LDFLAGS = -L/usr/local/angstrom/arm/arm-angstrom-linux-gnueabi/lib/libpthread.so.0
#LDFLAGS = -L/usr/lib64/libpthread.so
#LDFLAGS = -L/usr/lib64/gcc/x86_64-suse-linux/4.6/../../../../x86_64-suse-linux/bin/ld
#LDFLAGS=-L/usr/lib -L/usr/local/lib -L/lib/perl/5.12.4/bits
#CCFLAGS= -O2 -g -Wall -I/usr/include -I./include/i386-linux-gnu/bits
 
OUT_EXE = preReqQuizQ10

build: $(FILES)
#	$(CC) $(CCFLAGS) -o $(OUT_EXE) $(FILES)
	$(CC) $(CCFLAGS) $(LDFLAGS) -o $(OUT_EXE) $(FILES)

clean:
	rm -f *.o core

