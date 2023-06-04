#include "MagicalContainer.hpp"
#include <math.h>
#include <iostream>

using namespace ariel;


/********            class MagicalContainer             *********/
// MagicalContainer::MagicalContainer():elements(){}

bool MagicalContainer::isPrime(int number) {
    if (number < 2) {
        return false;
    }

    int sqrtNumber = std::sqrt(number);
    for (int i = 2; i <= sqrtNumber; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}
MagicalContainer::~MagicalContainer(){  }

MagicalContainer::MagicalContainer(const MagicalContainer& other) 
    : elements(other.elements.begin(), other.elements.end()),
    _prime(other._prime.begin(), other._prime.end()),
    Ascending(other.Ascending.begin(), other.Ascending.end()),
    // _down (other._down.begin(), other._down.end()),
    _cross(other._cross.begin(), other._cross.end()){} // Construct new vector from other


void MagicalContainer::addElement(int element){
    elements.emplace_back(element);
    Ascending.insert(element);

    for (auto it = Ascending.begin(); it != Ascending.end(); ++it) {
        auto it_e =--Ascending.end();
        _cross.emplace_back(*it);
        if(it_e != it){
            _cross.emplace_back(*it_e);
        }
    }
    if(isPrime(element)){
        _prime.emplace_back(element);
    }

}
void MagicalContainer::removeElement(int numberToDelete){
     for (auto it = elements.begin(); it != elements.end(); ++it) {
            if (*it == numberToDelete) {
                elements.erase(it);
                break;
            }
        }
}

bool MagicalContainer::operator==(const MagicalContainer &other) const{
    return this==&other;
}
bool MagicalContainer::operator!=(const MagicalContainer &other) const{
    return this!=&other;
}

/********            class MagicalContainer             *********/
          