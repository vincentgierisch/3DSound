#include <iostream>
#include <string>
#include <fstream>
#include <ios>
#include <exception>

#include "wav/wavContainer.h"

int main(int ac, char** av) {
    std::string fileName = "dosed.wav";
    if (ac > 1) {
        fileName = std::string(av[1]);
    }

    try {
        wav::WavContainer wavContainer(fileName);
    } catch (exception& e) {
        std::cout << e.what() << std::endl;
    }
}