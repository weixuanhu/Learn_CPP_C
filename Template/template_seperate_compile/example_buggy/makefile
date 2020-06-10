app.exe: main.o getMax.o getMin.o getMean.o getRange.o
	g++  -std=c++17 -Wall -mcmodel=medium -m64 -o app.exe main.o getMax.o getMin.o getMean.o getRange.o

main.o: main.cpp formular.hpp
	g++ -c main.cpp  -std=c++17 -Wall -mcmodel=medium 

getMax.o: getMax.cpp formular.hpp
	g++ -c getMax.cpp -std=c++17 -Wall -mcmodel=medium 

getMin.o: getMin.cpp formular.hpp
	g++ -c getMin.cpp -std=c++17 -Wall -mcmodel=medium 
	
getMean.o: getMean.cpp formular.hpp
	g++ -c getMean.cpp -std=c++17 -Wall -mcmodel=medium 

getRange.o: getRange.cpp formular.hpp
	g++ -c getRange.cpp -std=c++17 -Wall -mcmodel=medium 