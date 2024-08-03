# Calculator Application

## Simple Command-Line Calculator

Welcome to the Calculator Application repository! This is a simple command-line calculator that allows users to perform basic arithmetic operations and exponentiation.

### What This Project Does

This Calculator Application is designed to provide a straightforward interface for performing basic mathematical operations. Users can input two numbers and select an operator to perform addition, subtraction, multiplication, division, or exponentiation. The application runs continuously until the user decides to quit.

![Calculator Demo](demo.gif)

## Installation and Usage Instructions (for End-Users)

### Prerequisites

To compile and run this application, you need a C++ compiler installed on your machine. The GNU Compiler Collection (GCC) is commonly used.

### Installation

1. Clone the repository:

    ```bash
    git clone https://github.com/yourusername/calculator-app.git
    ```

2. Navigate to the project directory:

    ```bash
    cd calculator-app
    ```

3. Compile the source code:

    ```bash
    g++ -o calculator calculator.cpp
    ```

### Usage

To run the compiled program, use the following command:

```bash
./calculator
```

1. The program will prompt you to enter the first number.
2. Enter the second number.
3. Enter the operator (`+`, `-`, `*`, `/`, `^`).

You can quit the application at any point by entering `q`.

#### Example

```bash
Calculator Application
Enter first number (or 'q' to quit): 5
Enter second number (or 'q' to quit): 3
Enter operator (+, -, *, /, ^ or 'q' to quit): +
5 + 3 = 8
```

## Installation and Usage Instructions (for Contributors)

### Getting Started

1. Fork the repository on GitHub.
2. Clone your forked repository:

    ```bash
    git clone https://github.com/yourusername/calculator-app.git
    ```

3. Navigate to the project directory:

    ```bash
    cd calculator-app
    ```

4. Create a new branch for your feature or bugfix:

    ```bash
    git checkout -b feature-name
    ```

5. Make your changes and commit them with descriptive messages:

    ```bash
    git commit -m "Add feature: description"
    ```

6. Push your branch to your forked repository:

    ```bash
    git push origin feature-name
    ```

7. Open a pull request on the original repository.

### Building from Source

To build the project from source, run the following command:

```bash
g++ -o calculator calculator.cpp
```

## Contributor Expectations

If you want to contribute to this project, please follow these guidelines:

- Create an issue in the issue queue before starting to work on a new feature or bugfix.
- Use descriptive commit messages and squash commits when appropriate.
- Follow the pull request template provided in the repository.
- Ensure your code adheres to the coding standards outlined in the repository.

## Known Issues

- Division by zero is handled, but the application could be improved with more robust error handling.
- The application currently does not support more complex mathematical functions or multiple operations in a single input.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgements

- [C++ Documentation](https://en.cppreference.com/w/)
- [GNU Compiler Collection (GCC)](https://gcc.gnu.org/)

Feel free to reach out with any questions or suggestions!

---

This README provides a clear, structured, and detailed guide for both end-users and contributors, following your guidelines to ensure it is comprehensive and easy to follow.
