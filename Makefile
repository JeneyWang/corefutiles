CC=gcc
LD=ld

CFLAGS=-g

OUTPUT= yes whoami sleep

all: yes whoami sleep

%.out: %.c
	$(CC) $(CFLAGS) -c $(input) -o $(output)

clean:
	rm -f $(OUTPUT)

.PHONY: all
