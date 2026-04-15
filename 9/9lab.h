
#include <iostream>
#include <string>
using namespace std;

class Salary{
    private:

        string name;
        string date;

        int work_days;
        int payment;

        double withTax;
        double toPay;

    public:

    Salary()
    {
        name="";
        date="";
        work_days=0;
        payment=0;

        withTax=0;
        toPay=0;
    }
  
    Salary(string n, string d, int w_d, double p){

        name = n;
        date = d;
        work_days = w_d;
        payment=p;

        withTax=0;
        toPay=0;
    }

    int GetWorkDays() {
        return work_days;
    }


    void input() {

        cout << "Enter name:";
        cin>> name;

        cout << "Enter birth date: ";
        cin >> date;

        cout << "Enter number of days worked:";
        cin >> work_days;

        cout << "Enter rate (per 24 days):";
        cin >> payment;
    }
        double calculate() {
        toPay = ((payment / 24.0) * work_days) * 0.8;
        return toPay;
    }
    void output() {
        cout << "Name: " << name<<" ";
        cout << "Birth date: " << date<<" ";
        cout << "Days worked: " << work_days<<" ";
        cout << "Amount calculated: " << (payment / 24.0) * work_days<<" ";
        cout << "To be paid: " << calculate() << endl;
    }
    ~Salary() {
    
    }
};