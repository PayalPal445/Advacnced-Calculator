## 🧮 Advanced Calculator (C++ Project)

This is a console-based calculator written in C++ that performs basic arithmetic, scientific, and advanced mathematical operations.
It uses standard math functions from <cmath> and supports factorial calculation with custom logic.

## 📌 Features

The calculator supports the following operations:

➕ Addition

➖ Subtraction

✖️ Multiplication

➗ Division (with zero-check)

#3 🔼 Power (x^y)

√ Square Root

% Modulus (integer only)

📐 Sine (sin x) (degrees)

📐 Cosine (cos x) (degrees)

📐 Tangent (tan x) (degrees)

## 🔢 Logarithm base 10 (log x)

## 🔢 Natural log (ln x)

❗ Factorial (x!) (for non-negative integers)

🚪 Exit

## 🛠️ Technologies Used

## Language: C++

## Libraries:

<iostream> → Input/Output

<cmath> → Math functions (sqrt, pow, sin, cos, tan, log, log10)

<iomanip> → Output formatting

Concepts Used:

Functions

Loops

Switch-case

Input validation

## 🚀 Getting Started
1. Save Code
```bash
Save the file as advanced_calculator.cpp.
```
2. Compile
```bash
Using g++:

g++ advanced_calculator.cpp -o advanced_calculator
```
3. Run

On Linux/Mac:
```bash
./advanced_calculator
```

On Windows:
```bash
advanced_calculator.exe
```
🎯 Example Usage
✅ Input:
============ADVANCED CALCULATOR============
1. Addition ( + )
2. Subtraction ( - )
3. Multiplication ( * )
4. Division ( / )
...
Select choice (1-14): 1
Enter two numbers: 25 15

📊 Output:
Result = 40.0000

📂 File Structure
```bash
advanced_calculator.cpp   # Main C++ source code
README.md                 # Documentation
```

## 📝 Notes

Trigonometric functions use degrees (converted internally to radians).

Division by zero is handled with an error message.

Factorial works for non-negative integers only.

Results are formatted to 4 decimal places using <iomanip>.

## 📌 Future Improvements

Add exponential (e^x) and inverse trigonometric functions.

Implement history of calculations.

Add matrix operations (determinant, inverse, multiplication).

Create a GUI-based calculator for better user experience.

👨‍💻 Author

Developed as a C++ project to practice mathematical operations, functions, and input validation.
