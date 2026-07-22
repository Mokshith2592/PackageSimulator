#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <bits/stdc++.h>
using namespace std;

class Warehouse {
    public:
        Warehouse();
        Warehouse(int warehouseId ,string location ,int capacity ,int currPackages);

        void input();
        void display();

        int getWarehouseId() const;
        string getLocation() const;
        int getCapacity() const;
        int getCurrPackages() const;
        unordered_set<int> getPackageIds() const;

        void setWarehouseId(int warehouseId);
        void setLocation(const string& location);
        void setCapacity(int capacity);
        void setCurrPackages(int currPackages);
        void setPackageIds(const unordered_set<int>& packageIds);
        
    private:
        int warehouseId;
        string location;
        int capacity;
        int currPackages;

        unordered_set<int> packageIds;
};

#endif
