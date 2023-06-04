#include "doctest.h"
#include "sources/MagicalContainer.hpp"
#include <iostream>
#include <limits>
// #include "sources/Point.hpp"
using namespace ariel;
// /*
// CHECK()
// CHECK_GE()
// CHECK_LE()
// CHECK_FALSE()
// CHECK_EQ()
// CHECK_NE()
// CHECK_THROWS_AS()
// CHECK_NOTHROW()
// #include "sources/Fraction.hpp"
// */

// TEST_SUITE("")
// {


//     TEST_CASE("")
//     {

//     }
// }
    TEST_SUITE("conctructor")
    {
        
        TEST_CASE("")
        {
            MagicalContainer container;
    container.addElement(17);
    container.addElement(2);
    container.addElement(25);
    container.addElement(9);
    container.addElement(3);
    MagicalContainer con;
    con.addElement(17);
    con.addElement(2);
    con.addElement(25);
    con.addElement(9);
    con.addElement(3);
    MagicalContainer same;
    same.addElement(17);
    same.addElement(2);
    same.addElement(25);
    same.addElement(9);
    same.addElement(3);


            SUBCASE("")
            {
               CHECK_NOTHROW(MagicalContainer::AscendingIterator ascIter(container));
               CHECK_NOTHROW(MagicalContainer::AscendingIterator ascIter(con));
               CHECK_NOTHROW(MagicalContainer::AscendingIterator ascIter(same));


            }

            SUBCASE("")
            {
                CHECK_NOTHROW(MagicalContainer::SideCrossIterator crossIter(container));
                CHECK_NOTHROW(MagicalContainer::SideCrossIterator crossIter(con));
                CHECK_NOTHROW(MagicalContainer::SideCrossIterator crossIter(same));
            }
            SUBCASE("")
            {
                CHECK_NOTHROW(MagicalContainer::PrimeIterator primeIter(container));
                CHECK_NOTHROW(MagicalContainer::PrimeIterator primeIter(con));
                CHECK_NOTHROW(MagicalContainer::PrimeIterator primeIter(same));
            }
        }
    }
    TEST_SUITE("")
{

    TEST_CASE("")
    {
        MagicalContainer container;
        CHECK_NOTHROW(container.addElement(17));
        CHECK_NOTHROW(container.addElement(17));
        CHECK_NOTHROW(container.addElement(17));
        CHECK_NOTHROW(container.addElement(0));
        CHECK_NOTHROW(container.addElement(8));
        CHECK_NOTHROW(container.addElement(-6));
        CHECK_NOTHROW(container.addElement(std::numeric_limits<int>::max()));
        CHECK_NOTHROW(container.addElement(std::numeric_limits<int>::min()));


    }
        TEST_CASE("")
    {
        MagicalContainer container;
        CHECK_NOTHROW(container.addElement(17));
        CHECK_NOTHROW(container.addElement(17));
        CHECK_NOTHROW(container.addElement(17));
        CHECK_NOTHROW(container.addElement(0));
        CHECK_NOTHROW(container.addElement(8));
        CHECK_NOTHROW(container.addElement(-6));
        CHECK_NOTHROW(container.addElement(std::numeric_limits<int>::max()));
        CHECK_NOTHROW(container.addElement(std::numeric_limits<int>::min()));
        CHECK_EQ(container.size(),8);
        MagicalContainer::AscendingIterator ascIter(container);
        auto it = ascIter.begin();
    for (; it != ascIter.end(); ++it) {
        CHECK_NOTHROW( *it ); 
    }
    CHECK_THROWS_AS(*it, std::runtime_error);

    }
    TEST_CASE("")
    {
        MagicalContainer container;
        CHECK_NOTHROW(container.addElement(17));
        CHECK_NOTHROW(container.addElement(17));
        CHECK_NOTHROW(container.addElement(17));
        CHECK_NOTHROW(container.addElement(0));
        CHECK_NOTHROW(container.addElement(8));
        CHECK_NOTHROW(container.addElement(-6));
        CHECK_NOTHROW(container.addElement(std::numeric_limits<int>::max()));
        CHECK_NOTHROW(container.addElement(std::numeric_limits<int>::min()));
        CHECK_EQ(container.size(),8);
        MagicalContainer::AscendingIterator ascIter(container);
        auto it = ascIter.begin();
    for (; it != ascIter.end(); ++it) {
        container.removeElement( *it ); 
    }

    }
}
    //  TEST_SUITE("")
    // {
    //     TEST_CASE("")
    //     {
            


    //         SUBCASE("")
    //         {
               


    //         }

    //         SUBCASE("")
    //         {
                
    //         }
    //     }
    // }