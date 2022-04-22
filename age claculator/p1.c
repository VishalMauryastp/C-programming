/*Start
Step 1-> declare function to calculate age
   void age(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year)
      Set int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
      IF (birth_date > present_date)
         Set present_date = present_date + month[birth_month - 1]
         Set present_month = present_month – 1
      End
      IF (birth_month > present_month)
         Set present_year = present_year – 1
         Set present_month = present_month + 12
      End
      Set int final_date = present_date - birth_date
      Set int final_month = present_month - birth_month
      Set int final_year = present_year - birth_year
      Print final_year, final_month, final_date
Step 2-> In main()
   Set int present_date = 21
   Set int present_month = 9
   Set int present_year = 2019
   Set int birth_date = 25
   Set int birth_month = 9
   Set int birth_year = 1996
   Call age(present_date, present_month, present_year, birth_date, birth_month,
birth_year)
Stop */
#include <stdio.h>
#include <stdlib.h>
// function to calculate current age
void age(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year) {
   int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   if (birth_date > present_date) {
      present_date = present_date + month[birth_month - 1];
      present_month = present_month - 1;
   }
   if (birth_month > present_month) {
      present_year = present_year - 1;
      present_month = present_month + 12;
   }
   int final_date = present_date - birth_date;
   int final_month = present_month - birth_month;
   int final_year = present_year - birth_year;
   printf("Present Age Years: %d Months: %d Days: %d", final_year, final_month, final_date);
}
int main() {
  
   int present_date ;

   int present_month;
   int present_year;
   int birth_date ;
   int birth_month ;
   int birth_year ;




//    int present_date =11;

//    int present_month = 9;
//    int present_year = 2019;
//    int birth_date = 25;
//    int birth_month = 9;
//    int birth_year = 1996;
   printf("Enter present_date: ");
   scanf("%d",&present_date );
   printf("Enter present month: ");
   scanf("%d",& present_month);
   printf(" Enter present_year: ");
   scanf("%d",& present_year);


    printf("Enter  birth_date: ");
   scanf("%d",& birth_date );
   printf("Enter birth_month: ");
   scanf("%d",& birth_month);
   printf(" Enter birth_year: ");
   scanf("%d",& birth_year);

   age(present_date, present_month, present_year, birth_date, birth_month, birth_year);
   return 0;
}