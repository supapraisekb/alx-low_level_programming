# C - More singly linked lists

This project is a continuation of practice and coding with building with singly linked lists in C.

## Tests :heavy_check_mark:

* [tests](./tests): Proram Test codes are provided by ALX Software Engineering School.

## Header File :file_folder:

* [lists.h](./lists.h): This Header file contains definitions and prototypes for all the
functions written in this project.

| Type/File                  | Definition/Prototype                                                             |
| -------------------------- | -------------------------------------------------------------------------------- |
| `struct listint_s`         | <ul><li>`int n`</li><li>`struct listint_s *next`</li></ul>                       |
| `typedef listint_t`        | `struct listint_s`                                                               |
| `0-print_listint.c`        | `size_t print_listint(const listint_t *h);`                                      |
| `1-listint_len.c`          | `size_t listint_len(const listint_t *h);`                                        |
| `2-add_nodeint.c`          | `listint_t *add_nodeint(listint_t **head, const int n);`                         |
| `3-add_nodeint_end.c`      | `listint_t *add_nodeint_end(listint_t **head, const int n);`                     |
| `4-free_listint.c`         | `void free_listint(listint_t *head);`                                            |
| `5-free_listint2.c`        | `void free_listint2(listint_t **head);`                                          |
| `6-pop_listint.c`          | `int pop_listint(listint_t **head);`                                             |
| `7-get_nodeint.c`          | `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`          |
| `8-sum_listint.c`          | `int sum_listint(listint_t *head);`                                              |
| `9-insert_nodeint.c`       | `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);` |
| `10-delete_nodeint.c`      | `int delete_nodeint_at_index(listint_t **head, unsigned int index);`             |
| `100-reverse_listint.c`    | `listint_t *reverse_listint(listint_t **head);`                                  |
| `101-print_listint_safe.c` | `size_t print_listint_safe(const listint_t *head);`                              |
| `102-free_listint_safe.c`  | `size_t free_listint_safe(listint_t **h);`                                       |
| `103-find_loop.c`          | `listint_t *find_listint_loop(listint_t *head);`                                 |

## Tasks :page_with_curl:

* **0. Print list**
  * Write a function [0-print_listint.c](./0-print_listint.c) that prints all the elements
  of a `listint_t` linked list.
    * Returns the number of nodes in the `listint_t` list.

* **1. List length**
  * Write a function [1-listint_len.c](./1-listint_len.c) that returns the number
  of elements in a `listint_t` linked list.

* **2. Add node**
  * Write a function [2-add_nodeint.c](./2-add_nodeint.c) that adds a new node at
  the beginning of a `listint_t` linked list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.

* **3. Add node at the end**
  * Write a function [3-add_nodeint_end.c](./3-add_nodeint_end.c) that adds a new node
  at the end of a `listint_t` linked list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.

* **4. Free list**
  * Write a function that frees a [4-free_listint.c](./4-free_listint.c) that frees a `listint_t`
  linked list.

* **5. Free**
  * Write a function [5-free_listint2.c](./5-free_listint2.c) that frees a
  `listint_t` linked list.
    * Sets the `head` to `NULL`.

* **6. Pop**
  * Write a function [6-pop_listint.c](./6-pop_listint.c) that deletes the head node of
  a `listint_t` linked list.
    * If the linked list is empty - returns `0`.
    * Otherwise - returns the head node's data (`n`).

* **7. Get node at index**
  * Write a function [7-get_nodeint.c](./7-get_nodeint.c) that returns the nth node of a `listint_t` linked list.
    * where index is the index of the node, starting at `0`
    * If the node does not exist - returns `NULL`.


* **8. Sum list**
  * Write a function [8-sum_listint.c](./8-sum_listint.c) that returns the sum of all
  the data (`n`) of a `listint_t` linked list.
    * If the linked list is empty - returns `0`.


* **9. Insert**
  * Write a funtion [9-insert_nodeint.c](./9-insert_nodeint.c) that inserts a new node at a given position.
    * wher edx is the index of the list where the new node should be added. Index starts at `0`
    * Returns the address of the new node or NULL if failed.
    * if it is not possible to add the new node at index idx, do not add the new node and return NULL

* **10. Delete at index**
  * Write a function [10-delete_nodeint.c](./10-delete_nodeint.c) that deletes the node at a  given index of a `listint_t` linked list.
    * where index is the index of the node that should be deleted. Index starts at `0`
    * If the function succeeds - returns `1`.
    * If the function fails - returns `-1`.

* **11. Reverse list**
  * Write a function [100-reverse_listint.c](./100-reverse_listint.c): that reverses a `listint_t`
  linked list using a maximum of one loop and two variables.
    * Returns a pointer to the first node of the reversed list.

* **12. Print (safe version)**
  * Write a funtion that[101-print_listint_safe.c](./101-print_listint_safe.c) that prints
  a `listint_t` linked list safely (ie. can free lists containing loops).
    * Returns the number of nodes in the `listint_t` list.

* **13. Free (safe version)**
  * [102-free_listint_safe.c](./102-free_listint_safe.c): C function that frees a
  `listint_t` linked list safely (ie. can free lists containing loops).
    * Returns the size of the list that was freed.
    * Sets the `head` to `NULL`.

* **14. Find the loop**
  * [103-find_loop.c](./103-find_loop.c): C function that finds the loop contained in a
  `listint_t` linked list using a maximum of two variables.
    * If no loop is found - returns `NULL`.
    * Otherwise - returns the address of the node where the loop starts.
