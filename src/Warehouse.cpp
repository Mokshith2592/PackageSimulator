#include <bits/stdc++.h>
using namespace std;

#include "../include/Warehouse.h"

Warehouse::Warehouse() {
    warehouseId = -1;
    location = "";
    capacity = 0;
    currPackages = 0;
}

Warehouse::Warehouse(int warehouseId ,string location ,int capacity ,int currPackages) {
    this->warehouseId = warehouseId;
    this->location = location;
    this->capacity = capacity;
    this->currPackages = currPackages;
}

void Warehouse::input() {
    cout << "Enter warehouse id: ";
    cin >> warehouseId;

    cout << "Enter warehouse location: ";
    cin >> location;

    cout << "Enter warehouse capacity: ";
    cin >> capacity;

    cout << "Enter current number of packages: ";
    cin >> currPackages;
}

void Warehouse::display() {
    cout << "Warehouse ID    : " << warehouseId << endl;
    cout << "Location        : " << location << endl;
    cout << "Capacity        : " << capacity << endl;
    cout << "Current Packages: " << currPackages << endl;
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

int Warehouse::getCurrPackages() const {
    return currPackages;
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

void Warehouse::setCurrPackages(int currPackages) {
    this->currPackages = currPackages;
}

void Warehouse::setPackageIds(const unordered_set<int>& packageIds) {
    this->packageIds = packageIds;
}
