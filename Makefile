CC=gcc
SRCDIR=./src
RESDIR=./compiled

all: ${SRCDIR}/*
	${CC} ${SRCDIR}/hello_world.c -o ${RESDIR}/hello_world
	${CC} ${SRCDIR}/max.c -o ${RESDIR}/max
	${CC} ${SRCDIR}/cm_in.c -o ${RESDIR}/cm_in

clean:
	rm -f ./compiled/*
