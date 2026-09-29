#include <iostream>
#include <mpi.h>
#include <numeric>
#include <vector>

double mean(const std::vector<double>& values) {
    return std::accumulate(values.begin(), values.end(), 0.0) / values.size();
}

int main(int argc, char** argv) {

    for(int i = 0; i < argc; i++)
        std::cout << "argv[" << i << "]=" << argv[i] << '\n';
    MPI_Init(&argc, &argv);
    const std::vector<double> temperatures{18.0, 20.0, 22.0};
    std::cout << "[out] mean=" << mean(temperatures) << '\n';
    std::cerr << "[err]mean=" << mean(temperatures) << '\n';
    MPI_Finalize();
}