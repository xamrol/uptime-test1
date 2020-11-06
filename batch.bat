"C:\MinGW\bin\g++.exe" -c calculator.cpp
"C:\MinGW\bin\g++.exe" -c main.cpp
"C:\MinGW\bin\g++.exe" -c test_unit.cpp
"C:\MinGW\bin\g++.exe" -o uptime-app calculator.o main.o
uptime-app.exe
"C:\MinGW\bin\g++.exe" -o uptime-test test_unit.o calculator.o
uptime-test.exe
"C:\Program Files\Cppcheck\cppcheck.exe" --check-config --xml --output-file=cppCheckResults.xml --verbose .
start CppCheckResults.xml
