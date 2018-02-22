###############################################################
# String & Oracle
#
# CS II Kent State University
# Make file for string class and testing oracle 
# J. Maletic Fall 2017
#
#

###############################################################
# Variables
CPP     = clang++
OPTIONS = -g -Wall -W -Wunused -Wuninitialized -Wshadow -std=c++11


# Names of your test files - add them in as you build them.
# Names must start with "test_"
MYTESTS = test_default_ctor test_c_str_ctor test_accessor test_capacity test_length test_assignment test_concat test_comp_assign test_lessThan test_substr test_findch test_findstr test_input test_split


# Names of test files (include or exclude ones you don't want)  testoracle_split
CTOR = testoracle_ctor_default testoracle_ctor_char  testoracle_ctor_charArray 
REL  = testoracle_equal testoracle_lessThan 
COPY = testoracle_ctor_copy testoracle_assign testoracle_ctor_charArray_int testoracle_ctor_int testoracle_swap_assign
OPS  = testoracle_concat testoracle_subscript testoracle_len_cap testoracle_input testoracle_find_char testoracle_find_string testoracle_substring 

###############################################################
# Compile just the string
# Compile and run all provided test oracles on string
# Compile and run all your tests on string
# Compile and run the project
msg:
	@echo 'Targets are:'
	@echo '  string'
	@echo '  tests'
	@echo '  oracle'
	@echo '  logview'
	@echo '  clean'



###############################################################
# Compile string 
#
string: string.hpp string.cpp
	$(CPP) -c $(OPTIONS) string.cpp -o string.o

###############################################################
# Run all of your tests
# 
# You will need to ADD your other below:
# For example: ./test_plus
#
tests: $(MYTESTS)
	./test_default_ctor
	./test_c_str_ctor
	./test_accessor
	./test_capacity
	./test_length
	./test_assignment
	./test_concat
	./test_comp_assign
	./test_lessThan
	./test_substr
	./test_findch
	./test_findstr
	./test_input
	./test_split 
   #ADD YOUR TESTS HERE ***************



###############################################################
# Compile all test programs
#
test_%: string.o test_%.o
	$(CPP) string.o test_$*.o -o test_$*

test_%.o: string.hpp test_%.cpp
	$(CPP) $(OPTIONS) -c test_$*.cpp



###############################################################
# Run test oracle
# Comment out one's you don't want to run.
#
oracle: $(CTOR) $(REL) $(COPY) $(OPS)
	./testoracle_ctor_default
	./testoracle_equal 
	./testoracle_ctor_char 
	./testoracle_ctor_charArray
	./testoracle_ctor_charArray_int 
	./testoracle_ctor_int
	./testoracle_ctor_copy 
	./testoracle_assign
	./testoracle_swap_assign
	./testoracle_lessThan
	./testoracle_concat
	./testoracle_subscript 
	./testoracle_len_cap 
	./testoracle_input 	
	./testoracle_substring
	./testoracle_find_char 
	./testoracle_find_string 
#	./testoracle_split

###############################################################
# Compile all test programs
#
testoracle_%: string.o testoracles/testoracle_%.o
	$(CPP) string.o testoracles/testoracle_$*.o -o testoracle_$*



###############################################################
# Compile Project 
#

logview.o: logview.cpp logentry.hpp string.hpp
	$(CPP) -c $(OPTIONS) logview.cpp -o logview.o

logentry.o: logentry.cpp logentry.hpp string.hpp
	$(CPP) -c $(OPTIONS) logentry.cpp -o logentry.o

logview: logview.o string.o logentry.o 
	$(CPP) $(OPTIONS) logview.o string.o logentry.o -o logview


###############################################################
# clean 
# Removes all .o files and all executables
#
clean:
	rm -f *.o
	rm -f $(CTOR) $(REL) $(COPY) $(OPS)
	rm -f $(MYTESTS)
	rm -f logview

