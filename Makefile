
deposit-calc:main.o deposit.o
	gcc -Wall -Werror -o bin/deposit-calc build/main.o build/deposit.o

main.o:
	gcc -Wall -Werror -o build/main.o -c src/main.c

deposit.o:
	gcc -Wall -Werror -o build/deposit.o -c src/deposit.c


clean:
	rm -rf build/*

