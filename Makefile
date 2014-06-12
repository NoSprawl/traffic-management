TARGET  := patch-target-1 patch-mirror-1
WARN    := -W -Wall -Wstrict-prototypes -Wmissing-prototypes
INCLUDE := -isystem /lib/modules/`uname -r`/build/include
CFLAGS  := -O2 -DMODULE -D__KERNEL__ ${WARN} ${INCLUDE}
CC      := gcc-3.0
	
${TARGET}.o: src/${TARGET}.c

.PHONY: clean

clean:
    rm -rf bin/${TARGET}.o
