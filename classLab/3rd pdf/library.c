#include <stdio.h>
#include<string.h>
typedef struct
{
    char title[20];
    int accn_no;
    char auth_name[20];
    int price;
    int issued;
} book;
book B[10];
int count = 0;

void add_book()
{
    if (count < 10) {
        printf("Title: ");
        scanf("%[^\n]%*c",B[count].title);
        printf("Accn No: ");
        scanf("%d%*c", &B[count].accn_no);
        printf("Author: ");
        scanf("%[^\n]%*c", B[count].auth_name);
        printf("Price: ");
        scanf("%d%*c", &B[count].price);
        B[count].issued = 1;
        count++;
    } else {
        printf("Library capacity reached. Cannot add more books.\n");
    }
}
void book_info()
{
    for (int i = 0; i <count; i++)
    {
        printf("Title: %s ", B[i].title);
        printf("Accn No: %d ", B[i].accn_no);
        printf("Author: %s ", B[i].auth_name);
        printf("Price: %d ", B[i].price);
        printf("\n\n");
    }
}
void book_by_auth()
{
    char auth[20];
    printf("Author: ");
    scanf("%[^'\n']%*c", auth);

    for (int i = 0; i <= count; i++)
    {
        if (!strcmp(auth, B[i].auth_name))
        {
            printf("Title: %s", B[i].title);
            printf("Accn No: %d", B[i].accn_no);
            printf("Author: %s", B[i].auth_name);
            printf("Price: %d", B[i].auth_name);
            printf("\n\n");
        }
    }
}
void book_by_accn_no()
{
    int accession_no;
    printf("Accession No: ");
    scanf("%d", &accession_no);
    for (int i = 0; i <= count; i++)
    {
        if (accession_no == B[i].accn_no)
        {
            printf("Title: %s", B[i].title);
            printf("\n");
        }
    }
}
void sort_by_accn_no() {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (B[j].accn_no > B[j + 1].accn_no) {
                book temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }
}

int main()
{

    int choice;
    do
    {
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List books of given author\n");
        printf("4. List title of the specified book\n");
        printf("5. List the count of the books\n");
        printf("6. List the book in the order of accession number\n");
        printf("Press 10 to exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        fflush(stdin);
        switch (choice)
        {
        case 1:
            add_book();
            break;

        case 2:
            book_info();
            break;

        case 3:
            book_by_auth();
            break;

        case 4:
            book_by_accn_no();
            break;

        case 5:
            printf("Count = %d", count);
            break;

        case 6:
            sort_by_accn_no();
            book_info();
            break;
        default:
            break;
        }

    } while (choice != 10);
}