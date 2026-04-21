#include <iostream>
using namespace std;
class author{
    private:    
        string name;
        string surname;
        string email;
        string work_address;
    public:
        author(){
            name = " ";
            surname = " ";
            email = " ";
            work_address = " ";
        };
        author(string n, string s, string e, string wa){
            name = n;
            surname = s;
            email = e;
            work_address = wa;
        };
        string get_name(){return name;};
        string get_surname(){return surname;};
        string get_email(){return email;};
        string get_work_address(){return work_address;};

};
class publication{
    private:
        author* a;
        string title; 
        string publication_date;
        string number_views;
        string access_status;

    public:
        publication(){
            title = " ";
            publication_date = " ";
            number_views = " ";
            access_status = " ";
            a = nullptr;
        };      
        publication(string t, string pd, string nv, string as){
            title = t;
            publication_date = pd;
            number_views = nv;
            access_status = as;
            a = nullptr;
        };
        publication(string t, string pd, string nv, string as, author &auth){
            title = t;
            publication_date = pd;
            number_views = nv;
            access_status = as;
            a = &auth;
        };
        void print_info(){
            cout << "Title: " << title << endl;
            cout << "Publication Date: " << publication_date << endl;
            cout << "Number of Views: " << number_views << endl;
            cout << "Access Status: " << access_status << endl;
            if (a != nullptr) {
                cout << "Author Name: " << a->get_name() << endl;
                cout << "Author Surname: " << a->get_surname() << endl;
                cout << "Author Email: " << a->get_email() << endl;
                cout << "Author Work Address: " << a->get_work_address() << endl;

            } else {
                cout << "Author: Not specified" << endl;
            }};
        void change_access_status(string new_status){
            access_status = new_status;
        };
        void change_number_views(string new_views){
            number_views = new_views;
        };
        string get_title(){return title;};
        string get_date_of_publ(){return publication_date;};
        string get_numb_views(){return number_views;};
        string get_access_status(){return access_status;};
};

int main (){
    author a1("John", "Doe", "john.doe@example.com", "123 Main St");
    publication p1("Sample Title", "2023-01-01", "100", "Public", a1);
    p1.print_info();


    
    p1.change_access_status("Private");
    p1.change_number_views("150");
    p1.print_info();

    return 0;
};
