#include <algorithm>

double Centrifuge (int &time, int &ore, double *const u_238){
    int const &time_per_cycle = 12;
    int const &ore_per_cycle = 10;
    double const &u_238_per_cycle = .993;
    double const &u_235_per_cycle = .007;
    int possible_cycles_given_time = time /time_per_cycle;
    int possible_cycles_given_ore = ore / ore_per_cycle;
    int cycles = std::min(possible_cycles_given_time, possible_cycles_given_ore);
    time -= cycles *time_per_cycle;
    ore -= cycles *ore_per_cycle;
    *u_238 += cycles *u_238_per_cycle;
    return cycles *u_235_per_cycle;
}