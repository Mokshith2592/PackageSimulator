#ifndef LOGISTICSSYSTEM_H
#define LOGISTICSSYSTEM_H

#include <bits/stdc++.h>
using namespace std;

#include <Customer.h>
#include <Package.h>
#include <Truck.h>
#include <Warehouse.h>

class LogisticsSystem {
    public:
        LogisticsSystem();
        void run();

        void addCustomer();
        void displayCustomers();
        bool customerExists(const int &customerId);

        void addPackage();
        void displayPackage();
        bool packageExists(const int &packageId);

        void addTruck();
        void addWarehouse();

    private:
        vector<Customer> customers;
        vector<Package> packages;
        vector<Warehouse> warehouses;
        vector<Truck> trucks;

        void showMenu();

};

#endif