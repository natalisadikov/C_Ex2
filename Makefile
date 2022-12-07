CC = gcc
AR = ar
FLAGS = -wall -c -g
OBJECT_MAIN = main.o
OBJECT_MAT = my_mat.o
LIB_MAT = libmymat.a

all: connections

connections: $(OBJECT_MAIN)  $(OBJECT_MAT) $(LIB_MAT)
	$(CC) -o connections $(OBJECT_MAIN) -L.$(LIB_MAT)

$(OBJECT_MAIN):
	$(CC) $(FLAGS) main.c -o $(OBJECT_MAIN)

$(OBJECT_MAT):
		$(CC) $(FLAGS) my_mat.c -o $(OBJECT_MAT)

$(LIB_MAT):
	$(AR) rcs $(OBJECT_MAIN)  $(OBJECT_MAT) $(LIB_MAT)

.PHONY: clean all

clean:
	rm -f *.o *.a "connection"