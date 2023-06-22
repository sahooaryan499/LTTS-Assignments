 /*Write a C program that uses functions to perform the following operations: 
     i) Reading a complex number 
     ii) Writing a complex number 
     iii) Addition of two complex numbers 
     iv) Multiplication of two complex numbers 
  (Note: represent complex number using a structure.)*/

#include <stdio.h>

// Structure to represent a complex number
typedef struct {
    float real;
    float imaginary;
} Complex;

// Function to read a complex number from the user
Complex readComplexNumber() {
    Complex num;
    printf("Enter the real part: ");
    scanf("%f", &num.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &num.imaginary);
    return num;
}

// Function to write a complex number
void writeComplexNumber(Complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.real, num.imaginary);
}

// Function to add two complex numbers
Complex addComplexNumbers(Complex num1, Complex num2) {
    Complex sum;
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    return sum;
}

// Function to multiply two complex numbers
Complex multiplyComplexNumbers(Complex num1, Complex num2) {
    Complex product;
    product.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    product.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);
    return product;
}

int main() {
    Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    num1 = readComplexNumber();

    printf("Enter the second complex number:\n");
    num2 = readComplexNumber();

    printf("\n");

    printf("First complex number:\n");
    writeComplexNumber(num1);

    printf("Second complex number:\n");
    writeComplexNumber(num2);

    sum = addComplexNumbers(num1, num2);
    printf("Sum of the complex numbers:\n");
    writeComplexNumber(sum);

    product = multiplyComplexNumbers(num1, num2);
    printf("Product of the complex numbers:\n");
    writeComplexNumber(product);

    return 0;
}
