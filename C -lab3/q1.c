 #include<stdio.h>
 int main()
 {
     int score_mark;

     printf("Enter score marks between the range( 0-100 ): ");
     scanf("%d",&score_mark);

     switch( score_mark / 10 )
     {

     case 9:
         printf("Grade: +A\n");
         break;

     case 8:
         printf("Grade: A\n");
         break;

     case 7:
         printf("Grade: B+\n");
         break;

     case 6:
         printf("Grade: B\n");
         break;

     case 5:
         printf("Grade: C+\n");
         break;
 
    case 4:
         printf("Grade: C\n");
         break;

     case 3:
         printf("Grade: D\n");
         break;

     default:
         printf("Grade: F\n");
         break;
     }
     return 0;
 }