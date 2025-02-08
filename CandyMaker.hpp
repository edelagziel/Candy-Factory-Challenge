#pragma once
#include <iostream>
#include<cstring>
#include "ChocolateSupplier.hpp"
#include "SugarSupplier.hpp"


class CandyMaker :public SugarSupplier,public ChocolateSupplier
{
    public:
        CandyMaker(const char* sugarSupplierName, const char* chocolateSupplierName);
        ~CandyMaker();
        void makeCandy(const char* candyName);

    private:
    char *currentCandy;
};
