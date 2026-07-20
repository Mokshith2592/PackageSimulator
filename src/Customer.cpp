#include <bits/stdc++.h>
#include "../include/Customer.h"

using namespace std;

Customer::Customer() {
    customerId = 0;
    name = "";
    phoneNumber = "";
    address = "";
}

Customer::Customer(int id, const string& name, const string& phoneNumber, const string& address) {
    customerId = id;
    this->name = name;
    this->phoneNumber = phoneNumber;
    this->address = address;
}

void Customer::input() {
    cout << "Enter the customer Id: ";
    cin >> customerId;

    cout << "Enter the name of customer: ";
    cin >> name;

    cout << "Enter the phone number of customer: ";
    cin >> phoneNumber;

    cout << "Enter the address of customer: ";
    cin >> address;
}

void Customer::display() const {
    cout << "Customer ID : " << customerId << endl;
    cout << "Name        : " << name << endl;
    cout << "Phone       : " << phoneNumber << endl;
    cout << "Address     : " << address << endl;
}

int Customer::getCustomerId() const {
    return customerId;
}

string Customer::getName() const {
    return name;
}

string Customer::getPhoneNumber() const {
    return phoneNumber;
}

string Customer::getAddress() const {
    return address;
}

void Customer::setCustomerId(int id) {
    customerId = id;
}

void Customer::setName(const string& name) {
    this->name = name;
}

void Customer::setPhoneNumber(const string& phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Customer::setAddress(const string& address) {
    this->address = address;
}

