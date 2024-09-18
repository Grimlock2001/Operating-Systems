#include <iostream>
#include <math.h>

using namespace std;

class Car
{
    public:
        string make;
        int year;
        string model;

    void print(){
        cout << "My car's make is: " << make << endl;
        cout << "My car's model is: " << model << endl;
        cout << "my car's year is: " << year << endl;
    }

    void incrementYear(){
        year = year + 1;
    }
};

int sum(int a, int b){
    return a + b;
}

int main() {
    //Testing a print statement
    cout << "Test Run" << endl;
    
    //Testing string creation, initialization, and print
    string test_string;
    test_string = "Test string out";
    cout << test_string << endl;

    //Testing use and creation of a simple method
    int ret = sum(1,2);
    cout << ret << endl;

    //Testing use, creation, and printing of a class
    Car newCar;
    newCar.make = "Mazda";
    newCar.model = "Mazda 3";
    newCar.year = 2020;

    cout << "My car's make is: " << newCar.make << endl;
    cout << "My car's model is: " << newCar.model << endl;
    cout << "my car's year is: " << newCar.year << endl;

    //Testing class method
    newCar.print();

    //Testing simple method
    newCar.incrementYear();

    cout << "New Year: " << newCar.year << endl;

    string test = "Blah";
    cout << test.length() << endl;
}

