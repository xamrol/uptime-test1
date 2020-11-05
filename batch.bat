"C:\MinGW\bin\g++.exe" -c calculator.cpp
"C:\MinGW\bin\g++.exe" -c main.cpp
"C:\MinGW\bin\g++.exe" -o uptime-app calculator.o main.o
uptime-appapp.exe
"C:\Program Files\Cppcheck\cppcheck.exe" --check-config --xml --output-file=cppCheckResults.xml --verbose .
start CppCheckResults.xml
