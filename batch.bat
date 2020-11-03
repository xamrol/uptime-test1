"C:\Program Files\CodeBlocks\MinGW\bin"\g++ -c calculator.cpp

"C:\Program Files\CodeBlocks\MinGW\bin"\g++ -c main.cpp

g++ -o test.exe main.o calculator.o

test.exe

"C:\Program Files\Cppcheck"\cppcheck --verbose --enable=all --enable=style --xml --output-file=cppCheckResults.xml .

cmd /c start CppCheckResults.xml

