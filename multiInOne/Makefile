NAME_APP1 = app1
NAME_APP2 = app2

TARGETS = $(NAME_APP1) $(NAME_APP2)

SOURCE_COMMON = $(wildcard ./00_Common/*.c)
SOURCE_APP1 = $(SOURCE_COMMON) $(wildcard ./01_Application1/*.c)
SOURCE_APP2 = $(SOURCE_COMMON) $(wildcard ./02_Application2/*.c)

OBJ_APP1 = $(patsubst %.c, %.o, $(SOURCE_APP1))
OBJ_APP2 = $(patsubst %.c, %.o, $(SOURCE_APP2))

INCLUDE_COMMON = -I./00_Common/

CFLAGS = -Wall -c
CC = gcc

all: $(TARGETS)
$(NAME_APP1): $(OBJ_APP1)	
	@mkdir -p output/
	$(CC) $(OBJ_APP1) -o output/$(NAME_APP1)

$(NAME_APP2): $(OBJ_APP2)	
	@mkdir -p output/
	$(CC) $(OBJ_APP2) -o output/$(NAME_APP2)

%.o: %.c
	$(CC) $(INCLUDE_COMMON) $(CFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJ_APP1) $(OBJ_APP2) output/ 
