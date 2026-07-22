#include <bits/stdc++.h>
using namespace std;

#include "../include/Package.h"

namespace {
string priorityToString(Priority priority) {
    if (priority == Priority::HIGH) return "HIGH";
    if (priority == Priority::MEDIUM) return "MEDIUM";
    return "LOW";
}

string statusToString(Status status) {
    if (status == Status::AT_WAREHOUSE) return "AT_WAREHOUSE";
    if (status == Status::LOADED) return "LOADED";
    if (status == Status::IN_TRANSIT) return "IN_TRANSIT";
    if (status == Status::DELIVERED) return "DELIVERED";
    return "CREATED";
}
}

Package::Package() {
    packageId = 0;
    customerId = 0;
    weight = 0.0f;
    destination = "";
    status = Status::CREATED;
    priority = Priority::LOW;
    currWareHouse = -1;
    assignedTruck = -1;
}

Package::Package(int packageId, int customerId, double weight, string destination, Priority priority) {
    this->packageId = packageId;
    this->customerId = customerId;
    this->weight = weight;
    this->destination = destination;
    this->status = Status::CREATED;
    this->priority = priority;
    this->currWareHouse = -1;
    this->assignedTruck = -1;
}

void Package::input() {
    cout << "Enter package id: ";
    cin >> packageId;

    cout << "Enter customer id: ";
    cin >> customerId;

    cout << "Enter package weight: ";
    cin >> weight;

    cout << "Enter destination: ";
    cin >> destination;

    cout << "Enter priority (1 = HIGH, 2 = MEDIUM, 3 = LOW): ";
    int priorityChoice;
    cin >> priorityChoice;

    if(priorityChoice == 1) priority = Priority::HIGH;
    else if(priorityChoice == 2) priority = Priority::MEDIUM;
    else if(priorityChoice == 3) priority = Priority::LOW;
    else {
        cerr << "Enter a valid priority between 1 and 3\n";
        return;
    }

    status = Status::CREATED;
    currWareHouse = -1;
    assignedTruck = -1;
}

void Package::display() {
    cout << "Package ID     : " << packageId << endl;
    cout << "Customer ID    : " << customerId << endl;
    cout << "Weight         : " << weight << endl;
    cout << "Destination    : " << destination << endl;
    cout << "Priority       : " << priorityToString(priority) << endl;
    cout << "Status         : " << statusToString(status) << endl;
    cout << "Current Ware House     : " << currWareHouse << endl;
    cout << "Assigned Truck : " << assignedTruck << endl;
}

int Package::getPackageId() const {
    return packageId;
}

int Package::getCustomerId() const {
    return customerId;
}

float Package::getWeight() const {
    return weight;
}

string Package::getDestination() const {
    return destination;
}

Status Package::getStatus() const {
    return status;
}

Priority Package::getPriority() const {
    return priority;
}

int Package::getCurrWareHouse() const {
    return currWareHouse;
}

int Package::getAssignedTruck() const {
    return assignedTruck;
}

void Package::setPackageId(int packageId) {
    this->packageId = packageId;
}

void Package::setCustomerId(int customerId) {
    this->customerId = customerId;
}

void Package::setWeight(float weight) {
    this->weight = weight;
}

void Package::setDestination(const string& destination) {
    this->destination = destination;
}

void Package::setStatus(Status status) {
    this->status = status;
}

void Package::setPriority(Priority priority) {
    this->priority = priority;
}

void Package::setCurrWareHouse(int currWareHouse) {
    this->currWareHouse = currWareHouse;
}

void Package::setAssignedTruck(int assignedTruck) {
    this->assignedTruck = assignedTruck;
}
