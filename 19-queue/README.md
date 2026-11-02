# Queue – Data Structures and Applications

This folder contains my Queue lab programs and additional practice programs written in C.

My goal is to understand Queue operations, Circular Queue implementation, and their real-world applications.

## 📚 What is Queue?

A Queue is a linear data structure that follows the **FIFO (First In, First Out)** principle.

The element inserted first will be removed first.

Example: People standing in a ticket booking line. The person who comes first gets served first.

## ⚙️ Types of Queue

1. Linear Queue
2. Circular Queue
3. Priority Queue
4. Double Ended Queue (Deque)

## ⚙️ Basic Operations

| Operation | Description |
|---|---|
| Enqueue | Insert an element at the rear |
| Dequeue | Remove an element from the front |
| Peek | Display the front element |
| Display | Display queue elements |

## 💻 Important C Variables

```c
#define MAX 20

int queue[MAX];
int front = -1;
int rear = -1;
```

For a Circular Queue, another common initialization is:

```c
int front = 0;
int rear = -1;
int count = 0;
```

- `MAX` – Maximum queue capacity.
- `queue[MAX]` – Array used to store elements.
- `front` – Points to the first element.
- `rear` – Points to the last inserted element.
- `count` – Stores the number of elements.

## 🧠 Important Conditions to Remember

### 1. Queue Overflow

Occurs when we try to insert an element into a full queue.

For Circular Queue:

```c
if (count == MAX)
{
    printf("QUEUE OVERFLOW");
    return;
}
```

### 2. Queue Underflow

Occurs when we try to delete an element from an empty queue.

```c
if (count == 0)
{
    printf("QUEUE UNDERFLOW");
    return;
}
```

### 3. Enqueue Operation

```c
rear = (rear + 1) % MAX;
queue[rear] = x;
count++;
```

Moves rear to the next position, inserts an element, and increases the count.

### 4. Dequeue Operation

```c
x = queue[front];
front = (front + 1) % MAX;
count--;
```

Removes the front element, moves front to the next position, and decreases the count.

### 5. Circular Queue Formula

```c
(rear + 1) % MAX
```

Moves rear to the next position. If it reaches the last index, it returns to index 0.

Similarly:

```c
(front + 1) % MAX
```

Moves front to the next position with circular movement.

## ⭐ Important Points for Lab Exams

- Queue follows FIFO.
- Insertion happens at REAR.
- Deletion happens at FRONT.
- `front` points to the first element.
- `rear` points to the last element.
- Overflow means the queue is full.
- Underflow means the queue is empty.
- Enqueue increases the count.
- Dequeue decreases the count.
- Circular Queue reuses empty spaces.
- Modulus (`%`) helps in circular movement.

## 🔄 Linear Queue vs Circular Queue

| Linear Queue | Circular Queue |
|---|---|
| Straight movement | Circular movement |
| May waste empty spaces | Reuses empty spaces |
| No wrap-around | Uses modulus operator |
| Simple implementation | Efficient space utilization |

## ⏱️ Time Complexity

| Operation | Complexity |
|---|---|
| Enqueue | O(1) |
| Dequeue | O(1) |
| Peek | O(1) |
| Display | O(n) |

## 📝 Lab Programs

- [ ] Linear Queue using arrays
- [ ] Enqueue and Dequeue operations
- [ ] Display Queue elements
- [ ] Circular Queue implementation
- [ ] Circular Queue using structures
- [ ] Print Job Management System

## 🚀 Additional Practice

- [ ] Queue implementation using Linked List
- [ ] Priority Queue
- [ ] Double Ended Queue (Deque)
- [ ] Reverse a Queue
- [ ] Generate binary numbers using Queue
- [ ] Implement a real-world job scheduling system

## 🎯 Learning Goal

Understand Queue implementation, master FIFO operations, and learn how Circular Queue solves the space wastage problem in Linear Queue.

**Language:** C  
**Topic:** Data Structures and Applications