"C:\MinGW\bin\g++.exe" -c calculator.cpp
"C:\MinGW\bin\g++.exe" -c main.cpp
"C:\MinGW\bin\g++.exe" -o app calculator.o main.o
app.exe
"C:\Program Files\Cppcheck\cppcheck.exe" --check-config --xml --output-file=cppCheckResults.xml --verbose .
start CppCheckResults.xml
