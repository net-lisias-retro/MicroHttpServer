PROJ=microhttpserver

CC=cc
CPP=c++
INCLUDES=-Ilib
# DEFS=-D_PARSE_SIGNAL_ -D_PARSE_SIGNAL_INT_ -DDEBUG_MSG -DENABLE_STATIC_FILE=1 -DMHS_PORT=8001
DEFS=-D_PARSE_SIGNAL_ -D_PARSE_SIGNAL_INT_ -DENABLE_STATIC_FILE=1 -DMHS_PORT=8001
CFLAGS=-g -O0 -Wall
SRCS=main.c lib/url.c lib/server.c lib/middleware.c lib/multipart.c lib/dummy_api.c lib/http_protocol.c

all:
	$(CC) $(SRCS) $(INCLUDES) $(DEFS) $(CFLAGS) -o $(PROJ)

clean:
	rm -rf *.out *.bin *.exe *.o *.a *.so *.list *.img test build $(PROJ)
