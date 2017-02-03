# Coding-Exercise-in-C-Linux
To compile the program
```
checkmk roman_calculator-test.check >roman_calculator-test.c
checkmk string_utils-test.check >string_utils-test.c
checkmk roman_calculator_utils-test.check >roman_calculator_utils-test.c

make -f roman_calculator.makefile
make -f roman_calculator.makefile test
```
You can run the main using 
```

./roman_calculator

./roman_calculator-test
./roman_calculator_utils-test 
./string_utils-test
