all:
	mpicxx -std=c++11 -o3 -o test ./test.cpp
bench:
	mpiexec -n 5 ./test
clean:
	rm -rf test
