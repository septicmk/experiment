## For What？

Is it safe to pass function pointers via MPI as a way of telling another node to call a function?

## Experiment

mpicxx test.cpp -o test
mpirun -n 10 -f .hosts ./test

## Result

- **Yes**, All ranks out put the same address.
- And passing a function pointer will act like rpc.

## Related work
[MPI+Function Pointers](stackoverflow.com/questions/7335871/mpi-function-pointers)

