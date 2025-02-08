#include <cstring>
#include<iostream>
#include "ChocolateSupplier.hpp"


ChocolateSupplier::ChocolateSupplier(const char* supplierName)
{
    chocolateName=new char[strlen(supplierName)+1];
    strcpy(chocolateName,supplierName);
}
ChocolateSupplier:: ~ChocolateSupplier()
{
    delete[] chocolateName;
}
const char*ChocolateSupplier::  getChocolateName() const
{
    return chocolateName;
}

void ChocolateSupplier::setChocolateName(const char* newName)
{
    delete[] chocolateName;
    chocolateName=new char[strlen(newName)+1];
    strcpy(chocolateName,newName);
}

void ChocolateSupplier::supplyChocolate()
{
    std::cout<<chocolateName<<" is now supplying chocolate! 🍫"<<std::endl;
}



