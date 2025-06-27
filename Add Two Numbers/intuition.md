Intuition: Add Two Numbers (LeetCode #2)
We're given two non-empty linked lists representing two non-negative integers.
The digits are stored in reverse order, and each of their nodes contains a single digit.

We need to add the two numbers and return the sum as a linked list, also in reverse order.

## Key Insight
This is just like adding two numbers manually (digit by digit), starting from the least significant digit (rightmost) — which is conveniently at the head of the list due to the reverse order.

# What We Do
Traverse both linked lists simultaneously.

At each step:

Add the corresponding digits.

Add any carry from the previous step.

Create a new node with the digit part of the result.

Update the carry for the next step.

If a carry remains after both lists end, add one final node.

# Why It Works
The list is in reverse order, so we start with the lowest place value — exactly like how we add on paper.
We don’t need to reverse the list or use stacks.

