app.exe: main.o my.o your.o test.hpp
	g++ -std=c++17 -Wall -m64 -o main.o my.o your.o

main.o: main.cpp test.hpp
	g++ -c main.cpp -std=c++17 -Wall  

my.o: my.cpp test.hpp
	g++ -c my.cpp -std=c++17 -Wall  

your.o: your.cpp test.hpp
	g++ -c your.cpp -std=c++17 -Wall  

clean:
	-rm app.exe
	-rm *.o
