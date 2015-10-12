# The compiler
CC=g++

# Compiler flags
CFLAGS=-Wall
	#  -Wall turns on most, but not all, compiler warnings


creeps: clean
	$(CC) $(CFLAGS) -o creeps main.cpp room.cpp connection.cpp
# entity.cpp hero.cpp

clean:
	rm -f creeps