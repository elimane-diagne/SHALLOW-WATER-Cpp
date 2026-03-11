#include "simulation.hpp"
#include <vector>

// Reconstruction MUSCL : valeurs gauche/droite aux interfaces i+1/2
void reconstruct_interfaces(const std::vector<double>& q,
                            const std::vector<double>& dq,
                            std::vector<double>& qL,
                            std::vector<double>& qR) {
    std::size_t N = q.size();
    qL.resize(N - 1);
    qR.resize(N - 1);

    for (std::size_t i = 0; i < N - 1; ++i) {
        qL[i] = q[i]     + 0.5 * dq[i];     // à droite de la cellule i
        qR[i] = q[i + 1] - 0.5 * dq[i + 1]; // à gauche de la cellule i+1
    }
}
