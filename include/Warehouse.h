#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <bits/stdc++.h>
using namespace std;

class Warehouse {
    public:
        Warehouse();
        Warehouse(int warehouseId ,string location ,int capacity);

        void input();
        void display();

        void addPackageToWarehouse(int pId);
        void removePackageFromWarehouse(int pId);
        bool containsPackageInWarehouse(int pId);

        int getWarehouseId() const;
        string getLocation() const;
        int getCapacity() const;
        unordered_set<int> getPackageIds() const;

        void setWarehouseId(int warehouseId);
        void setLocation(const string& location);
        void setCapacity(int capacity);
        void setPackageIds(const unordered_set<int>& packageIds);
        
    private:
        int warehouseId;
        string location;
        int capacity;

        unordered_set<int> packageIds;
};

#endif
