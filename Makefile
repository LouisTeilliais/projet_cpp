rpg : main.o Character.o Mage.o Barbarian.o exception.o potion.o
	g++ main.o Character.o Mage.o Barbarian.o exception.o potion.o -o rpg

main.o : main.cpp
	g++ -c main.cpp -o main.o

Character.o : Character.cpp character.hpp
	g++ -c Character.cpp -o Character.o

Mage.o : Mage.cpp Mage.hpp
	g++ -c Mage.cpp -o Mage.o

Barbarian.o : Barbarian.cpp Barbarian.hpp
	g++ -c Barbarian.cpp -o Barbarian.o

exception.o : exception.cpp exception.hpp
	g++ -c exception.cpp -o exception.o

potion.o : potion.cpp potion.hpp
	g++ -c potion.cpp -o potion.o

clean : 
	rm *.o