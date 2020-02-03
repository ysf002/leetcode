#########################################################################
#  write by ysf002 @ 2016-4-2
#  mail ysf002@gmail.com
#########################################################################



CXX = g++

CC_ARG = -g -Wall -Wextra -Wno-missing-field-initializers -pthread -std=c++11
LINK_ARG = -lpthread -lgtest -lrt -lgmock 


PROGRAM_NAME = /home/server/leetcode/bin/leetcode

SOURCE = /home/server/leetcode/src/leetcode.cpp




OUTPUT_FLAG = -o $@

all: $(PROGRAM_NAME)

OBJECTS = $(SOURCE:.cpp=.o)
%.o: %.cpp	
	@echo "[Compiling   $< ...]"	
	@$(CXX) $(CC_ARG) -c $< $(OUTPUT_FLAG) 	
	
$(PROGRAM_NAME): $(OBJECTS)		
	@echo "[Linking   $@ ...]"	
	@$(CXX) $(PIC) $(OUTPUT_FLAG) $(OBJECTS) $(LINK_ARG)	

.PHONY = all clean check
.IGNORE : check
clean:	
	rm -rf $(OBJECTS) $(PROGRAM_NAME)


all: $(OBJECTS)	

