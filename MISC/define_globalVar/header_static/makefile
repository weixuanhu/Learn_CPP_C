app.exe: main.o first.o second.o test.hpp
	g++ -std=c++17 -Wall -o app.exe main.o first.o second.o

main.o: main.cpp test.hpp
	g++ -c main.cpp -std=c++17 -Wall  

my.o: first.cpp test.hpp
	g++ -c first.cpp -std=c++17 -Wall  

your.o: second.cpp test.hpp
	g++ -c second.cpp -std=c++17 -Wall  

clean:
	-@rm app.exe
	-@rm *.o
