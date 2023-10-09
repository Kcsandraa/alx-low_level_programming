#ifndef STRUCT_DOG
#define STRUCT_DOG

/**
 * struct dog - description of a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif

#ifndef FUNCTIONS
#define FUNCTIONS

void init_dog(struct dog *d, char *name, float age, char *owner);
char *_strdup(char *str);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);

#endif
