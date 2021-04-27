#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std
class Account {
private:
    string id;
    string password;
    int deposit;

public:
    Account(string id, string password, int deposit);
};
int main() {
    cout << "Hello branch" << endl;
}