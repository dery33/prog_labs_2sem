#include <iostream>
#include <vector>
#include "9lab.h"
using namespace std;

int main(){
    
    int N;
    cout << "Enter number of employees: ";
    cin >> N;
    
    vector<Salary> BOOKKEEPER(N);

    for (int i = 0; i < N; i++) {
        cout << "\nEmployee # " << i + 1 << endl;
        BOOKKEEPER[i].input();
        BOOKKEEPER[i].calculate();
        cout << "------------------------\n";
    }

   
    cout << "\nEmployees who worked less than 15 days:\n";

    for (int i = 0; i < N; i++) {
         if (BOOKKEEPER[i].GetWorkDays() < 15) {
            BOOKKEEPER[i].output();
            cout << "------------------------\n";
        }
    }


    return 0;
}

