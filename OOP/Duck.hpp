//
//  Duck.hpp
//  OOP
//
//  Created by Mauricio Matsubara on 02/05/17.
//  Copyright © 2017 Mauricio Matsubara. All rights reserved.
//

#ifndef Duck_hpp
#define Duck_hpp
#include "Animal.hpp"
#include <stdio.h>

class Duck : public Animal {
public:
    void quack(void);
};

#endif /* Duck_hpp */
