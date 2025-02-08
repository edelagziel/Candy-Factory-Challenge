#include <iostream>
#include<cstring>
#include "CandyMaker.hpp"
// #include "ChocolateSupplier.hpp"
// #include "SugarSupplier.hpp"

CandyMaker::CandyMaker(const char* sugarSupplierName, const char* chocolateSupplierName):
SugarSupplier(sugarSupplierName),
ChocolateSupplier(chocolateSupplierName)
{
    currentCandy=nullptr;
}
CandyMaker ::~CandyMaker()
{   
        if(currentCandy!=nullptr)
        delete [] currentCandy;  
  

}

void CandyMaker::makeCandy(const char* candyName)
{
    if(currentCandy!=nullptr)
    delete [] currentCandy;  
    currentCandy=new char[strlen(candyName)+1];
    strcpy(currentCandy,candyName);

    std::cout<<"Using sugar from "<<getSugarName()<<" and chocolate from "<<getChocolateName()<<" to create "
    <<currentCandy<<"! 🍭"<<std::endl;
}

