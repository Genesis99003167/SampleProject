# Name of the project
PROJECT_NAME = cquizgame

# Output directory
BUILD = build

# All source code files
SRC = main.c\
3_Implementation/src/cquizgame.c

# All test source files
TEST_SRC = 3_Implementation/test/cquizgame.c\


TEST_OUTPUT = $(BUILD)/Test_$(cquizgame).out

# All include folders with header files
INC = -I/3_Implementation/inc\

#Library Inlcudes
#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build

