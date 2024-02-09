#include <iostream>
#include "SalesData.h"

int main()
{
    SalesData itemData1, itemDataSum;

    // Ex41_22.out < input_20_21_22
    //-------------- Exercise 22 -------------------
    while (std::cin >> itemData1.bookNo 
        >> itemData1.units_sold 
        >> itemData1.price)
    {
        itemData1.revenue = itemData1.price * itemData1.units_sold;
        itemDataSum.units_sold += itemData1.units_sold;
        itemDataSum.revenue += itemData1.revenue;
    }
    itemDataSum.bookNo = itemData1.bookNo;


    std::cout << itemDataSum.bookNo 
                << " " << itemDataSum.units_sold 
                << " " << itemDataSum.revenue
                << std::endl;
    
    
    //------------------- End ----------------------

    return 0;
}