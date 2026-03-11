#include "simulation.hpp"

// Initialise les champs : topographie z, vitesse u, hauteur h 

void initialize(std::vector<double>& x, std::vector<double>& z, std::vector<double>& u,
                 std::vector<double>& h, double dx ) {

                    std::size_t N = x.size();

                    for (std::size_t i = 0; i < N; ++i) {
                        x[i] = i * dx; // position spatiale
                        z[i] = 0.5;    // topographie constante 
                        h[i] = 1.0 - z[i]; // h+z + const (état stationnaire)
                        u[i] = 0.0;        // Vitesse initiale nulle
                    }
                 }
