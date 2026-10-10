CC = gcc
CFLAGS = -Wall -Ilib
LIBDIR = lib
SRCS = $(wildcard $(LIBDIR)/*.c)
OBJS = $(SRCS:.c=.o)

all: main_static

$(LIBDIR)/%.o: $(LIBDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBDIR)/libcalc.a: $(OBJS)
	ar rcs $@ $^

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

main_static: main.o $(LIBDIR)/libcalc.a
	$(CC) main.o -L$(LIBDIR) -lcalc -o main_static

clean:
	rm -f *.o $(LIBDIR)/*.o $(LIBDIR)/*.a main_static
