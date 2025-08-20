#ifndef SIMULATION_HPP
#define SIMULATION_HPP


#include <vector>
#include <iostream>


// Initialise les champ physiques : x, z, h, u 

void initialize(std::vector<double>& x, std::vector<double>& h, std::vector<double>& u,
                 std::vector<double>& z, double dx);

double minmod(double a, double b);

void compute_slopes(const std::vector<double>& q, std::vector<double>& dq);

void reconstruct_interfaces(const std::vector<double>& q,
                            const std::vector<double>& dq,
                            std::vector<double>& qL,
                            std::vector<double>& qR);



#endif