#include <bits/stdc++.h>
#include "../include/LogisticsSystem.h"
#include "../include/Customer.h"

using namespace std;

LogisticsSystem::LogisticsSystem() {
    
}

void LogisticsSystem::run() {
    /*
        ==============================
        Package Delivery Simulator
        ==============================

        1. Add Customer
        2. Exit
    */

    int menuNumber;
    cout << "Enter a menu number: ";
    cin >> menuNumber;

    if(menuNumber == 1) addCustomer();
    else exit(0);
}

void LogisticsSystem::addCustomer() {
    Customer customer;
    customer.input();
    
    for(auto &c : customers) {
        if(c.getCustomerId() == customer.getCustomerId()){
            cerr << "Customer with this Id already exsits";
        }
    }
    customers.push_back(customer);
    cout << "Customer Added Successfully\n";
}

void LogisticsSystem::displayCustomers() {
    
}