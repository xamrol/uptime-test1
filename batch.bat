g++ -c calculator.cpp

g++ -c main.cpp

g++ -o test.exe main.o calculator.o

test.exe

cppcheck --verbose --enable=all --enable=style --xml --output-file=cppCheckResults.xml .

cmd /c start CppCheckResults.xml

