#include <stdio.h>
#include <math.h>
int main()
{
	/*int age = 34;
	age=35;
	this is valid in c i.e variable ke value ko change kar sakte hai
	char 1 byte
	unsigned char  1
	int or signed 2
	unsigned int 2
	signed short int 2
	long or long siigned int 4
	float 4
	double 8
	long double 10  
	
	
	
	32 keyword
	auto
	double
	int
	struct
	break
	else
	long
	switch
	case
	enum
	register
	typedef
	char
	extern
	return
	union
	continue
	for
	signeed
	void
	do
	if
	static
	while  
	default
	goto
	sizeof
	volatile
	const
	float   
	short 
	unsigned 
	
	
	
	printf("star is %c",'*');
	
	int d = 1, e;
	int x=y=z=2;  this is invalid 
	
	
	
	for getting power in c
	i.e   a^b  we write pow(a,b)  for a to the power b
	  for that #include <math.h>
	int a=8;
	int b=2;
	int c= pow(a,b);
	printf("%d",c);

	
	
	
	modulor operator return remainder % 
	it does not work on float
	
	
	printf("%d",-4%-3);  -1
	printf("\n%d",-4%3);  -1
	printf("\n%d",4%3);   1
	
	
	
	type conversion
	
	int op int   ---> int
	int op float  --> float
	2        4          4
	float op float  ---> float
	 4         4           4
	
	printf("%d",2.0*2); return error because 
	float cannot be stored into integer
	but integer can be stored in float
	


	printf("%d",2/3); correct 0
	printf("%f",2/3); error
	printf("%f",2.0/3); this will return the exact value
	
why 1.999999 is it 1 or 2 in int value 	
by default c ki saari float value double me dekhi jati hai
	it doesn't round off it just emit
	
	int a = (int) 1.999999;
	printf("%d \n",a);
		return 0;	


implicit           explicit
   |                   |
compiler	        external conversion which we do as a programmer

int can be stored in float but reverse not possible


it forcefully convert



precedence operator
*  /  % most priority then +  -   then = 
= is also known as assignment operator
operations are done from  (associativity) left to right 
	


operators
arthi  *+-/%
relational ==  > <  <=   >=   !=
logical   &&  ||   !
bitwise
assignment	
	
true  = 1 ;
false = 0;
	printf("%d",3<4);   1
	
	
	
	
	
	
	operator precedence
	
	priority   operator
	1             !
	2             *,/,%
	3               +,-
	4              <,>,>=,<=
	5                 ==,!=
	6                 &&
	7                    ||
	8                  =
	
	a+=b   a=a+b;
	a-=b   a=a-b;
	
	

	
	// Program to relate two integers using =, > or < symbol

#include <stdio.h>
int main() {
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    //checks if the two integers are equal.
    if(number1 == number2) {
        printf("Result: %d = %d",number1,number2);
    }

    //checks if number1 is greater than number2.
    else if (number1 > number2) {
        printf("Result: %d > %d", number1, number2);
    }

    //checks if both test expressions are false
    else {
        printf("Result: %d < %d",number1, number2);
    }

    return 0;
    
    
    
    nested if....else
    
    #include <stdio.h>
int main() {
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    if (number1 >= number2) {
      if (number1 == number2) {
        printf("Result: %d = %d",number1,number2);
      }
      else {
        printf("Result: %d > %d", number1, number2);
      }
    }
    else {
        printf("Result: %d < %d",number1, number2);
    }

    return 0;
}

}

important code snippet


if (a > b) {
    printf("Hello");
}
printf("Hi");


this is equivalent to 

if (a > b)
    printf("Hello");
printf("Hi");
 }
 
 
 
 
 
 
 
 
 for loop
 
 
 // Print numbers from 1 to 10
#include <stdio.h>

int main() {
  int i;

  for (i = 1; i < 11; ++i)
  {
    printf("%d ", i);
  }
  return 0;
}




// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers

#include <stdio.h>
int main()
{
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // for loop terminates when num is less than count
    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("Sum = %d", sum);

    return 0;
}

while loop

// Print numbers from 1 to 5

#include <stdio.h>
int main() {
  int i = 1;
    
  while (i <= 5) {
    printf("%d\n", i);
    ++i;
  }

  return 0;
}




do while loop



// Program to add numbers until the user enters zero

#include <stdio.h>
int main() {
  double number, sum = 0;

  // the body of the loop is executed at least once
  do {
    printf("Enter a number: ");
    scanf("%lf", &number);
    sum += number;
  }
  while(number != 0.0);

  printf("Sum = %.2lf",sum);

  return 0;
}

----------------------------------

do {
  printf("Enter a number: ");
  scanf("%lf", &number);
  sum += number;
}
while(number != 0.0);



break and continue
// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, the loop terminates

#include <stdio.h>

int main() {
   int i;
   double number, sum = 0.0;

   for (i = 1; i <= 10; ++i) {
      printf("Enter n%d: ", i);
      scanf("%lf", &number);

      // if the user enters a negative number, break the loop
      if (number < 0.0) {
         break;
      }

      sum += number; // sum = sum + number;
   }

   printf("Sum = %.2lf", sum);

   return 0;
}




// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, it's not added to the result

#include <stdio.h>
int main() {
   int i;
   double number, sum = 0.0;

   for (i = 1; i <= 10; ++i) {
      printf("Enter a n%d: ", i);
      scanf("%lf", &number);

      if (number < 0.0) {
         continue;
      }

      sum += number; // sum = sum + number;
   }

   printf("Sum = %.2lf", sum);

   return 0;
}





switch case

// Program to create a simple calculator
#include <stdio.h>

int main() {
    char operation;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);

    switch(operation)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}



go to statement



// Program to calculate the sum and average of positive numbers
// If the user enters a negative number, the sum and average are displayed.

#include <stdio.h>

int main() {

   const int maxInput = 100;
   int i;
   double number, average, sum = 0.0;

   for (i = 1; i <= maxInput; ++i) {
      printf("%d. Enter a number: ", i);
      scanf("%lf", &number);
      
      // go to jump if the user enters a negative number
      if (number < 0.0) {
         goto jump;
      }
      sum += number;
   }

jump:
   average = sum / (i - 1);
   printf("Sum = %.2f\n", sum);
   printf("Average = %.2f", average);

   return 0;
}




************************************************************

function
-----------------------------------
#include <stdio.h>               
#include <math.h>

void hello();
void gb();

int main()
{
    hello();
    gb();
    return 0;
}

void hello()
{
    printf("hello!");
}

void gb()
{
    printf("goodbye");
}
**************************************


	*/
	
	
return 0;

}




