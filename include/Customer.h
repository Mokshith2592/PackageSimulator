#include <bits/stdc++.h>
using namespace std;

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer {
    public:
        Customer();
        Customer(int id ,const string &name ,const string &phoneNumber ,const string &address);

        void input();
        void display() const;

        // Getters
        int getCustomerId() const;
        string getName() const;
        string getPhoneNumber() const;
        string getAddress() const;

        // Setters
        void setCustomerId(int id);
        void setName(const string& name);
        void setPhoneNumber(const string& phoneNumber);
        void setAddress(const string& address);

    private:
        int customerId;
        string name;
        string phoneNumber;
        string address;

};

#endif