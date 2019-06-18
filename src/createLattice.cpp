//
//  createLattice.cpp
//  phoneLattice
//
//  Created by shruthi on 6/18/19.
//
//

#include "createLattice.hpp"
#include <iostream>
#include <vector>

std::string CreateLattice::getInput() {
    CreateLattice::input = "";
    std::cout << "Enter word : ";
    getline(std::cin, CreateLattice::input);
    return CreateLattice::input;
}

std::vector<char> CreateLattice::seperateSounds() {
    std::vector<char> letters;
    
    for (int i = 0; i < CreateLattice::input.size(); i++) {
        letters.push_back(CreateLattice::input.at(i));
    }
    
    return letters;
}
