SHELL = /bin/sh
CC = gcc
RM = rm -f
CFLAGS = -Wall -O3
CPPFLAGS = -I.
LDFLAGS = -g -lm

PROGNAME = Iris
HEADERS =  Iris.h 
SOURCES =  Iris_HUARD_Alicia.c
OBJ = $(SOURCES:.c=.o)

all: $(PROGNAME)

$(PROGNAME): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o $(PROGNAME)

%.o: %.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) -r $(PROGNAME) $(OBJ)