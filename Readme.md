# Vector Class Project

This project implements a simple `Vector` class in C++ that provides basic array manipulation functionalities. The `Vector` class allows you to add elements, remove elements, search for elements, and count empty slots in a fixed-size array.

## Files

- `Vector/Vector.h`: Header file containing the `Vector` class definition.
- `Vector/Vector.cpp`: Implementation file for the `Vector` class.
- `main.cpp`: Main file demonstrating the usage of the `Vector` class.

## Vector Class

The `Vector` class provides the following public member functions:

- `Vector()`: Constructor to initialize the array.
- `~Vector()`: Destructor.
- `int ValueAt(int index)`: Returns the value at the specified index.
- `bool PushBack(int value)`: Adds a value to the last empty spot of the array. Returns `false` if the array is full, `true` otherwise.
- `int CountEmpty()`: Returns the number of empty slots in the array.
- `bool Search(int value)`: Searches for a value in the array. Returns `true` if the value is found, `false` otherwise.
- `bool Remove(int index)`: Removes the value at the specified index, shifting subsequent elements to the left. Returns `false` if the index is out of range, `true` otherwise.

## Setup and Run

To set up and run this project using Visual Studio Code, follow these steps:

### 1. Prerequisites

- Visual Studio Code installed on your machine.
- g++ (GNU Compiler Collection) installed.

### 2. Install C++ extensions in Visual Studio Code

- Go to the Extensions view by clicking the Extensions icon in the Activity Bar on the side of the window or by pressing Ctrl+Shift+X.
- Search for "C++" and install it.

### 3. Build the Project

- Open the terminal in VS Code by selecting View > Terminal or pressing Ctrl+ `.
- Run the following command to compile the code and create an executable:
```g++ -g main.cpp Vector/Vector.cpp -o main.exe```

### 4. Run the executable

- Once the build is successful, run the executable by typing ```./main.exe``` in the terminal and pressing Enter.