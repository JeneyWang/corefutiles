CC=gcc
LD=ld

CFLAGS=-g

OBJECTS= yes.o

all: yes

%.out: %.c
	$(CC) $(CFLAGS) -c $(input) -o $(output)

clean:
	rm -f $(OBJECTS)

.PHONY: all
