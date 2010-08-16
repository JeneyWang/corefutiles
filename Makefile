CC=gcc
LD=ld

CFLAGS=-g

OUTPUT= yes whoami

all: yes whoami

%.out: %.c
	$(CC) $(CFLAGS) -c $(input) -o $(output)

clean:
	rm -f $(OUTPUT)

.PHONY: all
