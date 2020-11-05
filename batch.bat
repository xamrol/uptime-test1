"C:\MinGW\bin\g++.exe" -c calculator.cpp
"C:\MinGW\bin\g++.exe" -c main.cpp
"C:\MinGW\bin\g++.exe" -o app calculator.o main.o
app.exe
"C:\Program Files\Cppcheck\cppcheck.exe" --verbose --enable=all --enable=style --xml --output-file=cppCheckResults.xml .
start CppCheckResults.xml
