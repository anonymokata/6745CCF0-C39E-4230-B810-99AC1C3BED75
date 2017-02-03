# Coding-Exercise-in-C-Linux
To compile the program
```
checkmk roman_calculator-test.check >roman_calculator-test.c
checkmk string_util-test.check >string_util-test.c
checkmk roman_calculator_util-test.check >roman_calculator_util-test.c

make -f roman_calculator.makefile
make -f roman_calculator.makefile test
```
You can run the main using 
```

./roman_calculator

./roman_calculator-test
./roman_calculator_util-test 
./string_util-test
