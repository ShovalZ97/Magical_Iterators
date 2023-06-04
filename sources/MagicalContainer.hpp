#pragma once

#include <vector>
#include <iterator>
#include <set>
#include <list>
#include <map>
#include <iostream>
#include <algorithm>

namespace ariel
{
    class MagicalContainer
    {
        std::vector<int> elements;
        std::vector<int> _prime;
        std::multiset<int> Ascending ;
        // std::multiset<int,greater<int>> _down;
        std::vector<int> _cross;

        bool isPrime(int number);
        // void update();
    public:
        MagicalContainer(){}
        ~MagicalContainer();
        MagicalContainer(const MagicalContainer &other) ;

        MagicalContainer &operator=(const MagicalContainer &other)noexcept = default ;
        MagicalContainer(MagicalContainer &&other) = default;
        MagicalContainer &operator=(MagicalContainer &&other) = default;

        void addElement(int element);
        void insertElement(int element);
        void removeElement(int element);
        size_t size() const{
            return elements.size();
        }

        bool operator==(const MagicalContainer &other) const;
        bool operator!=(const MagicalContainer &other) const;

        class AscendingIterator
        {
            
             private:
        // int *current;
        std::multiset<int>::iterator it;
        MagicalContainer * _p_m;
    public:
      
        AscendingIterator(MagicalContainer  &ppint1)
            : it(ppint1.Ascending.begin()),_p_m(&ppint1)
        {
        }
        int  operator*() const
        {
            return *it;
        }

        // int  *operator->() const
        // {
        //     return it;
        // }
         AscendingIterator &operator=(const AscendingIterator &other)= default;

    AscendingIterator(const AscendingIterator &other) = default;
    AscendingIterator(AscendingIterator &&other) noexcept = default;
        AscendingIterator &operator=(AscendingIterator &&other) noexcept = default;
                    ~AscendingIterator() = default;

        AscendingIterator &operator++() // ++i
        {
            ++it;
            return *this;
        }

         AscendingIterator operator++(int) // i++
        {
            AscendingIterator tmp = *this;
            ++it;
            return tmp;
        }

        bool operator==(const AscendingIterator &rhs) const
        {
            return it == rhs.it;
        }

        bool operator!=(const AscendingIterator &rhs) const
        {
            return it != rhs.it;
        }

            // AscendingIterator(const AscendingIterator &other);
            // AscendingIterator(const MagicalContainer &other);
            // ~AscendingIterator() = default;
            // AscendingIterator(AscendingIterator &&other) noexcept = default;
            // AscendingIterator &operator=(AscendingIterator &&other) noexcept = default;



            bool operator>(const AscendingIterator &rhs) const{
                return &it > &rhs.it;
            }
            bool operator<(const AscendingIterator &rhs) const{
                return &it < &rhs.it;
            }
            AscendingIterator &begin(){

                it=_p_m->Ascending.begin();
                return *this;
             }
            AscendingIterator &end(){
                it=_p_m->Ascending.end();
                return *this;
            }
        };

        // class SideCrossIterator
        // {
        // std::vector<int> cross;
        // public:
        // };
        class SideCrossIterator
        {
            
             private:
        // int *current;
        std::vector<int>::iterator it;
        MagicalContainer * _p_m;
    public:
      
        SideCrossIterator(MagicalContainer  &ppint1)
            : it(ppint1._cross.begin()),_p_m(&ppint1)
        {
        }
        int  operator*() const
        {
            return *it;
        }

        // int  *operator->() const
        // {
        //     return it;
        // }

        SideCrossIterator &operator++() // ++i
        {
            ++it;
            return *this;
        }

         SideCrossIterator operator++(int) // i++
        {
            SideCrossIterator tmp = *this;
            ++it;
            return tmp;
        }

        bool operator==(const SideCrossIterator &rhs) const
        {
            return it == rhs.it;
        }

        bool operator!=(const SideCrossIterator &rhs) const
        {
            return it != rhs.it;
        }

            // SideCrossIterator(const SideCrossIterator &other);
            // SideCrossIterator(const MagicalContainer &other);
            // ~SideCrossIterator() = default;
            // SideCrossIterator(SideCrossIterator &&other) noexcept = default;
            // SideCrossIterator &operator=(SideCrossIterator &&other) noexcept = default;



            bool operator>(const SideCrossIterator &rhs) const{
                return &it > &rhs.it;
            }
            bool operator<(const SideCrossIterator &rhs) const{
                return &it < &rhs.it;
            }
            SideCrossIterator &begin(){

                it=_p_m->_cross.begin();
                return *this;
             }
            SideCrossIterator &end(){
                it=_p_m->_cross.end();
                return *this;
            }
        };

        // class PrimeIterator
        // {
        // bool isPrime(int number);
        // std::vector<int> Prime;
        // int size;
        // public:
        // };
        class PrimeIterator
        {
            
             private:
        // int *current;
        std::vector<int>::iterator it;
        MagicalContainer * _p_m;
    public:
      
        PrimeIterator(MagicalContainer  &ppint1)
            : it(ppint1._prime.begin()),_p_m(&ppint1)
        {
        }
        int  operator*() const
        {
            return *it;
        }

        // int  *operator->() const
        // {
        //     return it;
        // }

        PrimeIterator &operator++() // ++i
        {
            ++it;
            return *this;
        }

         PrimeIterator operator++(int) // i++
        {
            PrimeIterator tmp = *this;
            ++it;
            return tmp;
        }

        bool operator==(const PrimeIterator &rhs) const
        {
            return it == rhs.it;
        }

        bool operator!=(const PrimeIterator &rhs) const
        {
            return it != rhs.it;
        }

            // PrimeIterator(const PrimeIterator &other);
            // PrimeIterator(const MagicalContainer &other);
            // ~PrimeIterator() = default;
            // PrimeIterator(PrimeIterator &&other) noexcept = default;
            // PrimeIterator &operator=(PrimeIterator &&other) noexcept = default;



            bool operator>(const PrimeIterator &rhs) const{
                return &it > &rhs.it;
            }
            bool operator<(const PrimeIterator &rhs) const{
                return &it < &rhs.it;
            }
            PrimeIterator &begin(){

                it=_p_m->_prime.begin();
                return *this;
             }
            PrimeIterator &end(){
                it=_p_m->_prime.end();
                return *this;
            }
        };

    };
}