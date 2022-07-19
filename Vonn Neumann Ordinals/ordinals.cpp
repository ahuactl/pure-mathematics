#include <string>
#include <cmath>
#include <fmt/core.h>

std::string vonn_neumann(const int& input) {
    std::string output = "Ø";

    if (input <= 0) 
        return output;

    output.reserve(std::pow(2, input + 1));
    output = fmt::format("{{{}", output);

    for (int i = 1; i < input; i++) 
        output = fmt::format("{0}, {0}}}", output);
    
    output = fmt::format("{}}}", output);

    return std::move(output);
}

int main(int argc, char** argv) {
    fmt::print("{}\n", vonn_neumann(std::stoul(argv[1])));

    return 0;
}
