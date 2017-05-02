//
//  main.cpp
//  OOP
//
//  Created by Mauricio Matsubara on 02/05/17.
//  Copyright © 2017 Mauricio Matsubara. All rights reserved.
//

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Duck.hpp"


int main(int argc, const char * argv[]) {
    Animal cat;
    cat.setAge(10);
    
    Cat newcat;
    newcat.setAge(5);
    newcat.meow();
    
    Duck duck;
    duck.quack();
    
    std::cout << cat.getAge();
    return 0;
}
