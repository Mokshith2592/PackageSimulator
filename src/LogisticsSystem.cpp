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

    while(true) {
        int menuNumber;
        cout << "Enter a menu number: ";
        cin >> menuNumber;

        if(menuNumber == 1) addCustomer();
        else if(menuNumber == 2) displayCustomers();
        else exit(0);
    }
}

void LogisticsSystem::addCustomer() {
    Customer customer;
    customer.input();
    
    for(auto &c : customers) {
        if(c.getCustomerId() == customer.getCustomerId()){
            cerr << "Customer with this Id already exsits\n";
            return;
        }
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
        cout << c.getCustomerId() << "  " << c.getName() << "\n";
    }
}