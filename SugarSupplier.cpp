#include<iostream>
#include"SugarSupplier.hpp"
#include <cstring>


SugarSupplier::SugarSupplier(const char * supplierName)
{
    sugarName= new char[strlen(supplierName)+1];
    strcpy(sugarName,supplierName);
}

SugarSupplier::~SugarSupplier()
{
    delete [] sugarName;
}

const char* SugarSupplier::getSugarName() const
{
    return sugarName;
}

void SugarSupplier::setSugarName(const char *newName)
{
    delete [] sugarName;
    sugarName= new char[strlen(newName)+1];
    strcpy(sugarName,newName);
}

void SugarSupplier::supplySugar()
{
    std::cout<<sugarName<<" is now supplying sugar! 🍬"<<std::endl;
}



