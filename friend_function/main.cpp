#include<bits/stdc++.h>
using namespace std;

class Box {
    private:
        double length, width, height;
    public:
        Box(double l, double w, double h) : length(l), width(w), height(h) {};
        friend double calVolume(Box b);
};
double calVolume(Box box) {
    return box.length * box.width * box.height;
}


int main() {
    Box box(4, 6, 8);
    cout << "Volume of the box is: " << calVolume(box) << endl;
    return 0; 
}