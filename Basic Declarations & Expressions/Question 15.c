/*

Write a C program that reads an integer between 1 and 12 and prints the month of the year in English.

Test Data :
    Input a number between 1 to 12 to get the month name: 8

Expected Output:
    August

*/

char array[12][10]={"January", "February", "March", "April",
                    "May", "June", "July", "August",
                    "September", "October","November","December"};

void main(){
    int x;

    printf("Input a number between 1 to 12 to get the month name : ");
    scanf("%d",&x);

    printf("\n");
    for(int i=0;array[x-1][i]!='\0';i++){
        printf("%c",array[x-1][i]);
    }
}
