/*
programmer: Rija Ali
desc: library programs
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/* Create a menu in which the following can be done.
1 - Display book information
2 - Add a new book
3 - Display all the books in the library of a particular author
4 - Display the number of books of a particular title
5 - Display the total number of books in the library
6 - Issue a book
(If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets
increased by 1) */

#define Max_books 100

struct Books {
   
    int accession_num;
    char author_name[50];
    char book_title[1000];
    int issued; // 0=no , 1=yes
};

void bookinfo(struct Books book[], int count){
    int i;

    printf("Book Information.");

    for(i=0;i<count;i++){
        printf(" Accession NUmber: %d\n", book[i].accession_num);
        printf(" Author Name %s\n", book[i].author_name);
        printf(" Book Title: %s\n", book[i].book_title);
        printf(" Is Issued?: %s\n", book[i].issued ? "yes": "no");
        printf("\n");
    }
}

void addnewbook(struct Books book[], int *count){
    if(*count < Max_books){
        struct Books newbook;
        printf("Enter book details:");
        
        printf("accession number: ");
        scanf("%d" ,&newbook.accession_num);
        printf("Book Title: ");
        scanf("%s", newbook.book_title);
        printf("Author name: ");
        scanf("%s", newbook.author_name);
       
       newbook.issued = 0;
        book[*count]=newbook;
        (*count)++;

        printf("book added successfully!");
    }
    else{
        printf("no space left to add a new book!");
    }
}

void books_by_author(struct Books book[], int count){
    int i;
    char searchauthor[50];

    printf("Enter the author name you want to search the book of: ");
    scanf("%s" , searchauthor);

printf("Books by author: ");
    for(i=0;i<count;i++){
        
        if(strcmp(book[i].author_name,searchauthor)==0){
            printf("Accession Number: %d", book[i].accession_num);
            printf(" Book Title: %s\n", book[i].book_title);
            printf("---\n");
        }
    }
}

void bookcount_title(struct Books book[], int count){
    char searchtitle[60];
    int titlecount=0;
    int i;
    printf("Enter the name of the book you want to search: ");
    scanf(" %s", searchtitle);

    for(i=0;i<count;i++){
        if(strcmp(searchtitle,book[i].book_title)==0){
            titlecount++;
        }
    }
        printf("Number of books by title  %s: %d",book[i].book_title,titlecount);
}

void totalbookcountlib(int count){
    printf("Total books in library %d \n", count);
}

void issuebook(struct Books book[], int count){
    int i;
    int accessionnum;

    printf("Enter the Accession number of the book you want to issue: ");
    scanf("%d", &accessionnum);

    for(i=0;i<count;i++){
        if(accessionnum==book[i].accession_num){
            if(book[i].issued==0){
                book[i].issued = 1 ;//marking the book as issued.
                printf("Book Issued Successfully.");
            }
            else{
                printf("This book is already issued!");
            }
            return; //exiting the program.
        }
    }
}

int main(){
    
    struct Books book[Max_books];
    int bookcount=0;
    int choice;
    int count=0;
    int i;
do{
    printf("\nLIBRARY PROGRAM!\n");
    printf("1 - Display book information\n");
    printf("2 - Add a new book\n");
    printf("3 - Display all the books in the library of a particular author\n");
    printf("4 - Display the number of books of a particular title\n");
    printf("5 - Display the total number of books in the library\n");
    printf("6 - Issue a book\n");

    printf("Choose an OPTION");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            bookinfo( book, count);
            break;
        case 2:    
            addnewbook( book, &count);
            break;
        case 3:
             books_by_author(book, count);
             break;
        case 4:        
            bookcount_title( book, count);
            break;
        case 5:
            totalbookcountlib( count);
            break;
        case 6:
            issuebook(book, count);
            break;
        case 0:
            printf("EXITING PROGRAM");
            break;
        default:
        printf("Invalid choice!");    
    }
}
while (choice != 0);

    return 0;

}
