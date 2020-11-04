"C:\Program Files\CodeBlocks\MinGW\bin\g++.exe" -Wall -fexceptions -g  -c calculator.cpp main.cpp

"C:\Program Files\CodeBlocks\MinGW\bin\g++.exe" -o test.exe calculator.o main.o

test.exe

"C:\Program Files\Cppcheck\cppcheck.exe" --verbose --enable=all --enable=style --xml --output-file=cppCheckResults.xml .

start CppCheckResults.xml
