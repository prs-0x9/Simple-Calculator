Simple Calculator

A command-line calculator application written in C++ that performs basic arithmetic operations.

Features
- Basic arithmetic operations (addition, subtraction, multiplication, division)
- Input validation for operations
- Error handling for division by zero
- Formatted output display

Prerequisites
C++ compiler (GCC, Clang, MSVC, etc.)
Basic knowledge of command-line operations

Installation

1. Clone the repository

    git clone https://github.com/prs-0x9/Simple-Calculator.git

2. Navigate to the project directory

    cd simple-calculator

3. Compile the program

   g++ simplecalc.cpp -o calculator


Usage

1. Run the compiled program

   ./calculator

2. Follow the on-screen prompts:
   - Enter your first number
   - Choose an operation (+, -, *, /)
   - Enter your second number
   - View the result


Error Handling

- The program validates operation input and will prompt for re-entry if an invalid operation is provided
- Division by zero is caught and handled with an appropriate error message
- Invalid numeric inputs will cause the program to fail (future improvement opportunity)

Project Structure

simple-calculator/
│
├── simplecalc.cpp        # Main source code file
├── README.md             # This file

Development Timeline

- Started: December 19, 2023
- Completed: December 26, 2023

Future Improvements

- Support for multiple operations in sequence
- Memory function for storing previous results
- Scientific calculator features
- Better handling of invalid numeric inputs
- Support for parentheses and order of operations
- Command-line arguments support

Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

Author

- Paris Richards

Acknowledgments

- Created as a learning project for C++ programming

Contact

- GitHub: [@prs-0x9](https://github.com/prs-0x9)
- LinkedIn: [Paris Richards](https://www.linkedin.com/in/parisrichards974/)
