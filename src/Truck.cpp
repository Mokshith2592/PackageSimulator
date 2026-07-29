#include <bits/stdc++.h>
using namespace std;

#include "../include/Truck.h"

Truck::Truck() {
    truckId = -1;
    driverName = "";
    maxCapacity = 0;
    currWarehouse = -1;
}

Truck::Truck(int truckId, string driverName, int maxCapacity, int currWarehouse) {
    this->truckId = truckId;
    this->driverName = driverName;
    this->maxCapacity = maxCapacity;
    this->currWarehouse = currWarehouse;
}

void Truck::input() {
    cout << "Enter truck id: ";
    cin >> truckId;

    cout << "Enter driver name: ";
    cin >> driverName;

    cout << "Enter truck maximum capacity: ";
    cin >> maxCapacity;

    cout << "Enter current warehouse id: ";
    cin >> currWarehouse;
}

void Truck::display() {
    cout << "Truck ID         : " << truckId << endl;
    cout << "Driver Name      : " << driverName << endl;
    cout << "Maximum Capacity : " << maxCapacity << endl;
    cout << "Current Warehouse: " << currWarehouse << endl;
}

void Truck::addPackageToTruck(int pId) {
    if (packagesInTruck.count(pId)) {
        cerr << "Package already exists to add\n";
        return;
    }
    packagesInTruck.insert(pId);
}

void Truck::removePackageFromTruck(int pId) {
    if (!packagesInTruck.count(pId)) {
        cerr << "Package doesnot exists to remove\n";
        return;
    }
    packagesInTruck.erase(pId);
}

bool Truck::containsPackageInTruck(int pId) {
    return packagesInTruck.count(pId) == 1;
}

int Truck::getTruckId() const {
    return truckId;
}

string Truck::getDriverName() const {
    return driverName;
}

int Truck::getMaxCapacity() const {
    return maxCapacity;
}

int Truck::getCurrWarehouse() const {
    return currWarehouse;
}

unordered_set<int> Truck::getPackagesInTruck() const {
    return packagesInTruck;
}

void Truck::setTruckId(int truckId) {
    this->truckId = truckId;
}

void Truck::setDriverName(const string& driverName) {
    this->driverName = driverName;
}

void Truck::setMaxCapacity(int maxCapacity) {
    this->maxCapacity = maxCapacity;
}

void Truck::setCurrWarehouse(int currWarehouse) {
    this->currWarehouse = currWarehouse;
}

void Truck::setPackagesInTruck(const unordered_set<int>& packagesInTruck) {
    this->packagesInTruck = packagesInTruck;
}
