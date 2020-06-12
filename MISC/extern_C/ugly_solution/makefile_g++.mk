app.exe: main.o foo.o
	g++ -std=c++17 -Wall -o app.exe main.o foo.o

main.o: main.cpp foo.h
	g++ -std=c++17 -Wall -c main.cpp

foo.o: foo.c foo.h
	g++ -std=c++17 -Wall -c foo.c

clean:
	-@rm app.exe
	-@rm *.o
