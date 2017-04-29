IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=../bin
LDIR =../lib

LIBS=

_DEPS = swap.h unitTest.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o swap.o unitTest.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/main: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
	rm -f $(ODIR)/main 