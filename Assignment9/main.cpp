//
//  main.cpp
//  Assignment9
//
//  Created by Michael Montella on 11/30/15.
//  Copyright © 2015 Michael Montella. All rights reserved.
//

#include <iostream>
#include "AppleFarmer.h"

using namespace std;


int main() {
    AppleFarmer apples(0);
    
    int dayHarvest;
    int demand;
    
    while (apples.endOfMonth() == false) {

        cout << "Enter a harvest amount: " << endl;
        cin >> dayHarvest;
        apples.harvestApples(dayHarvest);
        
        cout << "Enter a sales amount: " << endl;
        cin >> demand;
        apples.sellApples(demand);
        
        cout << "Apple inventory: " << apples.getInventory() << endl;
        apples.updateCurrentDay();
    }
    
    cout << "Average harvest: " << apples.calculateAverageHarvest() << endl;
    cout << "Average sales: " << apples.calculateAverageSales() << endl;
    
}

