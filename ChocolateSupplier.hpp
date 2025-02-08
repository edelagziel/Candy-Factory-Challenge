#pragma once 
#include <iostream>
class ChocolateSupplier
{

    public :
    ChocolateSupplier(const char* supplierName);
    ~ChocolateSupplier();
    const char* getChocolateName() const;
    void setChocolateName(const char* newName);
    void supplyChocolate();


    private:
    char* chocolateName;

};
