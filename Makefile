TARGET 		= xfer

OBJS 		= main.o http.o cpc.o parse.o
INCDIR 		= -I.
CXX 		= g++
CFLAGS 		= -O2  -W
ifeq ($(OS),Windows_NT)
LDFLAGS 	= -s -Wl
LIBS  		= -lwsock32
else
LDFLAGS 	= -s 
LIBS  		= 
endif
STRIP		= strip


all:		$(TARGET)


$(TARGET): ${OBJS}
	${CXX} -o "$@" ${OBJS} ${LDFLAGS} ${LIBS}
	$(STRIP) $(TARGET).exe
	rm -f ${OBJS}

%.o : %.c
	${CC} ${CFLAGS} ${INCDIR} -c $< -o $@

clean:
	rm -f ${OBJS}
