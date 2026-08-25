#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
void initDate(struct Date *ptrDate)
{
    ptrDate->day = 1;
    ptrDate->month = 12;
    ptrDate->year = 2022;
}
void printDateOnConsole(struct Date *ptrDate)
{
    // cout<< ptrDate->day <<" "<< ptrDate->month <<" "<< ptrDate->year <<" "<<endl;
    printf("%d %d %d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}

void acceptDateFromConsole(struct Date *ptrDate)
{
  //cout<< "enter a date: ";
  //cin>> ptrDate->day;
  printf("Enter a date: ");
  scanf("%d", &ptrDate->day);
  //cout<< " enter a month: ";
  //cin>> ptrDate->month;
   printf("Enter a month: ");
   scanf("%d", &ptrDate->month);
  //cout<< " enter a year: ";
  //cin>> ptrDate->year;
    printf("Enter a year: ");
    scanf("%d", &ptrDate->year);
}

int main()
{
    struct Date date;
    int choice;

    do
    {
        //cout<<"date menu :"<<endl;
        printf("\nDate Menu:\n");
        //cout<<"1.intialse date:"<<endl;
        printf("1. Initialise date\n");
        //cout<<"2. print date:"<<endl;
        printf("2. Print date\n");
        //cout<<"3. accept date:"<<endl;
        printf("3. Accept date\n");
        //cout<<"4 exit"<<endl;
        printf("4.Exit\n");
        // cout<<"enter a choice"<< endl;
        printf("Enter a choice: ");
        // cin>> choice;
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                initDate(&date);
                break;

            case 2:
                printDateOnConsole(&date);
                break;

            case 3:
                acceptDateFromConsole(&date);
                break;

            case 5:
            //cout<<"exit";
                printf("Exit\n");
                break;

            default:
            // cout<<"invalid choices";
                printf("Invalid choice\n");
        }

    } while (choice < 5);

    return 0;
}