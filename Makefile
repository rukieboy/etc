obj-m = miscdevicedriver.o

#KDIR   := /usr/src/linux-headers-2.6.32-49-generic
#KDIR   := /usr/src/linux-headers-2.6.32-38-generic
KDIR    := /usr/src/linux-headers-3.2.0-39-generic-pae
PWD     := $(shell pwd)

default:
        $(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
        rm -rf *.ko
        rm -rf *.mod.*
        rm -rf .*.cmd
        rm -rf *.o
