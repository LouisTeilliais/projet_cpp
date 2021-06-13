rpg : main.o Character.o Mage.o Barbarian.o exception.o potion.o Priest.o
	g++ main.o Character.o Mage.o Barbarian.o exception.o potion.o Priest.o -o rpg

main.o : cpp/main.cpp
	g++ -c cpp/main.cpp -o main.o

Character.o : cpp/Character.cpp hpp/character.hpp
	g++ -c cpp/Character.cpp -o Character.o

Mage.o : cpp/Mage.cpp hpp/Mage.hpp
	g++ -c cpp/Mage.cpp -o Mage.o

Barbarian.o : cpp/Barbarian.cpp hpp/Barbarian.hpp
	g++ -c cpp/Barbarian.cpp -o Barbarian.o

exception.o : cpp/exception.cpp hpp/exception.hpp
	g++ -c cpp/exception.cpp -o exception.o

potion.o : cpp/potion.cpp hpp/potion.hpp
	g++ -c cpp/potion.cpp -o potion.o

Priest.o : cpp/Priest.cpp hpp/Priest.hpp
	g++ -c cpp/Priest.cpp -o Priest.o

clean : 
	rm *.o