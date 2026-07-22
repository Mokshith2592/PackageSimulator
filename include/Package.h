#ifndef PACKAGE_H
#define PACKAGE_H

#include <bits/stdc++.h>
using namespace std;

#include "Enums.h"

class Package {
    public:
        Package();
        Package(int packageId, int customerId, double weight, string destination, Priority priority);

        void input();
        void display();

        int getPackageId() const;
        int getCustomerId() const;
        float getWeight() const;
        string getDestination() const;
        Status getStatus() const;
        Priority getPriority() const;
        int getCurrWareHouse() const;
        int getAssignedTruck() const;

        void setPackageId(int packageId);
        void setCustomerId(int customerId);
        void setWeight(float weight);
        void setDestination(const string& destination);
        void setStatus(Status status);
        void setPriority(Priority priority);
        void setCurrWareHouse(int currWareHouse);
        void setAssignedTruck(int assignedTruck);

    private:
        int packageId;
        int customerId;

        float weight;
        
        string destination;

        Status status;
        Priority priority;
    
        int currWareHouse;
        int assignedTruck;
};

#endif
