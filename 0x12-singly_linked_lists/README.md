ALX Project 0x12 - C - Singly Linked Lists

Task Questions

Task 0 - write a function that prints all the elements of a list_t list
Prototype: size_t print_list(const list_t *h);
Return: the number of nodes
Format: see example
If str is NULL, print [0] (nil)
You are allowed to use printf

Task 1 - Write a function that returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h);

Task 2 - Write a function that adds a new node at the beginning of a list_t list.
Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

Task 3 - write a function that adds a new node at the end of a list_t list.
Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

Task 4 - Write a function that frees a list_t list.
Prototype: void free_list(list_t *head);

Advanced Task 5 - Write a function that frees a list_t list.
Prototype: void free_list(list_t *head);

Advanced Task 6 - Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
 You are allowed to use the printf function

