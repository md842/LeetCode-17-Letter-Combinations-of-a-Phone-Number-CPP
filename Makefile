CPPFLAGS = -Wall -O0 -pipe -fno-plt -fPIC

default: combinations

combinations: combinations.cpp
	g++ $(CPPFLAGS) combinations.cpp -o combinations

.PHONY: clean
clean:
	rm -f combinations
