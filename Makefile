# define C compiler & flags
CC = gcc
CFLAGS = -Wall -g

# define libraries to be linked (for example -lm)
LIB = 

HDR = 
SRC = main.c
# OBJ is the same as SRC, just replace .c with .h
OBJ     = $(SRC:.c=.o)
 
# the executable name
EXE = yelp


$(EXE): $(OBJ) Makefile
	$(CC) $(CFLAGS) -o $(EXE) $(OBJ) $(LIB)
clean:: 
	rm -f $(OBJ) $(EXE)

$(OBJ): $(HDR)
