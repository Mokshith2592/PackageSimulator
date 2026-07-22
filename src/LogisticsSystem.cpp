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
        else if(menuNumber == 4) displayPackage();
        else if(menuNumber == 5) addWarehouse();
        else if(menuNumber == 6) displayWarehouses();
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
    cout << "Customer Added Successfully\n";
}

void LogisticsSystem::displayCustomers() {
    for(auto &c : customers) {
        c.display();
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
    cout << "Package Added Successfully\n";
}

void LogisticsSystem::displayPackage() {
    for(auto &p : packages) {
        p.display();
    }
}

bool LogisticSystem::warehouseExists(int warehouseId) {
    for(auto w : warehouses) {
        if(w.getWarehouseId() == warehouseId) return true;
    }

    return false;
}

void LogisticSystem::addWarehouse() {
    Warehouse warehouse;
    warehouse.input();

    if(warehouseExists(warehouse.getWarehouseId())) {
        cerr << "Warehouse already exists\n";
        return;
    }

    warehouses.push_back(warehouse);
    cout << "Warehouse added successfully\n";
}

void LogisticSystem::displayWarehouses() {
    for(auto &w : warehouses) {
        w.display();
    }
}