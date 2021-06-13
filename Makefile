rpg : main.o Character.o Mage.o Barbarian.o exception.o potion.o Priest.o Monster.o Start.o game.o
	g++ main.o Character.o Mage.o Barbarian.o exception.o potion.o Priest.o Monster.o Start.o game.o -o rpg

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

Monster.o : cpp/Monster.cpp hpp/Monster.hpp
	g++ -c cpp/Monster.cpp -o Monster.o
	
Start.o : cpp/Start.cpp hpp/Start.hpp
	g++ -c cpp/Start.cpp -o Start.o

game.o : cpp/game.cpp hpp/game.hpp
	g++ -c cpp/game.cpp -o game.o
	
clean : 
	rm *.o