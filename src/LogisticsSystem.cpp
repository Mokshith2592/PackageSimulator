#include <bits/stdc++.h>
#include "../include/LogisticsSystem.h"
#include "../include/Customer.h"
#include "../include/Package.h"
#include "../include/Warehouse.h"

using namespace std;

LogisticsSystem::LogisticsSystem() {
}

void LogisticsSystem::run() {
    while(true) {
        int menuNumber;
        cout << "Enter a menu number: ";
        cin >> menuNumber;

        if(menuNumber == 1) addCustomer();
        else if(menuNumber == 2) displayCustomers();
        else if(menuNumber == 3) addPackage();
        else if(menuNumber == 4) displayPackages();
        else if(menuNumber == 5) addWarehouse();
        else if(menuNumber == 6) displayWarehouses();
        else if(menuNumber == 7) assignPackage();
        else exit(0);
    }
}

bool LogisticsSystem::customerExists(const int &customerId) {
    for(auto &c : customers) {
        if(c.getCustomerId() == customerId) return true;
    }

    return false;
}

void LogisticsSystem::addCustomer() {
    Customer customer;
    customer.input();
    
    if(customerExists(customer.getCustomerId())) {
        cerr << "Customer with this Id already exsits\n";
        return;
    }

    string phoneNum = customer.getPhoneNumber();
    for(char ch : phoneNum) {
        if(isalpha(ch)) {
            cerr << "Customer phone number cannot have letters\n";
            return;
        }
    }
    customers.push_back(customer);
    cout << "Customer Added Successfully\n\n";
}

void LogisticsSystem::displayCustomers() {
    for(auto &c : customers) {
        c.display();
        cout << "\n";
    }
}

bool LogisticsSystem::packageExists(const int &packageId) {
    for(const auto &p : packages) {
        if(p.getPackageId() == packageId) return true;
    }

    return false;
}

void LogisticsSystem::addPackage() {
    Package package;
    package.input();

    if(packageExists(package.getPackageId())) {
        cerr << "Package with this Id already exsits\n";
        return;
    }

    if(!customerExists(package.getCustomerId())) {
        cerr << "Customer with this Id doesnot exsits\n";
        return;
    }
    
    packages.push_back(package);
    cout << "Package Added Successfully\n\n";
}

void LogisticsSystem::displayPackages() {
    for(auto &p : packages) {
        p.display();
        cout << "\n";
    }
}

bool LogisticsSystem::warehouseExists(int warehouseId) {
    for(auto w : warehouses) {
        if(w.getWarehouseId() == warehouseId) return true;
    }

    return false;
}

void LogisticsSystem::addWarehouse() {
    Warehouse warehouse;
    warehouse.input();

    if(warehouseExists(warehouse.getWarehouseId())) {
        cerr << "Warehouse already exists\n";
        return;
    }

    warehouses.push_back(warehouse);
    cout << "Warehouse added successfully\n\n";
}

void LogisticsSystem::displayWarehouses() {
    for(auto &w : warehouses) {
        w.display();
        cout << "\n";
    }
}

Warehouse* LogisticsSystem::getWarehouseObj(int wId) {
    for(auto &w : warehouses) {
        if(w.getWarehouseId() == wId) return &w;
    }
    return nullptr;
}

Package* LogisticsSystem::getPackageObj(int pId) {
    for(auto &p : packages) {
        if(p.getPackageId() == pId) return &p;
    }
    return nullptr;
}

void LogisticsSystem::assignPackage() {
    int pId;
    cout << "Enter package id: ";
    cin >> pId;

    if(!packageExists(pId)) {
        cerr << "Package doesnot exists\n";
        return;
    }

    int wId;
    cout << "Enter warehouse id: ";
    cin >> wId;

    if(!warehouseExists(wId)) {
        cerr << "Warehosue doesnot exists\n";
        return;
    }   

    Warehouse* warehouse = getWarehouseObj(wId);
    warehouse->addPackageToWarehouse(pId);

    Package* package = getPackageObj(pId);
    if(package->getCurrWareHouse == -1)  package->setCurrWareHouse(wId);
    else {
        cerr << "A package is existing in warehouse " << package->getCurrWareHouse;
    }
}
