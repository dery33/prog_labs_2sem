#include<iostream>
using namespace std;    
class prePayment
{
    private:
        int price_month = 50;
        int price_half_year = 45;
        int price_year = 40;
        int amount;
        int months;
    public:
        prePayment(){
            amount = 0;
            months = 0;
            cout<<"constructor called with default values(0, 0)" << endl;
        }
        prePayment(double amount, int months){
            this->amount = amount;
            this->months = months;
            cout<<"constructor called with parameters" << endl;
        }
        void setAmount(double a){
            amount = a;
        }
        double getAmount(){
            return amount;
        }
        void setMonths(int m){
            months = m;
        }
        int getMonths(){
            return months;
        }
        int calculatePrice(){
            if (months >= 1 and months < 6){
                return price_month*amount;
            }
            else if (months >= 6 and months < 12){
                return price_half_year + price_month*(amount-6);
            }
            else if (months == 12){
                return price_year *amount;
            }
            else{
                cout << "Invalid amount of months. Please enter a value between 1 and 12." << endl;
                return 0;
            }
        }
        ~prePayment(){
            cout<<"destructor called" << endl;

        }
        
};
int main()
{
    prePayment prepay;//(10, 8);
    prepay.setAmount(10);
    prepay.setMonths(8);
    cout << "Total price for the subscription: " << prepay.calculatePrice() << " dollars" << endl;
    return 0;
}
