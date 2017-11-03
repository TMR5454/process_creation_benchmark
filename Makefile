OBJ=posixspawn vforkandexec forkandexec test
#OBJ=posixspawn
MACROS=
MACROS+=-DMAXLOOP=10000

all:${OBJ}

${OBJ}:
	gcc $@.c -o $@ -O -Wall ${MACROS}

clean:
	rm -rf ${OBJ}
