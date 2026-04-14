#include <iostream>
using namespace std;

class Item{
  private:
    string name;
    double price;
  public:
    Item(){
      name = " ";
      price = 0;
      cout<<"constructor called with default values(' ', 0)" << endl;
      }
      Item(string n,double prc){
        name = n;
        price = prc;
        cout<<"constructor called with parameters" << endl;
        }
    void setname(string n){
      name = n;
    }
    void setprice(double prc){
      price = prc;
    }
    string getname(){
      return name;
    }
    double getprice(){
      return price;
    }
    void displayInfo(){
      std::cout << getname() <<" "<< getprice() << std::endl;
    }
};

class Electronics : public Item{
  private:
    int warrantyPeriod;
    
  public:
    Electronics(string n, int pric, int warrantyPrd) : Item(n, pric) {
      warrantyPeriod= warrantyPrd;
    }
    void set_warrantyPeriod(int warrantyPrd){
      warrantyPeriod = warrantyPrd;
    }
    int get_warrantyPeriod(){
      return warrantyPeriod;
    }

    void displayInfo(){
      std::cout << getname() <<" "<< getprice() <<" " << get_warrantyPeriod()<<std::endl;
    }
};

int main() 
{
  Electronics phone1("idk",5000,30);
  phone1.displayInfo();

  phone1.set_warrantyPeriod(60);
  phone1.displayInfo();

  Electronics phone2("another phone", 6000, 45);
  phone2.displayInfo();

  phone2.setname("updated phone");
  phone2.setprice(7000); 
  phone2.displayInfo();


  return 0;
}
