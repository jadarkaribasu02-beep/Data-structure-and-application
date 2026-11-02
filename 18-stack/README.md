# Stack – Data Structures and Applications

This folder contains my Stack lab programs and additional practice programs written in C.

I use this repository to understand Stack concepts, improve my problem-solving skills, and prepare for practical examinations.

## 📚 What is Stack?

A Stack is a linear data structure that follows the **LIFO (Last In, First Out)** principle.

The element inserted last will be removed first.

Example: A stack of plates. The last plate placed on top is the first one removed.

## ⚙️ Basic Operations

| Operation | Description |
|---|---|
| Push | Insert an element into the stack |
| Pop | Remove the top element |
| Peek | Display the top element |
| Display | Display all stack elements |

## 💻 Important C Variables

```c
#define MAX 20

int stack[MAX];
int top = -1;
```

- `MAX` – Maximum stack capacity.
- `stack[MAX]` – Array used to store elements.
- `top` – Tracks the top position.
- `top = -1` – Indicates that the stack is empty.

## 🧠 Important Conditions to Remember

### 1. Stack Overflow

Occurs when we try to insert an element into a full stack.

```c
if (top == MAX - 1)
{
    printf("STACK OVERFLOW");
    return;
}
```

### 2. Stack Underflow

Occurs when we try to delete an element from an empty stack.

```c
if (top == -1)
{
    printf("STACK UNDERFLOW");
    return;
}
```

### 3. Push Operation

```c
stack[++top] = x;
```

Increases `top` first and then inserts the element.

### 4. Pop Operation

```c
x = stack[top--];
```

Retrieves the top element and then decreases `top`.

### 5. Peek Operation

```c
printf("%d", stack[top]);
```

Displays the top element without removing it. Always check that the stack is not empty first.

## ⭐ Important Points for Lab Exams

- Stack follows LIFO.
- Insertion and deletion happen at the TOP.
- Initial value of `top` is `-1`.
- Stack overflow means the stack is full.
- Stack underflow means the stack is empty.
- Push increases `top`.
- Pop decreases `top`.
- `top == MAX - 1` means full stack.
- `top == -1` means empty stack.

## ⏱️ Time Complexity

| Operation | Complexity |
|---|---|
| Push | O(1) |
| Pop | O(1) |
| Peek | O(1) |
| Display | O(n) |

## 📝 Lab Programs

- [ ] Stack implementation using arrays
- [ ] Push and Pop operations
- [ ] Display stack elements
- [ ] Stack overflow and underflow
- [ ] Additional Stack practice programs

## 🚀 Additional Practice

- [ ] Reverse a string using Stack
- [ ] Check balanced parentheses
- [ ] Decimal to binary conversion using Stack
- [ ] Reverse elements of an array using Stack
- [ ] Infix to postfix conversion

## 🎯 Learning Goal

Understand Stack implementation using arrays, write programs without depending on notes, and improve my understanding of Data Structures using C.

**Language:** C  
**Topic:** Data Structures and Applications