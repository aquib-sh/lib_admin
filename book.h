struct Book {
    char *name;
    char *author;
    int pages;
    char *genre;
};

// Constructor
struct Book *createBook(char *name, char *author, int pages, char *genre);

// Destructor
void destroyBook(struct Book *b);

// Print book info
void showBook(struct Book *b);
