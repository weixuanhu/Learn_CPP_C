app.exe: main.o A.o B.o headerA.hpp headerB.hpp  header1.hpp header2.hpp header3.hpp
	g++ -std=c++17 -Wall -o app.exe main.o A.o B.o

main.o: main.cpp headerA.hpp headerB.hpp
	g++ -c main.cpp -std=c++17 -Wall

A.o: A.cpp header1.hpp header2.hpp
	g++ -c A.cpp -std=c++17 -Wall

B.o: B.cpp header3.hpp header2.hpp
	g++ -c B.cpp -std=c++17 -Wall

clean:
	-rm -f app.exe
	-rm -f *.o
