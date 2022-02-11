#include <stdio.h>
#include "book.c"

int main()
{
    struct Book *b1 = createBook("Subtle Art of Not Giving a F**k", "Mark Manson", 200, "Self Help");
    struct Book *b2 = createBook("Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 600, "Non fiction");
    struct Book *b3 = createBook("The Intellegent Investor", "Benjamin Graham", 300, "Investment");

    showBook(b1);
    showBook(b2);
    showBook(b3);

    destroyBook(b1);
    destroyBook(b2);
    destroyBook(b3);
}
