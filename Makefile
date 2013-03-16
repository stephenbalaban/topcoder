CFLAGS=-Wall
LD_PRELOAD="/usr/lib/libtcmalloc.so" HEAPCHECK=normal

clean:
	rm bin/*
