#include<iostream>
using namespace std;

class ComplexNumbers {
    private:
    int real;
    int img;
    
    public:
    ComplexNumbers(int real, int img){
        this -> real = real;
        this -> img = img;
    }
    
    void print(){
        cout << this -> real << " + " << "i" << this -> img;
    }
    
    void plus(ComplexNumbers const & c){
        this -> real = this -> real + c.real;
        this -> img = this -> img + c.img;
    }
    
    void multiply(ComplexNumbers const & c){
        int x = (((this -> real) * c.real) - ((this -> img) * c.img));
        this -> img =  (((this -> real) * c.img) + ((this -> img) * c.real));
        this -> real = x;
    }
};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}