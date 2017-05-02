//
//  Animal.hpp
//  OOP
//
//  Created by Mauricio Matsubara on 02/05/17.
//  Copyright © 2017 Mauricio Matsubara. All rights reserved.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <stdio.h>

class Animal {
public:
    float height;
    int age;
public:
    void setAge(int newAge);
    int getAge();
};

#endif /* Animal_hpp */
