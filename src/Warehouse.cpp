#include <bits/stdc++.h>
using namespace std;

#include "../include/Warehouse.h"

Warehouse::Warehouse() {
    warehouseId = -1;
    location = "";
    capacity = 0;
}

Warehouse::Warehouse(int warehouseId ,string location ,int capacity) {
    this->warehouseId = warehouseId;
    this->location = location;
    this->capacity = capacity;
}

void Warehouse::input() {
    cout << "Enter warehouse id: ";
    cin >> warehouseId;

    cout << "Enter warehouse location: ";
    cin >> location;

    cout << "Enter warehouse capacity: ";
    cin >> capacity;
}

void Warehouse::display() {
    cout << "Warehouse ID    : " << warehouseId << endl;
    cout << "Location        : " << location << endl;
    cout << "Capacity        : " << capacity << endl;
}

void Warehouse::addPackageToWarehouse(int pId) {
    if(packageIds.count(pId)) {
        cerr << "Package already exists to add\n";
        return;
    }
    packageIds.insert(pId);
}

void Warehouse::removePackageFromWarehouse(int pId) {
    if(!packageIds.count(pId)) {
        cerr << "Package doesnot exists to remove\n";
        return;
    }
    packageIds.erase(pId);
}

bool Warehouse::containsPackageInWarehouse(int pId) {
    return packageIds.count(pId) == 1;
}

int Warehouse::getWarehouseId() const {
    return warehouseId;
}

string Warehouse::getLocation() const {
    return location;
}

int Warehouse::getCapacity() const {
    return capacity;
}

unordered_set<int> Warehouse::getPackageIds() const {
    return packageIds;
}

void Warehouse::setWarehouseId(int warehouseId) {
    this->warehouseId = warehouseId;
}

void Warehouse::setLocation(const string& location) {
    this->location = location;
}

void Warehouse::setCapacity(int capacity) {
    this->capacity = capacity;
}

void Warehouse::setPackageIds(const unordered_set<int>& packageIds) {
    this->packageIds = packageIds;
}
