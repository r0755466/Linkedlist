# The Compiler
CC=g++

# Compiler Flags
CFLAGS=-c -Wall 
# -c = Compile Only (no linking)
# -Wall = show all warnings

# Executable
EXECUTABLE=Controller

# target: dependencies
# [TAB] commando

# Default target:
all: $(EXECUTABLE)

$(EXECUTABLE): linkedlist.o student.o main.o 
	$(CC) -o $(EXECUTABLE) linkedlist.o student.o main.o  
# Object file (C++ file die gecompileerd is)

linkedlist.o: linkedlist.cpp
	$(CC) $(CFLAGS) linkedlist.cpp

student.o: student.cpp
	$(CC) $(CFLAGS) linkedlist.cpp

node.o: node.cpp
	$(CC) $(CFLAGS) node.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -f *.o $(EXECUTABLE)