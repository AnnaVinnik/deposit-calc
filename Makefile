deposit-calc:build/src/main.o build/src/deposit.o
	gcc build/src/main.o build/src/deposit.o -o bin/deposit-calc

build/src/main.o:src/main.c
	gcc -Wall -Werror -o build/src/main.o -c src/main.c 

build/src/deposit.o:src/deposit.c
	gcc -Wall -Werror -o build/src/deposit.o -c src/deposit.c


bin/deposit-calc-test:build/test/deposit_test.o build/test/main.o
	gcc -I thirdparty -I src build/test/deposit_test.o build/src/deposit.o build/test/main.o -o bin/deposit-calc-test

build/test/deposit_test.o:test/deposit_test.c
	gcc -I thirdparty -I src -c test/deposit_test.c -o build/test/deposit_test.o
build/test/main.o:test/main.c
	gcc -I thirdparty -c test/main.c -o build/test/main.o
