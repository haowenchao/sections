objs-y := init.o main.o

TOPDIR      := $(shell pwd)
LINK_SCRIPT := link.lds

#MAKEFLAGS += no-print-directory
CFLAGS := -I$(TOPDIR)/include
export CFLAGS

all: $(objs-y)
	gcc -T$(LINK_SCRIPT) $^

%.o : %.c
	gcc -g -c -o $@ $<

clean:
	rm -rf a.out *.o

