#include <iostream>
using namespace std;

class Workstation {
public:
    virtual bool processMaterial(const string& material) = 0;
    virtual ~Workstation() {}
};


class Furnace : public Workstation {
public:
    bool processMaterial(const string& material) override {
        cout << material << " -> smelting" << endl;
        return true;
    }
    ~Furnace() {
        cout << "Furnace destroyed" << endl;
    }
};


class Anvil : public Workstation {
public:
    bool processMaterial(const string& material) override {
        cout << material << " -> forging " << endl;
        return true;
    }
    ~Anvil() {
        cout << "Anvil destroyed" << endl;
    }
};


class AlchemyStand : public Workstation {
public:
    void explode() {
        cout << "BOOM!" << endl;
    }
    bool processMaterial(const string& material) override {
        if (material == "coal" or material == "gold") {
            cout << material << " -> failed" << endl;
            explode();
            return false;
        }
        else {
            cout << material << " -> Potions " << endl;
            return true;
        }
    }
    ~AlchemyStand() {
        cout << "Alchemy Stand destroyed" << endl;
    }


};

int main() {

    Workstation* furnace = new Furnace();
    Workstation* anvil = new Anvil();
    Workstation* alchemy = new AlchemyStand();

    cout << "------ Gold ------" << endl;

    bool result;

    result = furnace->processMaterial("gold");

    result = anvil->processMaterial("gold");

    result = alchemy->processMaterial("gold");
    
    cout << "\n------ Coal ------" << endl;

    result = furnace->processMaterial("coal");

    result = anvil->processMaterial("coal");

    result = alchemy->processMaterial("coal");
    

    delete furnace;
    delete anvil;
    delete alchemy;

    return 0;
}