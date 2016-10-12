## For What？

Try to serialize a lambda to char\* and send it via MPI\_Send. 

## Experiment

mpicxx test.cpp -o test
mpirun -n 10 -f .hosts ./test

## Result

- **Yes**, it works well.
- And passing a lambda will act like rpc.

## Related work
[send-function-pointer-via-mpi](http://stackoverflow.com/questions/39970389/send-function-pointer-via-mpi)

