#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>

#include "man.h"

class Database
{
    public:
        Database();
        ~Database();
        void start();
        void finish();
        void display();
        void add(Man m1);
        vector<Man> getData();
        void setData(vector<Man> v);
        void sortFirstName();
        void sortLastName();
        void sortBirthYear();
        void sortDeathYear();
    private:
        vector<Man> data;
};
bool sortByFirstName(const Man& m1, const Man& m2);
bool sortByLastName(const Man& m1, const Man& m2);
bool sortByBirthYear(const Man& m1, const Man& m2);
bool sortByDeathYear(const Man& m1, const Man& m2);
#endif // DATABASE_H