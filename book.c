#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "book.h"

struct Book *createBook(char *name, char *author, 
        int pages, char *genre)
{
    struct Book *b = malloc(sizeof(struct Book));
    assert(b != NULL);

    b -> name = strdup(name);
    b -> author = strdup(author);
    b -> pages = pages;
    b -> genre = strdup(genre);

    return b;
}

void destroyBook(struct Book *b)
{
    assert(b != NULL);

    free(b -> name);
    free(b -> author);
    free(b -> genre);

    free(b);
}

void showBook(struct Book *b)
{
    assert(b != NULL);

    printf("Name: %s\nAuthor: %s\nGenre: %s\nPages: %d\n", 
            b -> name, 
            b -> author, 
            b -> genre,
            b -> pages);

    for (int i = 0; i < 10; ++i) {
        printf("---");
    }
    printf("\n");
}
