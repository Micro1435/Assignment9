//
//  AppleFarmer.h
//  Assignment9
//
//  Created by Michael Montella on 11/30/15.
//  Copyright © 2015 Michael Montella. All rights reserved.
//

#ifndef AppleFarmer_h
#define AppleFarmer_h

class AppleFarmer {
public:
    AppleFarmer(int);
    ~AppleFarmer();
    void sellApples(int demand);
    void harvestApples(int dayHarvest);
    bool endOfMonth();
    void updateCurrentDay();
    int getInventory();
    double calculateAverageSales();
    double calculateAverageHarvest();
    void printSales();
    void printHarvest();
private:
    int sales[30];
    int harvest[30];
    int maxDays = 30;
    int currentDay = 0;
    int inventory = 0;
};

#endif
