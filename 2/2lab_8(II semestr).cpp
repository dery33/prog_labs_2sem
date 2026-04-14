#include<iostream>
using namespace std;

class swimmingPool{
    private:
        int length;
        int width;
        int depth;
    public:
    int setLength(int l){
        length = l;
        return length;
    }
    int setWidth(int w){
        width = w;
        return width;
    }
    int setDepth(int d){
        depth = d;
        return depth;
    }
    int getVolume_liters(){
        return length * width * depth*1000;
    }
};

int main(){
    swimmingPool pool;
    pool.setLength(10); 
    pool.setWidth(5);
    pool.setDepth(2);
    cout << "Volume of the swimming pool in liters: " << pool.getVolume_liters() << " liters" << endl;
    return 0;
}
