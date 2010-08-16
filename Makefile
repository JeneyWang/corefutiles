CC=gcc
LD=ld

CFLAGS=-g

OUTPUT= sleep tty whoami yes

all:  sleep tty whoami yes

%.out: %.c
	$(CC) $(CFLAGS) -c $(input) -o $(output)

clean:
	rm -f $(OUTPUT)

.PHONY: all
