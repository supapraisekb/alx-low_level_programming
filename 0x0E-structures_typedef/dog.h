#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct containing name, age, owner
 * @name: dog's name
 * @age: dog's age
 * @owner: the dog's owner
 *
 * Description: struct defining dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *dodge, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif /*DOG_H*/
