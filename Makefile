CC=gcc
LD=ld

CFLAGS=-g -O2

OUTPUT= basename logname sleep tty whoami yes

all:  basename logname sleep tty whoami yes

%.out: %.c
	$(CC) $(CFLAGS) -c $(input) -o $(output)

clean:
	rm -f $(OUTPUT)

.PHONY: all
