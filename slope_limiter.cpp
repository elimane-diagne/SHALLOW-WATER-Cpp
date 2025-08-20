#include "simulation.hpp"
#include <cmath>



// Limiteur de pente : minmod

double minmod(double a, double b){
    if (a * b <= 0.0)
        return 0.0;
    else
        return (std::abs(a) < std::abs(b)) ? a : b ;

}

// calcul la pente dq[i] à partir de q[i+1] - q[i]

void compute_slopes(const std::vector<double>& q, std::vector<double>& dq){
    std::size_t N = q.size();
    dq.resize(N);

    dq[0] = 0.0;         //pente nulle aux bords
    dq[N-1] = 0.0;

    for (std::size_t i = 1; i < N-1; ++i){
        double left = q[i] - q[i-1];
        double right = q[i+1] - q[i];
        dq[i] = minmod(left, right);
    }
}