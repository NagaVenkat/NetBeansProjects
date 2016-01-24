obj-m += mymemmove.o
obj-m += mystrstr.o


KDIR= /lib/modules/$(shell uname -r)/build

all:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	@rm -rf $(wildcard *.o *.ko mo* Mo* *.mod.c .*cmd .tmp*)
