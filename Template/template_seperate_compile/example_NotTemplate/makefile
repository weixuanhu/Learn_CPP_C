app.exe: main.o getMax.o getMin.o getMean.o getRange.o
	g++  -std=c++17 -Wall  -m64 -o app.exe main.o getMax.o getMin.o getMean.o getRange.o

main.o: main.cpp formular.hpp
	g++ -c main.cpp  -std=c++17 -Wall  

getMax.o: getMax.cpp formular.hpp
	g++ -c getMax.cpp -std=c++17 -Wall  

getMin.o: getMin.cpp formular.hpp
	g++ -c getMin.cpp -std=c++17 -Wall  
	
getMean.o: getMean.cpp formular.hpp
	g++ -c getMean.cpp -std=c++17 -Wall  

getRange.o: getRange.cpp formular.hpp
	g++ -c getRange.cpp -std=c++17 -Wall  

clean:
	-rm -f app.exe
	-rm -f *.o