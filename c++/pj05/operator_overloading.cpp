#include <iostream>

using namespace std;

// complex structure to represent complex numbers
struct complex {
    int real; // real part of the complex number
    int imag; // imaginary part of the complex number
};

// overloading the + operator for adding complex numbers
complex operator+(complex cplx1, complex cplx2) {
    complex result = {
        .real = cplx1.real + cplx2.real,
        .imag = cplx1.imag + cplx2.imag
    };
    return result;
}

// overloading the - operator for subtracting complex numbers
complex operator-(complex cplx1, complex cplx2) {
    complex result = {
        .real = cplx1.real - cplx2.real,
        .imag = cplx1.imag - cplx2.imag
    };
    return result;
}

// overloading the * operator for multiplying complex numbers
complex operator*(complex cplx1, complex cplx2) {
    complex result = {
        .real = cplx1.real * cplx2.real + -cplx1.imag * cplx2.imag,
        .imag = cplx1.real * cplx2.imag + cplx1.imag * cplx2.real
    };
    return result;
}

// overloading the << operator for outputting complex numbers
ostream& operator<<(ostream& out, complex cplx) {
    if(cplx.real != 0 && cplx.imag != 0){
        if(cplx.imag > 0)
            out << cplx.real << " + " << cplx.imag << 'i';
        else
            out << cplx.real << " - " << -cplx.imag << 'i';
    }else if(cplx.real != 0 && cplx.imag == 0)
        out << cplx.real;
    else if(cplx.real == 0 && cplx.imag != 0)
        out << cplx.imag << 'i';
    return out;
}

int main() {
    // initialization of two complex numbers
    complex cplx1 = { .real = 10, .imag = -1 };
    complex cplx2 = { .real = 4, .imag = 0 };

    // performing operations on complex numbers
    cout << cplx1 + cplx2 << endl;
    cout << cplx1 - cplx2 << endl;
    cout << cplx1 * cplx2 << endl;

    return 0;
}
