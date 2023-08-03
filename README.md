# LeetCode #17: Combinations (Daily Challenge 08/03/2023)
This repository contains a C++ solution to the LeetCode daily challenge #17 for 08/03/2023. https://leetcode.com/problems/letter-combinations-of-a-phone-number/

This solution beats 100.00% of users in runtime (0 ms) and 55.27% of users in memory usage (6.47 MB). 

## Running
Navigate to the directory containing the extracted implementation, then simply run `make` with the included Makefile.
```
cd LeetCode-17-Letter-Combinations-of-a-Phone-Number-CPP
make
```

The exact commands run by `make` are as follows:

```
g++ -Wall -O0 -pipe -fno-plt -fPIC combinations.cpp -o combinations
```

There are no arguments; the test cases are hard-coded into the C++ file.

## Cleaning up
Navigate to the directory containing the extracted implementation, then simply run `make clean` with the included Makefile.

```
cd LeetCode-17-Letter-Combinations-of-a-Phone-Number-CPP
make clean
```

The exact commands run by make clean are as follows:

```
rm -f combinations
```