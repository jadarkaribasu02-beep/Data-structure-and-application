# 🧠 Coding Formulas & Logic — Complete Cheat Sheet

A practical reference for programming formulas, number logic, arrays, mathematics, Data Structures and Algorithms (DSA), and competitive programming.

**Goal:** Understand the logic behind common coding problems, from beginner to advanced level.

> Examples use C/C++-style syntax unless stated otherwise. Always check data types, array bounds, and integer overflow.

## 📚 Table of Contents

1. [Basic Operators](#1-basic-operators)
2. [Number and Digit Formulas](#2-number-and-digit-formulas)
3. [Mathematics](#3-mathematics)
4. [Conditions and Loops](#4-conditions-and-loops)
5. [Arrays](#5-arrays)
6. [Strings](#6-strings)
7. [Searching](#7-searching)
8. [Sorting](#8-sorting)
9. [Time and Space Complexity](#9-time-and-space-complexity)
10. [Recursion](#10-recursion)
11. [Bit Manipulation](#11-bit-manipulation)
12. [Hashing and Frequency](#12-hashing-and-frequency)
13. [Linked Lists](#13-linked-lists)
14. [Stacks and Queues](#14-stacks-and-queues)
15. [Trees and Binary Search Trees](#15-trees-and-binary-search-trees)
16. [Graphs](#16-graphs)
17. [Greedy Algorithms](#17-greedy-algorithms)
18. [Backtracking](#18-backtracking)
19. [Dynamic Programming](#19-dynamic-programming)
20. [Sliding Window and Two Pointers](#20-sliding-window-and-two-pointers)
21. [Prefix Sums and XOR](#21-prefix-sums-and-xor)
22. [Competitive Programming Patterns](#22-competitive-programming-patterns)
23. [Common Mistakes](#23-common-mistakes)

---

## 1. Basic Operators

| Operation | Example | Result |
|---|---|---:|
| Addition | `5 + 3` | 8 |
| Subtraction | `5 - 3` | 2 |
| Multiplication | `5 * 3` | 15 |
| Integer division | `7 / 2` | 3 |
| Remainder | `7 % 2` | 1 |
| Equality | `a == b` | True if equal |
| Not equal | `a != b` | True if different |

### Important formulas

| Purpose | Formula |
|---|---|
| Even number | `n % 2 == 0` |
| Odd number | `n % 2 != 0` |
| Divisible by `k` | `n % k == 0`, where `k != 0` |
| Absolute difference | `abs(a - b)` |
| Swap two values | `temp = a; a = b; b = temp;` |
| Minimum | `min(a, b)` in C++ |
| Maximum | `max(a, b)` in C++ |

In C, use `abs()` from `<stdlib.h>` for integer absolute values. In C++, use the appropriate overload from `<cstdlib>` or `<algorithm>`.

### Swap example

```c
int temp = a;
a = b;
b = temp;
```

This is the clearest general-purpose method. Avoid arithmetic swapping tricks because they can overflow.

---

## 2. Number and Digit Formulas

### 2.1 Extract the last digit

```c
digit = n % 10;
```

Example: `1234 % 10 = 4`.

### 2.2 Remove the last digit

```c
n = n / 10;
```

Example: `1234 / 10 = 123` using integer division.

### 2.3 Reverse a number

```c
int reverse = 0;

while (n != 0) {
    int digit = n % 10;
    reverse = reverse * 10 + digit;
    n = n / 10;
}
```

Example: `1234 → 4321`.

**Why multiply by 10?** It shifts the digits already in `reverse` one position left before adding the new digit.

### 2.4 Count digits

```c
int count = 0;

if (n == 0) {
    count = 1;
} else {
    while (n != 0) {
        count++;
        n /= 10;
    }
}
```

For negative numbers, count digits using the magnitude or otherwise handle the sign separately. Be careful with the minimum representable integer.

### 2.5 Sum of digits

```c
int sum = 0;

while (n != 0) {
    sum += n % 10;
    n /= 10;
}
```

Example: `1234 → 1 + 2 + 3 + 4 = 10`.

### 2.6 Product of digits

```c
int product = 1;

while (n != 0) {
    product *= n % 10;
    n /= 10;
}
```

Special-case `n == 0` if you want the digit product of zero to be zero.

### 2.7 Palindrome number

A number is a palindrome if it reads the same forward and backward.

Examples: `121`, `1331`, `7`.

**Logic:**
1. Save the original number.
2. Reverse the number.
3. Compare the reversed value with the original.

```c
if (original == reverse) {
    printf("Palindrome");
}
```

### 2.8 Armstrong number

A non-negative integer with `k` digits is an Armstrong number when the sum of every digit raised to power `k` equals the original number.

Example:

`153 = 1³ + 5³ + 3³ = 153`

Use an integer-power function or repeated multiplication carefully to avoid floating-point inaccuracies and overflow.

### 2.9 Perfect number

A positive integer is perfect if the sum of its positive proper divisors equals the number.

Example: `6 = 1 + 2 + 3`.

### 2.10 Strong number

A non-negative integer is a Strong number if the sum of the factorials of its digits equals the original number.

Example: `145 = 1! + 4! + 5! = 145`.

### 2.11 Power of a number

For non-negative integer exponent `b`:

\[
a^b = \underbrace{a \times a \times \cdots \times a}_{b\text{ times}}
\]

Remember: \(a^0 = 1\) for nonzero `a`.

### 2.12 Multiplication table

For a number `n`:

```c
for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", n, i, n * i);
}
```

---

## 3. Mathematics

### 3.1 Sum of the first `n` natural numbers

\[
S = \frac{n(n+1)}{2}
\]

Example: `n = 5`, sum = `15`.

### 3.2 Sum of the first `n` even positive numbers

\[
S = n(n+1)
\]

Example: first 4 positive even numbers: `2 + 4 + 6 + 8 = 20`.

### 3.3 Sum of the first `n` odd positive numbers

\[
S = n^2
\]

Example: `1 + 3 + 5 + 7 = 16 = 4²`.

### 3.4 Factorial

\[
n! = n(n-1)(n-2)\cdots 2\cdot1
\]

Special case: \(0! = 1\).

```c
long long fact = 1;

for (int i = 2; i <= n; i++) {
    fact *= i;
}
```

Factorials overflow even 64-bit integers for relatively small `n`. Validate `n` and the chosen type.

### 3.5 Prime number

A prime number is an integer greater than 1 with exactly two positive divisors: 1 and itself.

Test possible divisors up to \(\sqrt{n}\), or use `i <= n / i` to avoid overflow in `i * i`.

```c
int prime = 1;

if (n < 2) {
    prime = 0;
} else {
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }
}
```

### 3.6 Greatest Common Divisor (GCD)

The GCD is the greatest positive integer that divides both numbers.

**Euclidean algorithm:**

\[
\gcd(a,b)=\gcd(b,a\bmod b)
\]

Stop when `b == 0`; the remaining `a` is the GCD. For signed values, normalize the signs and handle zero cases.

### 3.7 Least Common Multiple (LCM)

For nonzero integers:

\[
\operatorname{lcm}(a,b)=\frac{|a|}{\gcd(a,b)}\times|b|
\]

The LCM is zero if either input is zero. Divide before multiplying to reduce overflow risk.

### 3.8 Arithmetic progression (AP)

Nth term:

\[
a_n = a_1 + (n-1)d
\]

Sum of first `n` terms:

\[
S_n = \frac{n}{2}(a_1+a_n)
\]

Here, `a1` is the first term and `d` is the common difference.

### 3.9 Geometric progression (GP)

Nth term:

\[
a_n = a_1r^{n-1}
\]

For `r != 1`, sum of first `n` terms:

\[
S_n = a_1\frac{r^n-1}{r-1}
\]

For `r == 1`, \(S_n = na_1\).

### 3.10 Permutations and combinations

Permutations of `r` items selected from `n` distinct items:

\[
P(n,r)=\frac{n!}{(n-r)!}
\]

Combinations:

\[
C(n,r)=\frac{n!}{r!(n-r)!}
\]

Permutation considers order; combination does not. Avoid computing huge factorials directly when using these in programs.

### 3.11 Fibonacci sequence

\[
F(0)=0,\quad F(1)=1
\]

\[
F(n)=F(n-1)+F(n-2)
\]

The iterative solution runs in \(O(n)\) time and can use \(O(1)\) extra space.

---

## 4. Conditions and Loops

### 4.1 Find the largest of three numbers

```c
if (a >= b && a >= c) {
    largest = a;
} else if (b >= c) {
    largest = b;
} else {
    largest = c;
}
```

### 4.2 Sum in a loop

```c
int sum = 0;

for (int i = 1; i <= n; i++) {
    sum += i;
}
```

Time complexity: \(O(n)\). The direct sum formula from Section 3 takes \(O(1)\) arithmetic operations, subject to integer overflow.

### 4.3 Nested loop

```c
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        // operation
    }
}
```

When both loops run `n` times, the body runs \(n^2\) times, so the time complexity is \(O(n^2)\).

---

## 5. Arrays

### 5.1 Array indexing

For an array with `n` elements, valid indices are `0` through `n - 1`.

Never access an index outside that range.

### 5.2 Find the minimum and maximum

```c
int minValue = arr[0];
int maxValue = arr[0];

for (int i = 1; i < n; i++) {
    if (arr[i] < minValue) minValue = arr[i];
    if (arr[i] > maxValue) maxValue = arr[i];
}
```

Requires `n > 0`. Time: \(O(n)\); extra space: \(O(1)\).

### 5.3 Reverse an array

Swap `arr[left]` and `arr[right]`, then increment `left` and decrement `right` until they meet.

Time: \(O(n)\); extra space: \(O(1)\).

### 5.4 Find the second-largest distinct value

Track the largest and second-largest distinct values in one pass. Be careful to distinguish “second largest” from “second element after sorting” and handle arrays with fewer than two distinct values.

### 5.5 Array average

\[
\text{Average}=\frac{\text{sum of all elements}}{n}
\]

Requires `n > 0`. Use floating-point division if the result can be fractional.

### 5.6 Prefix sum

\[
prefix[i]=prefix[i-1]+arr[i]
\]

```c
prefix[0] = arr[0];

for (int i = 1; i < n; i++) {
    prefix[i] = prefix[i - 1] + arr[i];
}
```

Inclusive sum from `left` to `right`:

- If `left == 0`: `prefix[right]`
- Otherwise: `prefix[right] - prefix[left - 1]`

Preprocessing takes \(O(n)\); each range query takes \(O(1)\).

### 5.7 Frequency counting

Count how many times each value occurs using a frequency array or hash map.

```cpp
frequency[value]++;
```

A frequency array works only when values map safely to valid indices. For arbitrary values, use a hash map such as `unordered_map` in C++.

### 5.8 Majority element

A majority element appears **more than `n / 2` times**.

The Boyer–Moore voting algorithm finds a candidate in \(O(n)\) time and \(O(1)\) extra space. If the problem does not guarantee that a majority exists, verify the candidate with a second pass.

---

## 6. Strings

### 6.1 String length in C

```c
strlen(str)
```

Include `<string.h>`. The result excludes the terminating `'\0'`.

### 6.2 Reverse a string

Use two pointers: one at the start, one at the end. Swap characters and move inward.

### 6.3 Palindrome string

Compare matching characters from the beginning and end, moving inward until a mismatch occurs or the pointers meet.

### 6.4 Character counting

Traverse the string and count letters, digits, spaces, or vowels according to the required conditions.

### 6.5 Character frequency

Use a frequency array for a known character range, or a map for more general character sets. Define how uppercase and lowercase characters should be treated.

---

## 7. Searching

### 7.1 Linear search

Check each element until the target is found.

- Time: \(O(n)\)
- Extra space: \(O(1)\)

### 7.2 Binary search

**Requirement:** the array must be sorted.

```cpp
int left = 0;
int right = n - 1;

while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] < target) {
        left = mid + 1;
    } else {
        right = mid - 1;
    }
}
return -1;
```

Time: \(O(\log n)\); iterative extra space: \(O(1)\).

### 7.3 Binary search on answer

Use binary search over a range of possible answers when a condition is **monotonic**—for example, once a capacity is sufficient, every larger capacity is also sufficient.

---

## 8. Sorting

| Algorithm | Best case | Average case | Worst case |
|---|---:|---:|---:|
| Bubble sort (with early stop) | \(O(n)\) | \(O(n^2)\) | \(O(n^2)\) |
| Selection sort | \(O(n^2)\) | \(O(n^2)\) | \(O(n^2)\) |
| Insertion sort | \(O(n)\) | \(O(n^2)\) | \(O(n^2)\) |
| Merge sort | \(O(n\log n)\) | \(O(n\log n)\) | \(O(n\log n)\) |
| Quick sort | \(O(n\log n)\) typical | \(O(n\log n)\) | \(O(n^2)\) |

Space complexity depends on the implementation. Merge sort on arrays usually uses \(O(n)\) extra space; in-place quicksort typically uses recursion stack space.

---

## 9. Time and Space Complexity

| Complexity | Name | Example |
|---|---|---|
| \(O(1)\) | Constant | Accessing `arr[i]` |
| \(O(\log n)\) | Logarithmic | Binary search |
| \(O(n)\) | Linear | One array traversal |
| \(O(n\log n)\) | Linearithmic | Merge sort |
| \(O(n^2)\) | Quadratic | Two full nested loops |
| \(O(2^n)\) | Exponential | Enumerating all subsets |
| \(O(n!)\) | Factorial | Enumerating all permutations |

### Rules of thumb

- Consecutive loops: add their costs, then keep the dominant term.
- Nested loops: multiply iteration counts when each combination is visited.
- Ignore constant factors and lower-order terms in Big-O notation.
- **Time complexity** describes how runtime grows.
- **Space complexity** describes how memory usage grows.
- Auxiliary space usually means extra memory beyond the input storage.

Example: \(O(3n^2+5n+8)=O(n^2)\).

---

## 10. Recursion

A recursive function calls itself on a smaller or simpler problem.

Every correct recursive solution needs:
1. A base case.
2. A recursive step.
3. Progress toward the base case.

### Factorial recurrence

\[
fact(n)=
\begin{cases}
1 & n=0\\
n\cdot fact(n-1) & n>0
\end{cases}
\]

### Recursion complexity

- Recursion depth may use stack space.
- Recursive Fibonacci without memoization takes exponential time.
- Memoization can reduce Fibonacci to \(O(n)\) time and \(O(n)\) memory.

### Backtracking template

```text
solve(state):
    if state is complete:
        record answer
        return

    for each valid choice:
        make choice
        solve(updated state)
        undo choice
```

---

## 11. Bit Manipulation

Bitwise operations work on the binary representation of integers.

| Operation | Formula |
|---|---|
| Test lowest bit | `n & 1` |
| Test bit `k` | `(n >> k) & 1` |
| Set bit `k` | `n \| (1U << k)` |
| Clear bit `k` | `n & ~(1U << k)` |
| Toggle bit `k` | `n ^ (1U << k)` |
| Check power of two | `n > 0 && (n & (n - 1)) == 0` |

### XOR properties

- `x ^ x = 0`
- `x ^ 0 = x`
- XOR is commutative and associative.

These properties can help solve problems where every value appears twice except one, provided the problem's constraints match that pattern.

Use unsigned integer types for bit operations when appropriate, and ensure shift positions are valid.

---

## 12. Hashing and Frequency

Hashing stores information using keys, commonly to count or quickly find values.

Common applications:
- Count element frequencies.
- Detect duplicates.
- Find pairs with a target sum.
- Track visited states.
- Store previously computed results.

In C++, `unordered_map` and `unordered_set` provide average \(O(1)\) lookup and insertion, but worst-case operations can be slower.

---

## 13. Linked Lists

Common patterns:
- **Traversal:** follow `next` until `NULL`.
- **Reverse:** maintain `previous`, `current`, and `next`.
- **Cycle detection:** Floyd's fast-and-slow-pointer algorithm.
- **Find middle:** slow pointer moves one step; fast pointer moves two.
- **Merge sorted lists:** repeatedly choose the smaller current node.

Typical singly linked list complexities:

| Operation | Complexity |
|---|---:|
| Access by position | \(O(n)\) |
| Search | \(O(n)\) |
| Insert at head | \(O(1)\) |
| Delete head | \(O(1)\) |

Other insertion/deletion complexities depend on whether the required node or its predecessor is already known.

---

## 14. Stacks and Queues

### Stack

Follows **LIFO**: last in, first out.

Common operations: `push`, `pop`, `top`.

Uses:
- Parentheses matching.
- Undo operations.
- Expression evaluation.
- Monotonic-stack problems.

### Queue

Follows **FIFO**: first in, first out.

Common operations: `push`, `pop`, `front`.

Uses:
- BFS.
- Task scheduling.
- Level-order tree traversal.

With suitable implementations, the main stack/queue operations typically take \(O(1)\) time.

---

## 15. Trees and Binary Search Trees

### Tree facts

- A tree with `n` vertices has `n - 1` edges.
- Binary tree nodes have at most two children.
- A binary search tree follows an ordering rule: left-subtree values are smaller and right-subtree values are larger, according to the chosen duplicate policy.

### Traversal patterns

- **Preorder:** Root → Left → Right.
- **Inorder:** Left → Root → Right.
- **Postorder:** Left → Right → Root.
- **Level order:** Visit level by level using a queue.

A balanced BST supports search, insertion, and deletion in \(O(\log n)\) time. A highly skewed BST can take \(O(n)\).

---

## 16. Graphs

A graph contains vertices `V` and edges `E`.

### Common representations

- **Adjacency matrix:** \(O(V^2)\) space.
- **Adjacency list:** \(O(V+E)\) space.

### Algorithms

| Algorithm | Main use | Typical complexity |
|---|---|---|
| BFS | Reachability and unweighted shortest paths | \(O(V+E)\) |
| DFS | Traversal, components, cycle-related tasks | \(O(V+E)\) |
| Dijkstra | Shortest paths with non-negative edge weights | Common heap version: \(O((V+E)\log V)\) |
| Topological sort | Ordering vertices in a DAG | \(O(V+E)\) |
| Kruskal | Minimum spanning tree | Usually \(O(E\log E)\) |
| Prim | Minimum spanning tree | Depends on representation and priority queue |

Complexities assume standard implementations. For disconnected graphs, start traversal from every unvisited vertex when the task requires processing the entire graph.

---

## 17. Greedy Algorithms

A greedy algorithm makes a locally optimal choice at each step.

Common examples:
- Activity selection.
- Interval scheduling.
- Fractional knapsack.
- Huffman coding.
- Minimum spanning trees.

**Important:** A locally optimal choice is not always globally optimal. Prove why the greedy choice works for the specific problem.

---

## 18. Backtracking

Backtracking explores possible choices and undoes choices when exploring another path.

Common problems:
- Generate subsets.
- Generate permutations.
- N-Queens.
- Sudoku.
- Combination sum.

### Counts

- `n` distinct items have \(2^n\) subsets.
- `n` distinct items have \(n!\) permutations.
- Selecting `r` items from `n` without order gives \(\binom nr\) combinations.

These counts can grow rapidly, so backtracking often needs pruning.

---

## 19. Dynamic Programming (DP)

Dynamic programming is useful when subproblems overlap and their answers can be reused.

Identify:
1. **State:** What does `dp[i]` or `dp[i][j]` mean?
2. **Transition:** How does a state depend on smaller states?
3. **Base case:** What are the smallest known answers?
4. **Order:** In what order should states be calculated?
5. **Answer:** Which state contains the requested result?

### Fibonacci

\[
dp[i]=dp[i-1]+dp[i-2]
\]

### 0/1 Knapsack

For item `i` and capacity `w`, if `weight[i] <= w`:

\[
dp[i][w]=\max(dp[i-1][w],value[i]+dp[i-1][w-weight[i]])
\]

Otherwise, carry forward `dp[i-1][w]`.

### Longest common subsequence

If the current characters match:

\[
dp[i][j]=1+dp[i-1][j-1]
\]

Otherwise:

\[
dp[i][j]=\max(dp[i-1][j],dp[i][j-1])
\]

### DP approaches

- **Memoization:** recursion plus caching.
- **Tabulation:** fill a table from base cases.
- **Space optimization:** retain only the states needed for the next transition.

---

## 20. Sliding Window and Two Pointers

### Sliding window

Useful for contiguous subarrays or substrings.

Typical idea:
1. Expand the window.
2. Update the current state.
3. Shrink the window when the condition requires it.
4. Update the best answer.

A fixed-size window of length `k` can be updated by adding the new element and removing the element that leaves.

A variable-size window works only when the condition supports the required expand/shrink logic.

### Two pointers

Use two indices that move through a sequence.

Common applications:
- Pair sum in a sorted array.
- Removing duplicates from sorted arrays.
- Reversing an array.
- Merging sorted sequences.
- Fast and slow pointer problems.

---

## 21. Prefix Sums and XOR

### Prefix sum

For array `arr`:

\[
prefix[i]=arr[0]+arr[1]+\cdots+arr[i]
\]

Inclusive range sum from `l` to `r`:

\[
sum(l,r)=prefix[r]-prefix[l-1]
\]

This formula applies when `l > 0`. If `l == 0`, the answer is simply `prefix[r]`.

### Prefix XOR

Define `px[i]` as the XOR of elements from index `0` to `i`.

For `l > 0`:

\[
xor(l,r)=px[r]\oplus px[l-1]
\]

If `l == 0`, the result is `px[r]`.

---

## 22. Competitive Programming Patterns

Learn these patterns as you solve problems:

- Frequency counting and hashing.
- Prefix and suffix arrays.
- Two pointers.
- Sliding window.
- Binary search on answer.
- Difference arrays for range updates.
- Monotonic stacks and queues.
- Fast and slow pointers.
- BFS and DFS.
- Disjoint Set Union (DSU).
- Greedy sorting.
- Backtracking with pruning.
- Dynamic programming.
- Coordinate compression.
- Heap / priority queue.
- Topological sorting.
- Shortest paths.
- Bitmask techniques for small state spaces.

### Disjoint Set Union (DSU)

DSU supports grouping elements into connected components.

Use:
- `find(x)` to identify a representative.
- `union(a,b)` to merge components.
- Path compression and union by size/rank for efficient operations.

With these optimizations, operations run in near-constant amortized time.

---

## 23. Common Mistakes

- Forgetting that array indices start at `0`.
- Accessing `arr[n]` when the last valid index is `n-1`.
- Using `=` instead of `==` in a condition.
- Forgetting to initialize counters or accumulators.
- Forgetting the base case in recursion.
- Using binary search on unsorted data.
- Assuming a majority element exists without checking.
- Ignoring integer overflow in factorials, products, and reversed numbers.
- Confusing integer division with floating-point division.
- Assuming every nested loop is \(O(n^2)\) without counting iterations.
- Using an array as a frequency table when values are negative or too large.
- Forgetting empty-input and single-element cases.
- Assuming a greedy solution works without proving it.
- Using Dijkstra's algorithm with negative edge weights.
- Forgetting that `0` has one digit.

---

## 🎯 How to Use This Cheat Sheet

1. Learn the basic number and digit operations first.
2. Write each formula in a small program.
3. Test normal, boundary, and invalid inputs.
4. Explain the logic in your own words.
5. Analyse time and space complexity.
6. Apply the pattern to practice problems on LeetCode, GeeksforGeeks, or Codeforces.
7. Add new formulas as you discover them.

**Remember:** The goal is not to memorise every formula. Understand why it works, when to use it, and how to implement it correctly.

Keep practising. One problem at a time. 💪
