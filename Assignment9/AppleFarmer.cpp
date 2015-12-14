//
//  AppleFarmer.cpp
//  Assignment9
//
//  Created by Michael Montella on 11/30/15.
//  Copyright © 2015 Michael Montella. All rights reserved.
//
#include <iostream>
#include "AppleFarmer.h"

using namespace std;

AppleFarmer::AppleFarmer(int initVal) {
    for (int i = 0; i < 30; i++) {
        sales[i] = initVal;
        harvest[i] = initVal;
    }
}

AppleFarmer::~AppleFarmer() {
    //dtor
}

void AppleFarmer::sellApples(int demand) {
    if (demand <= inventory) {
        sales[currentDay] = demand;
        inventory -= demand;
    } else {
        sales[currentDay] = 0;
    }
}

void AppleFarmer::harvestApples(int dayHarvest) {
    harvest[currentDay] = dayHarvest;
    inventory += dayHarvest;
}

bool AppleFarmer::endOfMonth() {
    if (currentDay == maxDays) {
        return true;
    } else {
        return false;
    }
}

void AppleFarmer::updateCurrentDay() {
    currentDay++;
}

double AppleFarmer::calculateAverageHarvest() {
    double total = 0.0;
    for (int i = 0; i < maxDays; i++) {
        total += harvest[i];
    }
    
    double average = total / maxDays;
    cout << average << endl;
    return average;
}

double AppleFarmer::calculateAverageSales() {
    double total = 0.0;
    for (int i = 0; i < maxDays; i++) {
        total += sales[i];
    }
    
    double average = total / maxDays;
    cout << average << endl;
    return average;
}

int AppleFarmer::getInventory() {
    return inventory;
}

void AppleFarmer::printHarvest() {
    for (int i = 0; i < maxDays; i++) {
        cout << "Day: " << i << " Harvest: " << harvest[i] << endl;
    }
}

void AppleFarmer::printSales() {
    for (int i = 0; i < maxDays; i++) {
        cout << "Day: " << i << " Sales: " << sales[i] << endl;
    }
}

