## Search Algorithms in C

## Learning Objectives

- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs

## Requirements

- Allowed editors: vi, vim, emacs
- All  files  compiled on Ubuntu 14.04 LTS
- Programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- Code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc, … is forbidden.
- The prototypes of all your functions should be included in your header file called search_algos.h

## Background Context

### Binary Search

In computer science, binary search, also known as half-interval search, logarithmic search, or binary chop.

Binary search is a search algorithm that finds the position of a target value within a sorted array. Binary search compares the target value to the middle element of the array. If they are not equal, the half in which the target cannot lie is eliminated and the search continues on the remaining half, again taking the middle element to compare to the target value, and repeating this until the target value is found. If the search ends with the remaining half being empty, the target is not in the array.

| Class | Search algorithm |
| ----- | ---------------- |
| Data structure | Array |
| Worst-case performance | O(log n) |
| Best-case performance | O(1) |
| Average performance | O(log n) |
| Worst-case space complexity | O(1) |

### Linear Search

In computer science, a linear search or sequential search is a method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.

A linear search runs in at worst linear time and makes at most n comparisons, where n is the length of the list. If each element is equally likely to be searched, then linear search has an average case of n + 1 over 2 comparisons, but the average case can be affected if the search probabilities for each element vary. Linear search is rarely practical because other search algorithms and schemes, such as the binary search algorithm and hash tables, allow significantly faster searching for all but short lists.

| Class | Search algorithm |
| ----- | ---------------- |
| Worst-case performance | O(n) |
| Best-case performance | O(1) |
| Average performance | O(n) |
| Worst-case space complexity | O(1) iterative |

### Jump Search

The fundamental idea behind this searching technique is to search fewer number of elements compared to linear search algorithm (which scans every element in the array to check if it matches with the element being searched or not). This can be done by skipping some fixed number of array elements or jumping ahead by fixed number of steps in every iteration.

The optimal value of m is √n, where n is the length of the list L. Because both steps of the algorithm look at, at most, √n items the algorithm runs in O(√n) time. This is better than a linear search, but worse than a binary search. The advantage over the latter is that a jump search only needs to jump backwards once, while a binary can jump backwards up to log n times. This can be important if a jumping backwards takes significantly more time than jumping forward.
