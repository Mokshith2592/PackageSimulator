#include <bits/stdc++.h>
using namespace std;

#ifndef TRUCK_H
#define TRUCK_H

class Truck {
    public:
        Truck();
        Truck(int truckId ,string driverName ,int maxCapacity ,int currWarehouse);

        void input();
        void display();

        void addPackageToTruck(int pId);
        void removePackageFromTruck(int pId);
        bool containsPackageInTruck(int pId);

        int getTruckId() const;
        string getDriverName() const;
        int getMaxCapacity() const;
        int getCurrWarehouse() const;
        unordered_set<int> getPackagesInTruck() const;

        void setTruckId(int truckId);
        void setDriverName(const string& driverName);
        void setMaxCapacity(int maxCapacity);
        void setCurrWarehouse(int currWarehouse);
        void setPackagesInTruck(const unordered_set<int>& packagesInTruck);

    private:
        int truckId;
        string driverName;
        int maxCapacity;
        int currWarehouse;
        unordered_set<int> packagesInTruck;
};

#endif
