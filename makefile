lab3: lab3.o
	g++ -o lab3 lab3.cpp

lab3.o: lab3.cpp file.in
	g++ -c lab3.cpp

clean:
	rm lab3.o

