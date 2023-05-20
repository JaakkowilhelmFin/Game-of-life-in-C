program.exe: game_of_life_main.o game_of_life_count_neighbours.o game_of_life_init_gameboard.o game_of_life_print_gameboard.o game_of_life_updategameboard.o
	gcc game_of_life_main.o game_of_life_count_neighbours.o game_of_life_init_gameboard.o game_of_life_print_gameboard.o game_of_life_updategameboard.o -o program.exe

game_of_life_main.o: game_of_life_main.c header.h  
	gcc -c game_of_life_main.c

game_of_life_count_neighbours.o: game_of_life_count_neighbours.c header.h
	gcc -c game_of_life_count_neighbours.c 

game_of_life_init_gameboard.o: game_of_life_init_gameboard.c header.h
	gcc -c game_of_life_init_gameboard.c 

game_of_life_print_gameboard.o: game_of_life_print_gameboard.c header.h 
	gcc -c game_of_life_print_gameboard.c 

game_of_life_updategameboard.o: game_of_life_updategameboard.c header.h 
	gcc -c game_of_life_updategameboard.c     
