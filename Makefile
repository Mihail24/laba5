.PHONY: clean prepare app test

bin/func: prepare obj/main.o obj/func.o
	gcc -Wall obj/main.o obj/func.o -o bin/func -lm

bin/test: prepare obj/func.o obj/test.o obj/ctest.o
	gcc -Wall obj/func.o obj/test.o obj/ctest.o -o bin/test -lm

obj/main.o: prepare src/main.c
	gcc -Wall -c src/main.c -o obj/main.o -lm

obj/func.o: prepare src/func.c
	gcc -Wall -c src/func.c -o obj/func.o -lm

obj/test.o: prepare test/test.c
	gcc -Wall -c test/test.c -o obj/test.o -lm -Isrc -Ithirdparty

obj/ctest.o: prepare test/ctest.c
	gcc -Wall -c test/ctest.c -o obj/ctest.o -lm -Ithirdparty

prepare: bin obj

app: bin/func
	bin/func

test: bin/test
	bin/test

bin:
	mkdir bin

obj:
	mkdir obj

clean:
	rm -f bin/*
	rm -f obj/*
