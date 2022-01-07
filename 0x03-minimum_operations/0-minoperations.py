#!/usr/bin/python3
"""

0-minoperations - module intended to practice inerview questions.
                  This one has this context.

In a text file, there is a single character H. Your text editor can execute
only two operations in this file: "Copy All" and "Paste".

Given a number n, write a method that calculates the fewest number of
operations needed to result in exactly n H characters in the file.

Example:

n = 9

H => Copy All => Paste => HH => Paste =>HHH => Copy All => Paste => HHHHHH
...    => Paste => HHHHHHHHH

Number of operations: 6
"""


def minOperations(n):
    ops = 0
    current_chars = 1
    paste = 0
    if (n <= 1):
        return (ops)

    while (current_chars < n):
        if (n % current_chars == 0):
            paste = current_chars
            current_chars += paste
            ops += 2
            continue

        current_chars += paste
        ops += 1
    return (ops)
