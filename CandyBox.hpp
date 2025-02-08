#pragma once
#include <iostream>


template <class T>
class CandyBox
{
    public :
    CandyBox(int size)
    {
        itemsArr=new T[size];
        capacity=size;
        count=0;
    }
    ~CandyBox()
    {
        delete [] itemsArr;
    }
    bool addItem(const T& newItem)
    {
        if(!(count<capacity))return false;
        itemsArr[count]=newItem;
        count++;
        return true;
    }
    bool removeItem(int index)
    {
        if((index>=count)||index<0)return false;
        for (int i=index ;i<count-1;i++)
        {
            itemsArr[i]=itemsArr[i+1];
        }
        count--;
        itemsArr[count]=T();

        return true;   
    }
    void displayItems() const
    {
        int i=0;
        for( i=0;i<count;i++)
        {
            std::cout<<"Item["<<i<<"]"<<"= "<<itemsArr[i]<<std::endl;
        }
    }


    private:
    T *itemsArr;
    int capacity ,count;
};
