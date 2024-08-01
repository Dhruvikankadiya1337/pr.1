#include<stdio.h>
#include<conio.h>

void main()
{
	 int marks;
	 char grade;
	 
	 
	 printf("enter your marks:");
	 scanf("%d",&marks);
	 
	        (marks>=80 && marks<100)               	
	       ?printf("A is your grade\n",grade='A')
           :  
	       (marks>=60 && marks<80)
		   ?printf("B is your grade\n",grade='B')
		   : 
		   (marks>=40 && marks<60)	
		   ?printf("C is your grade\n",grade='C')
		    :  
		    (marks>=30 && marks<40)
		  	?printf("D is your grade\n",grade='D')
		  	:	
		    (marks>=0 && marks<30)
		    ?printf("F is your grade\n",grade='F')
		     :
		  	printf("enter the valid marks"); 
			 
		
			   
   switch(grade)
   {
   
   case 'A':printf("Excellent work !");
   break;
   case 'B':printf("Well done !");
   break;
   case 'C':printf("Good job !");
   break;
   case 'D':printf("you passed !");
   break ;
   case 'F':printf("sorry,you failed");
   break;
   
   }
   
   
   if(marks>=30)
   {
   	printf("congratulations!you are eligible for the next level");
   }
   else
   {
   	 printf("please try again next time");
   }
   	
}
