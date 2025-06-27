Intuition: Reverse a Linked List (LeetCode #206)
You're given the head of a singly linked list, and you need to reverse it — that is, make the list go in the opposite direction.

 Key Insight
 
A linked list only stores a reference to the next node, so to reverse it, we need to:

Change the direction of all next pointers

Instead of current → next, we make it next → current

We’ll do this iteratively, using three pointers to carefully reverse the links.

 What We Do
Use three pointers:

prev – initially null

curr – starts at the head

next – to temporarily store the next node

Loop through the list:

Store curr.next in next

Reverse the pointer: curr.next = prev

Move prev to curr, and curr to next

When curr becomes null, prev is the new head
