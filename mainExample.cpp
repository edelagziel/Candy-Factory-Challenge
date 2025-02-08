#include <iostream>
#include "CandyMaker.hpp"
#include "CandyBox.hpp"
int main()
{
    
    // CandyMaker NewCandeyMaker("eden","may");
    // NewCandeyMaker.makeCandy("lolo");
    CandyBox <std::string>mybox(10);
    std::cout<<mybox.addItem("eden");
    mybox.addItem("hi");
    mybox.addItem("yo");
    mybox.addItem("zzz");
    mybox.addItem("may");
    mybox.removeItem(2);
    mybox.displayItems();


    

}
