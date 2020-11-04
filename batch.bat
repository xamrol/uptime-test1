cmd /c

"C:\Program Files\CodeBlocks\MinGW\bin"\g++.exe -c calculator.cpp

"C:\Program Files\CodeBlocks\MinGW\bin"\g++.exe -c main.cpp

"C:\Program Files\CodeBlocks\MinGW\bin"\g++.exe -o test.exe main.o calculator.o

test.exe

"C:\Program Files\Cppcheck"\cppcheck.exe --verbose --enable=all --enable=style --xml --output-file=cppCheckResults.xml .

start CppCheckResults.xml
