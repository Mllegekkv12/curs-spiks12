All: spiks

spiks: main.o
	g++ main.o -o spiks

main.o: src/main.cpp
	g++ -c src/main.cpp

clean:
	rm -rf *.o spiks