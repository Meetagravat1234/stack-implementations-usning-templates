# C++ Project – 2

## Implement Stack Application Using Templates

A menu-driven **Stack Application in C++** implemented using **Class Templates**. The project demonstrates how a single generic Stack class can handle multiple data types such as `int`, `char`, `float`, `double`, and `string`.

---

## 📌 Project Overview

This project implements a fixed-size Stack using a **C++ class template**.

Instead of creating separate stack classes for different data types, a single template-based `Stack<Type>` class is used. This allows the same implementation to work with:

* Integer (`int`)
* Character (`char`)
* Floating-point (`float`)
* Double (`double`)
* String (`string`)

The application is completely **menu-driven** and allows the user to perform stack operations interactively.

---

## 🎯 Project Objective

The main objectives of this project are:

* Understand and implement **C++ class templates**.
* Build a generic Stack data structure.
* Perform `Push`, `Pop`, and `Display` operations.
* Handle Stack Overflow and Stack Underflow.
* Maintain the `TOP` position correctly.
* Store separate stack data for each supported data type.
* Implement persistent stacks when returning to the main menu.
* Handle invalid menu inputs safely.

---

## ✨ Features

### 1. Generic Stack Using Templates

The Stack is implemented using:

```cpp
template <class Type>
class Stack
```

The same class can therefore create stacks such as:

```cpp
Stack<int>
Stack<char>
Stack<float>
Stack<double>
Stack<string>
```

---

### 2. Fixed Stack Capacity

Each stack can contain a maximum of **5 elements**.

```cpp
#define MAX_SIZE 5
```

If the user attempts to push an element when the stack already contains 5 elements, the program displays:

```text
Stack Overflow.
```

---

### 3. Push Operation

The Push operation:

1. Checks whether the stack is full.
2. Displays `Stack Overflow` if the stack is full.
3. Otherwise, increments `TOP`.
4. Stores the new element at the top position.

Example:

```text
Enter element: 25
Element pushed successfully.
```

---

### 4. Pop Operation

The Pop operation:

1. Checks whether the stack is empty.
2. Displays `Stack Underflow` if there are no elements.
3. Otherwise, removes the top element.
4. Decrements `TOP`.

Example:

```text
Popped element: 25
```

---

### 5. Display Stack

The stack elements are displayed from **TOP to bottom**, following the **LIFO (Last In, First Out)** principle.

Example:

```text
Stack:
30
20
10
```

If the stack has no elements:

```text
Stack is Empty.
```

---

## 🖥️ Main Menu

The program repeatedly displays:

```text
==============================
        MAIN MENU
==============================

1. Integer Stack
2. Character Stack
3. Float Stack
4. Double Stack
5. String Stack
6. Exit

Enter your choice:
```

The program terminates when the user selects:

```text
6. Exit
```

---

## 📂 Stack Submenu

After selecting a data type, the following submenu is displayed:

```text
==============================
       STACK MENU
==============================

1. Push
2. Pop
3. Display Stack
4. Main Menu

Enter your choice:
```

### Options

| Option | Operation           |
| ------ | ------------------- |
| 1      | Push an element     |
| 2      | Pop the top element |
| 3      | Display stack       |
| 4      | Return to Main Menu |

---

## 🔄 Stack Persistence

Each data type has its own stack.

For example, if the user creates an integer stack:

```text
Integer Stack:
10
20
30
```

and returns to the main menu, the elements remain stored.

If the user selects **Integer Stack** again, the program asks:

```text
Stack already exists.

1. Continue with old stack
2. Create new stack

Enter your choice:
```

### Continue with Old Stack

Selecting:

```text
1
```

keeps all previously stored elements.

### Create New Stack

Selecting:

```text
2
```

discards the previous stack and creates a new empty stack.

This behavior is maintained independently for every data type.

---

## ⚠️ Invalid Input Handling

The application includes invalid-choice protection.

For every menu:

* The user must enter a valid option.
* Invalid choices are counted consecutively.
* After a valid choice, the invalid counter is reset to `0`.
* The program allows a maximum of **3 consecutive invalid choices**.

Example:

```text
Invalid choice. Please enter a valid option.
Invalid choice. Please enter a valid option.
Invalid choice. Please enter a valid option.

Maximum invalid attempts reached.
Program terminated.
```

This prevents the program from continuing indefinitely with invalid input.

---

## 🧠 Stack Concept

The Stack follows the:

### LIFO Principle

**Last In, First Out**

For example:

```text
Push 10
Push 20
Push 30
```

Stack:

```text
TOP → 30
      20
      10
```

When `Pop()` is performed:

```text
30
```

is removed first.

The stack becomes:

```text
TOP → 20
      10
```

---

## 🏗️ Basic Stack Structure

Each Stack object contains:

```cpp
Type stack[MAX_SIZE];
int TOP;
```

Initially:

```cpp
TOP = -1;
```

### Empty Stack

```text
TOP = -1
```

### One Element

```text
TOP = 0
```

### Five Elements

```text
TOP = 4
```

### Full Condition

```cpp
TOP == MAX_SIZE - 1
```

### Empty Condition

```cpp
TOP == -1
```

---

## 🧩 Template Concept

A class template allows the Stack implementation to work with different data types.

For example:

```cpp
Stack<int> intStack;
```

creates an integer stack.

```cpp
Stack<char> charStack;
```

creates a character stack.

```cpp
Stack<float> floatStack;
```

creates a float stack.

```cpp
Stack<double> doubleStack;
```

creates a double stack.

```cpp
Stack<string> stringStack;
```

creates a string stack.

The Stack class itself does **not need to be duplicated** for each type.

---

## 📊 Supported Data Types

| Main Menu | Data Type | Template Object |
| --------: | --------- | --------------- |
|         1 | `int`     | `Stack<int>`    |
|         2 | `char`    | `Stack<char>`   |
|         3 | `float`   | `Stack<float>`  |
|         4 | `double`  | `Stack<double>` |
|         5 | `string`  | `Stack<string>` |

---

## 🔧 Technologies Used

* **Language:** C++
* **Concept:** Object-Oriented Programming
* **Generic Programming:** Class Templates
* **Data Structure:** Stack
* **Memory:** Fixed-size array
* **Input/Output:** `iostream`
* **String Handling:** `std::string`

---

## 📁 Suggested Project Structure

```text
Stack-Application-Using-Templates/
│
├── main.cpp
└── README.md
```

---

## 🚀 How to Compile and Run

### Using g++

Compile:

```bash
g++ main.cpp -o stack_app
```

Run on Linux/macOS:

```bash
./stack_app
```

On Windows:

```bash
stack_app.exe
```

---

## 📝 Example Program Flow

```text
MAIN MENU

1. Integer Stack
2. Character Stack
3. Float Stack
4. Double Stack
5. String Stack
6. Exit

Enter your choice: 1
```

Integer stack submenu:

```text
1. Push
2. Pop
3. Display Stack
4. Main Menu

Enter your choice: 1
Enter element: 10
```

Push another element:

```text
Enter element: 20
```

Display:

```text
Stack:
20
10
```

Pop:

```text
Popped element: 20
```

Return to main menu:

```text
Enter your choice: 4
```

The integer stack remains available when selected again.

---

## 🧪 Test Cases

### Test Case 1 – Push

```text
Stack: Empty
Push: 10

Expected:
10
```

### Test Case 2 – Pop

```text
Stack:
30
20
10

Pop

Expected:
30 is removed
```

### Test Case 3 – Stack Overflow

```text
Push 10
Push 20
Push 30
Push 40
Push 50
Push 60
```

Expected:

```text
Stack Overflow.
```

### Test Case 4 – Stack Underflow

```text
Stack: Empty
Pop
```

Expected:

```text
Stack Underflow.
```

### Test Case 5 – Empty Stack Display

```text
Display Stack
```

Expected:

```text
Stack is Empty.
```

### Test Case 6 – Persistent Stack

```text
Integer Stack
Push 10
Push 20
Return to Main Menu
Integer Stack
```

Expected:

```text
Continue with old stack
```

The stack should still contain:

```text
20
10
```

---

## ⏱️ Complexity

Since the stack has a fixed maximum size of 5:

| Operation    | Time Complexity |
| ------------ | --------------: |
| Push         |          `O(1)` |
| Pop          |          `O(1)` |
| Display      |          `O(n)` |
| Create Stack |          `O(1)` |

Where `n` is the number of elements currently in the stack.

---

## 🎓 Concepts Demonstrated

This project demonstrates several important C++ concepts:

* Class Templates
* Generic Programming
* Classes and Objects
* Arrays
* Stack Data Structure
* LIFO Principle
* Constructors
* Encapsulation
* Conditional Statements
* Loops
* Functions
* Menu-Driven Programming
* Input Validation
* Overflow and Underflow Handling
* Multiple Objects of the Same Template Class

---

## 🔮 Possible Improvements

The project can be extended by:

* Allowing a user-defined stack size.
* Implementing dynamic stack allocation.
* Adding `Peek()` operation.
* Adding `isEmpty()` and `isFull()` functions.
* Implementing stack using a linked list.
* Adding exception handling.
* Adding file-based stack persistence.
* Creating a graphical user interface.

---

## 👨‍💻 Author

**Agravat Meet**

### C++ Project – 2

**Project:** Implement Stack Application Using Templates

---

## 📜 License

This project is created for **educational and academic purposes** and can be freely used for learning and experimentation.
