### 1. Lecture Notes on Arrays and Iteration in C

#### Introduction to Arrays

An array is a collection of elements, all of the same type, stored in a contiguous block of memory. Arrays allow you to store multiple values in a single variable, which can be very useful for handling lists of data.

**Syntax:**

```c
type arrayName[arraySize];
```

- `type`: The data type of the elements in the array (e.g., `int`, `float`, `char`).
- `arrayName`: The name of the array.
- `arraySize`: The number of elements the array can hold.

**Example:**

```c
int numbers[5];
```

This declares an array named `numbers` that can hold 5 integers.

#### Initializing Arrays

You can initialize an array when you declare it, either by specifying individual elements or by using an initializer list.

**Example:**

```c
int numbers[5] = {1, 2, 3, 4, 5};
```

#### Accessing Array Elements

Array elements are accessed using their index, which starts at 0.

**Example:**

```c
int firstNumber = numbers[0];  // Accesses the first element (1)
int secondNumber = numbers[1]; // Accesses the second element (2)
```

#### Iterating Through Arrays

To perform operations on each element of an array, you can use loops. The most common loop for this purpose is the `for` loop.

**Example:**

```c
#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
```

This loop iterates over each element in the `numbers` array and prints it.

#### Common Array Operations

- **Finding the Length of an Array:**

  ```c
  int length = sizeof(numbers) / sizeof(numbers[0]);
  ```

- **Summing Elements:**

  ```c
  int sum = 0;
  for(int i = 0; i < 5; i++) {
      sum += numbers[i];
  }
  ```

- **Finding the Maximum Value:**

  ```c
  int max = numbers[0];
  for(int i = 1; i < 5; i++) {
      if(numbers[i] > max) {
          max = numbers[i];
      }
  }
  ```
