#include <bits/stdc++.h>
using namespace std;

#include <Customer.h>
#include <Package.h>
#include <Truck.h>
#include <Warehouse.h>

#ifndef LOGISTICSSYSTEM_H
#define LOGISTICSSYSTEM_H

class LogisticsSystem {
    public:
        LogisticsSystem();
        void run();

        void addCustomer();
        void addPackage();
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