compile: ./main.cpp
	g++ -c ./src/Char.cpp
	g++ -c ./main.cpp
	g++ main.o Char.o -o app -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network

run:
	./app

clean:
	rm *.o app

