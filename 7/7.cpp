#include <iostream>
using namespace std;
class B1{
    protected:
        string a;
    public:
        B1(){
            a = "null";
        }
        B1(string a){
            this->a = a;
        }
        void show_B1(){
            cout << "a: " << a << endl;
        }
};
class B2{
    protected:
        string b;
    public:
        B2(){
            b = "null";
        }
        B2(string b){
            this->b = b;
        }
        void show_B2(){
            cout << "b: " << b << endl;
        }
};  
class D1: public B1, protected B2{
    protected:
        string c;
    public:
        D1(): B1(), B2(){
            c = "null";
        }
        D1(string a, string b, string c): B1(a), B2(b){
            this->c = c;
        }
        void show_D1(){
            show_B1();
            show_B2();
            cout << "c: " << c << endl;
        }
};
class D2: public D1{
    protected:
        string d;
    
    public:
        D2(): D1(){
            d = "null";
        }
        D2(string a, string b, string c, string d): D1(a, b, c){
            this->d = d;
        }
        void show_D2(){
            show_D1();
            cout << "d: " << d << endl;
        }
};
class D3: private D2{
    protected:
        string e;
    
    public:
        D3(): D2(){
            e = "null";
        }
        D3(string a, string b, string c, string e): D2(a, b, c, d){
            this->e = e;
        }
        void show_D3(){
            show_D2();
            cout << "e: " << e << endl;
        }
};
class D4: public D2{
    protected:
        string f;
    
    public:
        D4(): D2(){
            f = "null";
        }
        D4(string a, string b, string c, string d, string f): D2(a, b, c, d){
            this->f = f;
        }
        void show_D4(){
            show_D2();
            cout << "f: " << f << endl;
        }
};

int main(){
    D3 B;
    B.show_D3();
    return 0;
}
