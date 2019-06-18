//
//  createLattice.hpp
//  phoneLattice
//
//  Created by shruthi on 6/18/19.
//
//

#ifndef createLattice_hpp
#define createLattice_hpp

#include <stdio.h>
#include <string>
#include <vector>

class CreateLattice {
    public :
    
        std::string getInput();
        std::vector<char> seperateSounds();
    
        std::string input;
};

#endif /* createLattice_hpp */
