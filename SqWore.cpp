#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;   
    int denominator; 

public:
   
    Fraction(int num = 0, int denom = 1) {
        if (denom == 0) {
            throw invalid_argument("No");
        }
        numerator = num;
        denominator = denom;
    }

    
    void display() const {
        cout << numerator << "/" << denominator << endl;
    }

    
    Fraction operator+(const Fraction& other) const {
        return Fraction(
            numerator * other.denominator + other.numerator * denominator,
            denominator * other.denominator
        );
    }

    
    Fraction operator-(const Fraction& other) const {
        return Fraction(
            numerator * other.denominator - other.numerator * denominator,
            denominator * other.denominator
        );
    }

   
    Fraction operator*(const Fraction& other) const {
        return Fraction(
            numerator * other.numerator,
            denominator * other.denominator
        );
    }

   
    Fraction operator/(const Fraction& other) const {
    
        return Fraction(
            numerator * other.denominator,
            denominator * other.numerator
        );
    }
};


//=================================================================

class Complex {
private:
    double real;
    double imag;

public:
    // Конструктор
    Complex(double real = 0, double imag = 0)
        : real(real), imag(imag) {}

    // Перевантаження оператора +
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

   
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

 
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

   
    Complex operator/(const Complex& other) const {
        double denominator = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag) / denominator,
            (imag * other.real - real * other.imag) / denominator);
    }

    
};


int main() {
    
}
