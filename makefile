all: edge.o word.o main.o
	g++ -o markov edge.o word.o main.o

main.o: main.cpp
	g++ -c main.cpp

edge.o: edge.cpp
	g++ -c edge.cpp

word.o: word.cpp
	g++ -c word.cpp

clean:
	rm -f *.o markov