/*
 * Advanced Calculator
 */

/* 
 * Project: Advanced Calculator
 * Author: AHMED EL SHERIF
 */

#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<time.h>
// #include<sys/utsname.h>


//this are functions which is used in the program
void user_manual();
int start_the_program();
void normal_calcultion();
long double gcd(long long a, long long b) ;
void decimalToFraction(double number);
int power_and_exponential();
int matrix();
int row1 , column1 , row2 , column2 ; // variables of matrix 
int matrix_addition();
int matrix_subtraction();
int matrix_multiplication();
void matrix_determind();
double determinant_c(double A[row1][column1], int row1);
void cofactors(double A[row1][column1] , int row1);
void trans(double A[row1][column1], double B[row1][column1] , int row1); 
int matrix_transpose();
int matrix_inverse();
void factorial();
int multiply_factorial(int x, int res[], int res_size); 
int prime();
int single_prime_number();
int total_prime_number();
int trigometry();
void pythagorean_theorem();
int rad_deg_con();
int trigonometry_function();
int logarithm_function();
void eqn();
void quadratic_eqn();
void cubic_eqn();
void two_linear();
void three_linear();
void programmer();
void palindrome();
void statistics();
void cmplx();
float mean(float array[],int n);  
float median(float array[],int n);  
float mode(float[],int);  
double standarddeviation(float array[],int n);
void time_date();
void date_diff();
//void system_info();
//used 43 functions including main function

//start of main function
int main()
{
    printf("\n");
    printf("                                                                  This program made by AHMED EL-SHERIF               \n");
    printf("                                                               -> WELCOME TO THE SCIENTIFIC CALCULATOR <-            \n");
    printf("                                                          # We hope this Calculator helps you in your studies        \n");
    printf("                                                      This program was created on NetBeans development environment,  \n");
    printf("                                               for the best running way it is preferable to work from this compiler program \n");
    printf("                                     -> Don't forget to use 1360 x 768 display resolution(Maximize your screen)for better view <- \n");
    printf("                                    -------------------------------------- Let's get started ------------------------------------ \n\n\n");
    
    int try ;
    
    do{ 
      
    printf("                                                          __________________________________________________ \n");
    printf("                                                         |                                                  |\n");
    printf("                                                         |     ________________________________________     |\n");
    printf("                                                         |    |                                        |    |\n");
    printf("                                                         |    |  WELCOME TO THE SCIENTIFIC CALCULATOR  |    |\n");
    printf("                                                         |    |________________________________________|    |\n");
    printf("                                                         |                                                  |\n");
    printf("                                                         |                                                  |\n");
    printf("                                                         |    1- For start the Calculator type 'start'      |\n");
    printf("                                                         |                                                  |\n");
    printf("                                                         |    2- For user manual type 'help'                |\n");
    printf("                                                         |                                                  |\n");
    printf("                                                         |    3- For exit program type 'exit'               |\n");
    printf("                                                         |                                                  |\n");
    printf("                                                         |__________________________________________________|\n\n");

    printf(" -> Enter your input: ");
    
    char start[5] ;
    gets(start);   //this will take users input - using gets function gives massage "unsafe"
   // scanf("%s" , start);
    system("cls");   // clear previous text and operations shown in the console
    
    if(strcmp(start, "start") == 0 || strcmp(start, "START") == 0 || strcmp(start, "1") == 0) 
    {
        system("cls");
        start_the_program(); 
        try = 1 ;
        getchar();
    }
    else if(strcmp(start, "help")== 0 || strcmp(start, "HELP") == 0 || strcmp(start, "2") == 0)
    {
       system("cls");
       user_manual(); 
       try = 1 ;
       //getchar();
    }
    else if(strcmp(start, "exit")== 0 || strcmp(start, "EXIT") == 0 || strcmp(start, "3") == 0)
    {
        try = 0;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("                                                             Thank you for using our SCIENTIFIC CALCULATOR \n");
        printf("                                                                 We hope it had been helpful for you :)      ");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    }
    else if((strcmp(start, "start")!= 0) && (strcmp(start, "help")!=0) && (strcmp(start, "exit")!=0))
    {
        try = 1 ;
        printf("\n Sorry!\n You've entered wrong keyword.\n");
    }
    
    }while(try == 1);
    
    return 0;
}
//end of the main function


//here the functions will start
int start_the_program()
{

  //  system("clear");
    int choice;
    printf("\n");
    
    int mode; // to continue running the calculator
   
    do{
        
        //ask to user what's they want to do
        
    printf("                          __________________________________________________________________________________________________________________ \n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |                                                 Calculator Modes                                                 |\n");
    printf("                         |                                             ------------------------                                             |\n");
    printf("                         |                                                                                                                  |\n");  
    printf("                         |      1- COMP - General calculations                             2- Matrix calculations                           |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |      3- Factorial calculation                                   4- Prime number calculation                      |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |      5- Trigonometrical calculation                             6- Logarithm calculation                         |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |      7- EQN - Equation solution                                 8- Statistics calculations                       |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |      9- CMPLX - complex numbers                                 10- Palindrome                                   |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |      11- Programmer calculation                                 12- Time and Date calculation                    |\n");
    printf("                         |                                                                                                                  |\n");
    //printf("                         |      13- System information calculation                                                                          |\n");
    //printf("                         |                                                                                                                  |\n");
    printf("                         |      -> Input (0) for exit the Calculator.                                                                       |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |__________________________________________________________________________________________________________________|\n\n");
    
    
    
    printf(" -> Enter number to apply: ");
    scanf("%d", &choice);
    
    system("cls"); 

        
    switch(choice) 
    {
    
    case 0 :
        mode = 0 ;
        printf("\n  # Backed to the main list ..... \n");
        
        break;
        
    case 1:
        mode = 1 ;
        normal_calcultion();
        
        break;
        
    case 2:
        mode =1 ;
        matrix();
        break;
        
    case 3:
        mode = 1 ;
        factorial();
        break;
        
    case 4:
        mode = 1 ;
        prime();
        break;
        
    case 5:
        mode = 1 ;
        trigometry();
        break;
   
    case 6:
        mode = 1 ;
        logarithm_function();
        break;
       
    case 7: 
        mode = 1 ;
        eqn();
        break;
      
    case 8:
        mode = 1 ;
        statistics();
        break;
        
    case 9:
        mode = 1 ;
        cmplx();
        break;    
        
    case 10:
        mode = 1 ;
        palindrome();
        break; 
        
    case 11:
        mode = 1 ;
        programmer();
        break;     
            
    case 12:
        mode = 1 ;
        time_date();
         break;
         
    /*case 13:
        mode = 1 ;
        system_info();
        break;
            */
        
    default:
        mode = 1 ;
        printf("\n # Wrong key.\n Please try again. \n");
        
     }

    }while( mode == 1 );
   

return 0;
}

void normal_calcultion()
{
    int counti;
    int try;
    do{

    double a, b; //two variable for calculation 
    int c ;
    
    try = 0;
    
    printf("\n");
    printf("                                     ______________________________________________________________________________________________ \n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |                                  -> General calculations <-                                  |\n");
    printf("                                    |                                -----------------------------                                 |\n");
    printf("                                    |                                                                                              |\n");   
    printf("                                    |      1- Addition (+)           2- Subtraction (-)       3- Multiplication (X)                |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      4- Division (÷)           5- Remainder             6- n-th Root of a number (?)         |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      7- power and exponential (x^)                                                           |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      8- Back to the Calculator Modes list                                                    |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      // To use the previous made operations we saved you the printed operations you did      |\n");
    printf("                                    |______________________________________________________________________________________________|\n\n");

    printf(" -> Enter your input: ");
    scanf("%d", &c);
    
    
    switch(c)
    {
        
    case 8: 
              counti = 0 ;
              system("cls");
              printf("\n # Backing to the Calculator Modes list ....\n");
              
    break;
    
    case 1:
        
        do{
                    try = 0 ;
                    printf("\n - Addition - \n");
                    printf(" First value: ");
                    scanf("%lf", &a); 
                    
                    printf(" Second value: ");
                    scanf("%lf", &b);
                    
                    printf(" %.2lf + %.2lf = %.2lf\n", a , b, (a+b));
                    decimalToFraction(a+b);
                    printf("\n  # for doing other -  Addition - operation - input 1 , other numbers will back to the - General calculations - list: ");
                    scanf("%d" , &try);
        }while(try == 1);
        counti = 1 ;
        
    break;
    
    case 2:
        do{
                    try = 0 ;
                    printf("\n - Subtraction - \n");
                    printf(" First value: ");
                    scanf("%lf", &a); 
                    
                    printf(" Second value: ");
                    scanf("%lf", &b);
                    
                    printf(" %.2lf - %.2lf = %.2lf \n", a, b, (a-b));
                    decimalToFraction(a-b);
                    printf("\n  # for doing other -  subtraction - operation - input 1 , other numbers will back to the - General calculations - list: ");
                    scanf("%d" , &try);
        }while(try == 1);
        counti = 1 ;
        
    break;
        
    case 3:
        do{
                    try = 0 ;
                    printf("\n - Multiplication - \n");
                    printf(" First value: ");
                    scanf("%lf", &a); 
                    
                    printf(" Second value: ");
                    scanf("%lf", &b);
                    
                    printf(" %.2lf x %.2lf = %.2lf\n", a, b, (a*b));
                    decimalToFraction(a*b);
                    printf("\n  # for doing other -  multiplication - operation - input 1 , other numbers will back to the - General calculations - list: ");
                    scanf("%d" , &try);
        }while(try == 1);
        counti = 1 ;
        
    break;
        
        
    case 4:
        
        
                do{
                    try = 0 ;
                    printf("\n - Division - \n");
                    printf(" First value: ");
                    scanf("%lf", &a); 
                    
                    printf(" Second value: ");
                    scanf("%lf", &b);
                    

                    if((a!=0)&&(b!=0))//result will be always valid
                    {
                     printf(" %.2lf / %.2lf = %.2lf \n remainder is = %.2lf \n", a, b,  (a/b) , fmod(a,b) );
                     decimalToFraction(a/b);
                    }

                    else if((a==0)&&(b ==0)) //[0/0=indeterminate]
                    {
                     printf(" %.2lf / %.2lf = indeterminate \n", a , b );
                    }
                    else if((a==0)||(b==0))
                    {
                      if(a==0)//if a is zero
                      {
                      //for (a/b) result will be valid 
                       printf(" %.2lf / %.2lf = %.2lf \n" , a, b, (a/b) );
                      }
                      else if(b==0)//if b is zero
                      {
                       //for (a/b) result will be infinity 
                      printf(" %.2lf / %.2lf = infinity \n", a, b );
                      }

                    }

                    
                    printf("\n  # for doing other -  division - operation - input 1 , other numbers will back to the - General calculations - list: ");
                    scanf("%d" , &try);
                }while(try == 1);
                counti = 1 ;        

        break;
        
        
    case 5:
        
         do{
                    try = 0 ;
                    printf("\n - Remainder - \n");
                    printf(" First value: ");
                    scanf("%lf", &a); 
                    
                    printf(" Second value: ");
                    scanf("%lf", &b);
                    
                    
                    if((a!=0)&&(b!=0))//if both dividend and divisor isn't zero
                {
                	printf(" The remainder value  of (%.2lf / %.2lf) is = %.2lf \n", a, b, fmod(a,b) );
			}
			else if((a==0&&b==0)||(a==0||b==0)) //if anything is zero
			{
			    printf(" Your inputted value isn't valid for gaining remainder values. \n");
			}
                    
                    printf("\n  # for doing other -  remainder - operation - input 1 , other numbers will back to the - General calculations - list: ");
                    scanf("%d" , &try);
        }while(try == 1);
        counti = 1 ;
                        
        break;
        
    case 6:
        
        do{
            try = 0 ;
            printf("\n - n-th Root of a number ( n?x )- \n");
            printf(" Input x value: ");
            scanf("%lf", &a); //taking float values
                    
            printf(" Input n ( n-th root ) value ");
            scanf("%lf", &b);
                    
            printf(" The %.2lf-th root of %.2lf ( %.2lf?%.2lf ) = %.2lf \n", b , a, b , a , pow(a , 1.0/b) );
                    
           printf("\n  # for doing other -  n-th Root of a number - operation - input 1 , other numbers will back to the - General calculations - list: ");
           scanf("%d" , &try);
           
        }while(try == 1);
        counti = 1 ;
        
    break;
    
    case 7:
        
        printf("\n - power and exponential - \n");
        power_and_exponential();                    

        counti = 1 ;
        
    break;

    default:
        printf(" Unknown choice \n\n");
        counti = 1 ;
        system("cls");
    }

    }while( counti == 1 );
    
}
// friction function
long double gcd(long long a, long long b) 
{ 
	if (a == 0) 
		return b; 
	else if (b == 0) 
		return a; 
	if (a < b) 
		return gcd(a, b % a); 
	else
		return gcd(b, a % b); 
} 
 
void decimalToFraction(double number) 
{ 

	double integral_val = floor(number); 
	double fractional_val = number - integral_val; 
	// Consider precision value to convert fractional part to integral equivalent 
	const long pVal = 1000000000; 
	// Calculate GCD of integral equivalent of fractional part and precision value 
	long long gcdVal = gcd(round(fractional_val * pVal), pVal); 
	// Calculate num and deno 
	long long num = round(fractional_val * pVal) / gcdVal; 
	long long deno = pVal / gcdVal; 

            // Print the fraction 
    printf(" D->S = %lld/%lld \n\n" ,(long)(integral_val * deno)+ num , deno); 

}

int power_and_exponential()
{ 
    system("cls");
    int try;
 
    do{
        
        int c ;
 	double x, y, p, m, n; // for functions
        try = 0;
        
    printf("                                     ______________________________________________________________________________________________ \n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |                           -> Power & Exponential calculation <-                              |\n");
    printf("                                    |                         -----------------------------------------                            |\n");
    printf("                                    |          you are able to calculate 12 types of power wised and Exponential function          |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |    1- m^n                     2-  m^x(+/-)n^y                 3- (m(+/-)n)^x                 |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |    4- m^x(+/-)n^y(+/-)p       5- ((m^x(+/-)n^y)^p)(+/-)x      6- e^x                         |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |    7- e^x(+/-)m               8- e^x(+/-)m)^n                 9- e^x(+/-)e^y                 |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |    10- e^x(+/-)e^y(+/-)m      11- (e^x(+/-)e^y)^p             12- ((e^x(+/-)e^y)^p)(+/-)m    |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |    13- Back to the last list                                                                 |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |______________________________________________________________________________________________|\n\n");
    
    printf(" -> Enter your input: ");
    scanf("%d", &c);
    
       // system("cls");
        printf("\n");

	switch(c)
	{
                case 13:
                        try = 0 ;
                        printf(" # Backing to the last list ... ");
                        system("cls");
                        break;
                        
		case 1:
                        try = 1 ;
			printf(" - m^n function - \n\n");
                        printf(" Enter the value of base (m) : ");
			scanf("%lf", &m);
			printf(" Enter the value of power (n) : ");
			scanf("%lf", &n);
			printf("\n -> %.2lf^%.2lf = %.2lf \n\n " , m, n, pow(m, n));
			break;
                        
		case 2:
                    try = 1 ;
			printf(" - m^x(+/-)n^y function - \n\n");
                        printf(" Enter the value of first base (m) : ");
			scanf("%lf", &m);
			printf(" Enter the value of first base power (x) : ");
			scanf("%lf", &x);
			printf(" -> %.2lf^%.2lf \n", m, x);
			printf(" Enter the value of second base (n) : ");
			scanf("%lf", &n);
			printf(" Enter the value of second base power (y) : ");
			scanf("%lf", &y);
                        printf("\n -> %.2lf^%.2lf \n\n", n, y);
			printf(" -> %.2lf^%.2lf + %.2lf^%.2lf = %.2lf \n    Or    \n", m, x, n, y, (pow(m, x)+pow(n, y)) );
			printf(" -> %.2lf^%.2lf - %.2lf^%.2lf = %.2lf \n\n", m, x, n, y, (pow(m, x)-pow(n, y)) );
			break;
                        
		case 3:
                    try = 1 ;
			printf(" - (m(+/-)n)^p function - \n\n");
                        printf(" Enter the value of first base (m) : ");
			scanf("%lf", &m);
			printf(" Enter the value of second base (n) : ");
			scanf("%lf", &n);
			printf(" Enter the value of the power (p) : ");
			scanf("%lf", &p);
			printf("\n -> (%.2lf + %.2lf)^%.2lf = %.2lf \n    Or    \n", m, n, p,pow(m+n, p));
			printf(" -> (%.2lf - %.2lf)^%.2lf = %.2lf \n\n", m, n, p, pow(m-n, p));
			break;
                        
		case 4:
                    try = 1 ;
			printf(" - m^x(+/-)n^y(+/-)p function - \n\n");
                        printf(" Enter the value of first base (m) : ");
			scanf("%lf", &m);
			printf(" Enter the value of first base power (x) : ");
			scanf("%lf", &x);
			printf(" -> %.2lf^%.2lf\n", m, x);
			printf(" Enter the value of second base (n) : ");
			scanf("%lf", &n);
			printf(" Enter the value of second base power (y) : ");
			scanf("%lf", &y);
			printf(" -> %.2lf^%.2lf(+/-)%.2lf^%.2lf\n", m, x, n, y);
			printf(" Enter the value of the constant (p) : ");
			scanf("%lf", &p);
			printf("\n -> %.2lf^%.2lf + %.2lf^%.2lf + %.2lf = %.2lf \n    Or    \n", m, x, n, y, p,(pow(m, x)+pow(n, y)+p));
			printf(" -> %.2lf^%.2lf + %.2lf^%.2lf - %.2lf = %.2lf \n    Or    \n", m, x, n, y, p,(pow(m, x)+pow(n, y)-p));
			printf(" -> %.2lf^%.2lf - %.2lf^%.2lf + %.2lf = %.2lf \n    Or    \n", m, x, n, y, p,(pow(m, x)-pow(n, y)+p));
			printf(" -> %.2lf^%.2lf - %.2lf^%.2lf - %.2lf = %.2lf \n\n", m, x, n, y, p,(pow(m, x)-pow(n, y)-p));
			break;
                        
		case 5:
                    try = 1 ;
			printf(" - ((m(+/-)n)^p)(+/-)x function - \n\n");
                        printf(" Enter the value of first base (m) : ");
			scanf("%lf", &m);
			printf("Enter the value of second base (n) : ");
			scanf("%lf", &n);
			printf(" Enter the value of the power (p) : ");
			scanf("%lf", &p);
			printf(" (%.2lf(+/-)%.2lf)^%.2lf\n", m, n, p);
			printf(" Enter the value of the constant (x) :");
			scanf("%lf", &x);
			printf("\n -> ((%.2lf + %.2lf)^%.2lf) + %.2lf = %.2lf \n    Or    \n", m, n, p, x, pow(m+n, p)+x);
			printf(" -> ((%.2lf + %.2lf)^%.2lf) - %.2lf = %.2lf \n    Or    \n", m, n, p, x, pow(m+n, p)-x);
			printf(" -> ((%.2lf - %.2lf)^%.2lf) + %.2lf = %.2lf \n    Or    \n", m, n, p, x, pow(m-n, p)+x);
			printf(" -> ((%.2lf - %.2lf)^%.2lf) - %.2lf = %.2lf \n\n", m, n, p, x,pow(m-n, p)-x);
			break;
                        
		case 6:
                    try = 1 ;
			printf(" - e^x function - \n\n");
                        printf(" Enter the value of power (x) : ");
			scanf("%lf", &x);
			printf("\n -> e^%.2lf = %.2lf \n\n", x, exp(x));
			break;
                        
		case 7:
                    try = 1 ;
			printf(" - e^x(+/-)m function - \n\n");
                        printf(" Enter the value of power (x) : ");
			scanf("%lf", &x);
			printf(" -> e^%.2lf\n", x);
			printf(" Enter the value of constant (m) : ");
			scanf("%lf", &m);
			printf("\n -> e^%.2lf + %.2lf = %.2lf \n    OR    \n", x, m,exp(x)+m);
			printf(" -> e^%.2lf - %.2lf = %.2lf \n\n", x, m,exp(x)-m);
			break;
                        
		case 8:
                    try = 1 ;
			printf(" - (e^x(+/-)m)^n function - \n\n");
                        printf(" Enter the value of power (x) : ");
			scanf("%lf", &x);
			printf(" -> e^%.2lf\n", x);
			printf(" Enter the value of constant (m) : ");
			scanf("%lf", &m);
			printf(" -> (e^%.2lf)(+/-)%.2lf \n", x, m);
			printf(" Enter the value of the other power (n) : ");
			scanf("%lf", &n);
			printf("\n -> ((e^%.2lf) + %.2lf)^%.2lf = %.2lf \n    OR    \n", x, m, n,pow(exp(x)+m, n));
			printf(" -> ((e^%.2lf) - %.2lf)^%.2lf = %.2lf \n\n", x, m, n,pow(exp(x)-m, n));
			break;
                        
		case 9:
                    try = 1 ;
			printf(" - e^x(+/-)e^y function - \n\n");
                        printf(" Enter the value of first power (x) : ");
			scanf("%lf", &x);
			printf(" -> e^%.2lf\n", x);
			printf(" Enter the value of second power (y) : ");
			scanf("%lf", &y);
			printf("\n -> (e^%.2lf + e^%.2lf) = %.2lf \n    OR    \n", x, y, exp(x)+exp(y));
			printf(" -> (e^%.2lf - e^%.2lf) = %.2lf \n\n", x, y,exp(x)-exp(y));
			break;
                        
		case 10:
                    try = 1 ;
			printf(" - e^x(+/-)e^y(+/-)m function - \n\n");
                        printf(" Enter the value of first power (x) : ");
			scanf("%lf", &x);
			printf(" -> e^%.2lf\n", x);
			printf(" Enter the value of second power (y) : ");
			scanf("%lf", &y);
			printf(" -> e^%.2lf(+/-)e^%.2lf \n", x, y);
			printf(" Enter the value of the constant (m) : ");
			scanf("%lf", &m);
			printf("\n -> e^%.2lf + e^%.2lf + %.2lf = %.2lf \n    OR    \n", x, y, m,exp(x)+exp(y)+m);
			printf(" -> e^%.2lf + e^%.2lf - %.2lf = %.2lf \n    OR    \n", x, y, m,exp(x)+exp(y)-m);
			printf(" -> e^%.2lf - e^%.2lf + %.2lf = %.2lf \n    OR    \n", x, y, m, exp(x)-exp(y)+m);
			printf(" -> e^%.2lf - e^%.2lf - %.2lf = %.2lf \n\n", x, y, m,exp(x)-exp(y)-m);
			break;
                        
		case 11:
                    try = 1 ;
			printf(" - (e^x(+/-)e^y)^p function - \n\n");
                        printf(" Enter the value of first power (x) : ");
			scanf("%lf", &x);
			printf(" -> e^%.2lf\n", x);
			printf(" Enter the value of the second power (y) :  ");
			scanf("%lf", &y);
			printf(" -> e^%.2lf+/-)e^%.2lf\n", x, y);
			printf(" Enter the value of third power (p) : ");
			scanf("%lf", &p);
			printf("\n -> (e^%.2lf + e^%.2lf)^%.2lf = %.2lf \n    OR    \n", x, y, p, pow(exp(x)+exp(y), p));
			printf(" -> (e^%.2lf - e^%.2lf)^%.2lf = %.2lf \n\n", x, y, p,pow(exp(x)-exp(y), p));
			break;
                        
		case 12:
                    try = 1 ;
			printf(" - (e^x(+/-)e^y)^p)(+/-)m function - \n\n");
                        printf(" Enter the value of first power (x) : ");
			scanf("%lf", &x);
			printf(" -> e^%.2lf\n", x);
			printf(" Enter the value of the second power (y) : ");
			scanf("%lf", &y);
			printf(" -> e^%.2lf(+/-)e^%.2lf\n", x, y);
			printf(" Enter the value of the third power (p) : ");
			scanf("%lf", &p);
			printf(" -> (e^%.2lf(+/-)e^%.2lf)^%.2lf\n", x, y, p);
			printf(" Enter the value of the constant (m) : ");
			scanf("%lf", &m);
			printf("\n -> ((e^%.2lf + e^%.2lf)^%.2lf) + %.2lf = %.2lf \n    OR    \n", x, y, p, m, pow(exp(x)+exp(y), p)+m);
			printf(" -> ((e^%.2lf + e^%.2lf)^%.2lf) - %.2lf = %.2lf \n    OR    \n", x, y, p, m,pow(exp(x)+exp(y), p)-m);
			printf(" -> ((e^%.2lf - e^%.2lf)^%.2lf) + %.2lf = %.2lf \n    OR    \n", x, y, p, m,pow(exp(x)-exp(y), p)+m);
			printf(" -> ((e^%.2lf - e^%.2lf)^%.2lf) - %.2lf = %.2lf \n\n", x, y, p, m,pow(exp(x)-exp(y), p)-m);
			break;
                        
		default:
			printf("\n # wrong key.\n try again.\n");

    }
        
 }while(try == 1);
 
	return 0;
}

//matrix function starts
int matrix()
{
    int counti;
    int try;
    do{

    int c;
    
    try = 0;

    printf("                                     ______________________________________________________________________________________________ \n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |                                   -> Matrix calculation <-                                   |\n");
    printf("                                    |                                -----------------------------                                 |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      1- Addition of two matrix                  2- Subtraction of two matrix                 |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      3- Multiplication of matrix                4- Transpose of matrix                       |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      5- Determinant of matrix                   6- Inverse of matrix                         |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      7- Back to the Calculator Modes list                                                    |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      // To use the previous made operations we saved you the printed operations you did      |\n");
    printf("                                    |______________________________________________________________________________________________|\n\n");
    
    printf(" -> Enter your input: ");
    scanf("%d", &c);
    
        system("cls");
        printf("\n");
    
    //int row1, col1 , row2 , col2; - declared above 
    
   switch(c)//choice 
    {
      
    case 7: 
        counti = 0 ;
        system("cls");
        printf("\n # Backing to the Calculator Modes list ....\n");
              
    break;
    
    case 1:
           counti = 1 ;
           matrix_addition();
           
        break;
        
    case 2:
        counti = 1 ;
        matrix_subtraction();
        break;
        
    case 3 :
        counti = 1 ;
        matrix_multiplication();
        
        break;
        
   case 4:
        counti = 1 ;
        matrix_transpose();
        
        break;
        
    case 5:
        counti = 1 ;
        matrix_determind();
        
        break;
        
    case 6:
        counti = 1 ;
        matrix_inverse();
        break;

    default:
        printf("\n # wrong key.\n try again.\n");
    }

    }while( counti == 1 );
    
    return 0;
}

int matrix_addition()
{
    printf("\n - Addition of two matrix - \n");
    
        printf(" Enter the order of the A Matrix (M x N): \n");
        printf("  Number of rows = ");
        scanf("%d", &row1);
        printf("  Number of columns = ");
        scanf("%d", &column1);
        
    int i , j;
    double a_matrix[row1][column1] , b_matrix[row2][column2] , result_matrix[row1][column1]; 
    
        printf(" Enter the coefficients of the A Matrix: \n");
        for ( i = 0; i < row1 ; ++i)
        {
        for ( j = 0; j < column1 ; ++j)
             {
            printf("  a%d%d = " , i+1, j+1);
            scanf("%lf", &a_matrix[i][j]);
             }
            printf("\n");
        }
        
    printf(" Enter the order of the B Matrix (M x N): \n");
        printf("  Number of rows = ");
        scanf("%d", &row2);
        printf("  Number of columns = ");
        scanf("%d", &column2);
        
    if((row1!=row2)||(column1!=column2))//checking, two matrix can be added if both matrix is dimensionally equal
    {
        printf("\n Sorry! you've made a dimensional error. So, it can't be calculated.\n");
        printf(" Two matrix can be added when both matrix got equal row and column\n\n");
        goto jump;
    }
        
        printf(" Enter the coefficients of the B Matrix: \n");
        for ( i = 0; i < row2 ; ++i)
        {
        for ( j = 0; j < column2 ; ++j)
            {
            printf("  b%d%d = " , i+1, j+1);
            scanf("%lf", &b_matrix[i][j]);
            }
            printf("\n");
        }
        
        system("cls");
        
        printf("\n -> A matrix: \n");
        for ( i = 0; i < row1 ; ++i)
        {
        for ( j = 0; j < column1 ; ++j)
            {
            printf("    %.2lf   " , a_matrix[i][j]);
            }
            printf("\n");
        }
        
        printf("\n -> B matrix: \n");
        for ( i = 0; i < row2 ; ++i)
        {
        for ( j = 0; j < column2 ; ++j)
            {
            printf("    %.2lf   " , b_matrix[i][j]);
            }
            printf("\n");
        }

        printf("\n -> The result of A+B: \n");//result
              for(i=0;i<row1;i++)
            {
              for(j=0;j<column1;j++)
              {
                result_matrix[i][j]= a_matrix[i][j] + b_matrix[i][j];
                printf("    %.2lf   ", result_matrix[i][j]); 
              }
            printf("\n");
        }
        printf("\n");
        
        jump:
        printf("\n\n");
        
        
}

int matrix_subtraction()
{
    printf("\n - Subtraction of two matrix - \n");
        printf(" Enter the order of the A Matrix (M x N): \n");
        printf("  Number of rows = ");
        scanf("%d", &row1);
        printf("  Number of columns = ");
        scanf("%d", &column1);
        
    int i , j;
    double a_matrix[row1][column1] , b_matrix[row2][column2] , result_matrix[row1][column1]; 
    
        printf(" Enter the coefficients of the A Matrix: \n");
        for ( i = 0; i < row1 ; ++i)
        {
        for ( j = 0; j < column1 ; ++j)
             {
            printf("  a%d%d = " , i+1, j+1);
            scanf("%lf", &a_matrix[i][j]);
             }
            printf("\n");
        }
        
    printf(" Enter the order of the B Matrix (M x N): \n");
        printf("  Number of rows = ");
        scanf("%d", &row2);
        printf("  Number of columns = ");
        scanf("%d", &column2);
        
        if((row1!=row2)||(column1!=column2))
    {
        printf("\n Sorry! you've made a dimensional error. So, it can't be calculated.\n");
        printf(" Two matrix can be added when both matrix got equal row and column\n\n");
        goto jump; //go to jump
    }
          
        printf(" Enter the coefficients of the B Matrix: \n");
        for ( i = 0; i < row2 ; ++i)
        {
        for ( j = 0; j < column2 ; ++j)
            {
            printf("  b%d%d = " , i+1, j+1);
            scanf("%lf", &b_matrix[i][j]);
            }
            printf("\n");
        }
        
        system("cls");
        
        printf("\n -> A matrix: \n");
        for ( i = 0; i < row1 ; ++i)
        {
        for ( j = 0; j < column1 ; ++j)
            {
            printf("    %.2lf   " , a_matrix[i][j]);
            }
            printf("\n");
        }
        
        printf("\n -> B matrix: \n");
        for ( i = 0; i < row2 ; ++i)
        {
        for ( j = 0; j < column2 ; ++j)
            {
            printf("    %.2lf   " , b_matrix[i][j]);
            }
            printf("\n");
        }

        
        jumphere:
        printf("\n Enter 1 for (A-B).\n");
        printf(" Enter 2 for (B-A).\n");
        int s_choice;
        printf(" choice: ");
        scanf("%d", &s_choice);
        
        switch(s_choice)
        {
            case 1:
              printf("\n -> A-B : \n");
                
              for(i=0;i<row1;i++)
            {
              for(j=0;j<column1;j++)
              {
                result_matrix[i][j]= a_matrix[i][j] - b_matrix[i][j];//A-B matrix
                printf("    %.2lf   ", result_matrix[i][j]); 
              }
            printf("\n");
            }
            printf("\n");
            
            break;
            
            case 2 :
                
            printf("\n -> B-A : \n");
                
              for(i=0;i<row1;i++)
            {
              for(j=0;j<column1;j++)
              {
                result_matrix[i][j]= b_matrix[i][j] - a_matrix[i][j];//B-A matrix
                printf("    %.2lf   ", result_matrix[i][j]); 
              }
            printf("\n");
            }
            printf("\n");
            
            break; 
            
            default:
                printf(" Wrong input. Try again.\n");
                goto jumphere; // backing to jumphere
        }
        
        jump:
        printf("\n\n");
                
} 

int matrix_multiplication(){

    printf("\n - Multiplication of Matrix - \n");

        printf(" Enter the order of the A Matrix (M x N): \n");
        printf("  Number of rows = ");
        scanf("%d", &row1);
        printf("  Number of columns = ");
        scanf("%d", &column1);
        
    int i , j , k;
    double a_matrix[row1][column1] , result_matrix[row1][column1] ; 
    
        printf(" Enter the coefficients of the A Matrix: \n");
        for ( i = 0; i < row1 ; ++i)
        {
        for ( j = 0; j < column1 ; ++j)
             {
            printf("  a%d%d = " , i+1, j+1);
            scanf("%lf", &a_matrix[i][j]);
             }
            printf("\n");
        }
        
    printf(" Enter the order of the B Matrix (M x N): \n");
        printf("  Number of rows = ");
        scanf("%d", &row2);
        printf("  Number of columns = ");
        scanf("%d", &column2);
        double  b_matrix[row2][column2];
        
     if(column1!=row2){//checking, two matrix can be multiplied when the A matrix columns equal to the B matrix rows 
    
        printf("\n Sorry! you've made a dimensional error. So, it can't be calculated.\n");
        printf(" Two matrix can be multiplied when the A matrix columns equal to the B matrix rows \n\n");
        goto jump; //go to jump
    }
        
        printf(" Enter the coefficients of the B Matrix: \n");
        for ( i = 0; i < row2 ; ++i)
        {
        for ( j = 0; j < column2 ; ++j)
            {
            printf("  b%d%d = " , i+1, j+1);
            scanf("%lf", &b_matrix[i][j]);
            }
            printf("\n");
        }
        
        system("cls");
        
        printf("\n -> A matrix: \n");
        for ( i = 0; i < row1 ; ++i)
        {
        for ( j = 0; j < column1 ; ++j)
            {
            printf("    %.2lf   " , a_matrix[i][j]);
            }
            printf("\n");
        }
        
        printf("\n -> B matrix: \n");
        for ( i = 0; i < row2 ; ++i)
        {
        for ( j = 0; j < column2 ; ++j)
            {
            printf("    %.2lf   " , b_matrix[i][j]);
            }
            printf("\n");
        }
        
        jumphere:
        printf("\n Enter 1 for (AxB).\n");
        printf(" Enter 2 for (BxA).\n");
        int s_choice;
        printf(" choice: ");
        scanf("%d", &s_choice);
        
        switch(s_choice)
        {
            case 1:
              printf("\n -> AxB : \n");
                
            for( i = 0 ; i < row1  ; i++ ){
            
                for( j =0 ; j< column2 ; j++ ){
                double sum_ab = 0;
                for( k = 0 ; k < column1 ; k++){
                sum_ab += a_matrix[i][k] * b_matrix[k][j];
                }
               result_matrix[i][j] = sum_ab ; 

                }
            }
        
        
            printf(" -> The result of A x B: \n");
            for(i=0;i<row1;i++){
              for(j=0;j<column2;j++)
              {
                printf("    %.2lf   " , result_matrix[i][j]); 
              }
              printf("\n");
            }
            printf("\n\n");
            
            break;
            
            case 2 :
                
            printf("\n -> BxA : \n");
                
            for( i = 0 ; i < row2  ; i++ ){
                for( j =0 ; j< column1 ; j++ ){
                double sum_ba = 0;
                for( k = 0 ; k < column2 ; k++){
            sum_ba +=  b_matrix[i][k] * a_matrix[k][j];
                }
               result_matrix[i][j] = sum_ba ; 

            }
        }
        
        
       printf(" -> The result of B x A: \n");//result
            for(i=0;i<row2;i++)
            {
              for(j=0;j<column1;j++)
              {
                printf("    %.2lf   " , result_matrix[i][j]); 
              }
              printf("\n");
            }
        printf("\n\n");
            
            break; 
            
            default:
                printf(" Wrong input. Try again.\n");
                goto jumphere; // backing to jumphere
        }
        
        jump:
        printf("\n\n");

}

int matrix_transpose()
{
     printf("\n - Transpose of Matrix - \n");
        printf(" Enter the order of the Matrix (M x N): \n");
        printf("  Number of rows = ");
        scanf("%d", &row1);
        printf("  Number of columns = ");
        scanf("%d", &column1);
        
        if(row1!=column1){
        printf("\n Dimensional error. it can't be calculated.\n");
        printf(" Transpose of matrix will be valid if row and column is equal. \n Try again\n\n");
        }
        else{
        int i , j;
        double matrix[row1][column1]; 
    
        printf(" Enter the coefficients of the  Matrix: \n");
        for ( i = 0; i < row1 ; ++i)
        {
        for ( j = 0; j < column1 ; ++j)
             {
            printf("  a%d%d = " , i+1, j+1);
            scanf("%lf", &matrix[i][j]);
             }
            printf("\n");
        }
                
        system("cls");
        
        printf("\n -> The matrix: \n");
        for ( i = 0; i < row1 ; ++i)
        {
        for ( j = 0; j < column1 ; ++j)
            {
            printf("    %.2lf   " , matrix[i][j]);
            }
            printf("\n");
        }

        double result_matrix[row1][column1];
        printf("\n -> The Transpose of the matrix: \n");
              for(i=0;i<row1;i++)
            {
              for(j=0;j<column1;j++)
              {
                result_matrix[i][j]= matrix[j][i];
                printf("    %.2lf   ", result_matrix[i][j]); 
              }
            printf("\n");
        }
        printf("\n");
        
        }
}

void matrix_determind(){
    
      printf("\n - determinant of Matrix - \n");
        double determinant ;

        printf("\n Enter the order of the Matrix (M x N): \n");
        printf("  Number of rows = ");
        scanf("%d", &row1);
        printf("  Number of columns = ");
        scanf("%d", &column1);
        
        if(row1!=column1){
        printf("\n Dimensional error. it can't be calculated.\n");
        printf(" Determinant of matrix will be valid if row and column is equal. \n Try again\n\n");
        }
        else{
        
        int i , j ;
        double matrix[row1][column1]; 
    
        printf(" Enter the coefficients of the  Matrix: \n");
        for ( i = 0; i < row1 ; ++i)
        {
        for ( j = 0; j < column1 ; ++j)
             {
            printf("  a%d%d = " , i+1, j+1);
            scanf("%lf", &matrix[i][j]);
             }
            printf("\n");
        }
                
        system("cls");
        
        printf("\n -> The matrix: \n");
        for (i = 0; i < row1 ; ++i)
        {
        for (j = 0; j < column1 ; ++j)
            {
            printf("    %.2lf   " , matrix[i][j]);
            }
            printf("\n");
        }
        
        determinant = determinant_c(matrix , row1);
        printf("\n -> The determinant of the matrix = %.2lf \n" ,determinant );
        printf("\n\n");
        }
}

double determinant_c(double A[row1][column1] , int row1){

    int row_size = row1 ;
    int column_size = column1 ;
    double s = 1, det = 0, B[row_size][column_size];
    
    if (row_size == 1){ // 1x1
        return (A[0][0]);

    }else
    {
     int i, j, m, n, c; // row , column of minor
     det = 0;
     for (c = 0; c < row_size; c++)
       {
        m = 0;
        n = 0;
        for (i = 0;i < row_size; i++)
          {
            for (j = 0 ;j < row_size; j++)
              {
                B[i][j] = 0;
                if (i != 0 && j != c)
                 {
                   B[m][n] = A[i][j];
                   if (n < (row_size - 2)){
                    n++;
                   }else
                    {
                     n = 0;
                     m++;
                     }
                   }
               }
             }
          det = det + s * (A[0][c] * determinant_c(B, row_size - 1));
          s = -1 * s;
          }
       return (det);
    }

}

int matrix_inverse(){
    
        printf("\n - Inverse of Matrix - \n");

        printf("\n Enter the order of the Matrix (M x N): \n");
        printf("  Number of rows = ");
        scanf("%d", &row1);
        printf("  Number of columns = ");
        scanf("%d", &column1);
        double matrix[row1][column1] , d ; 
 
        if(row1!=column1){
        printf("\n Dimensional error. it can't be calculated.\n");
        printf(" Determinant of matrix will be valid if row and column is equal. \n Try again\n\n");
        }else{
        
        int i , j ;
    
        printf(" Enter the coefficients of the  Matrix: \n");
        for ( i = 0; i < row1 ; ++i){
             for ( j = 0; j < row1 ; ++j)
             {
            printf("  a%d%d = " , i+1, j+1);
            scanf("%lf", &matrix[i][j]);
             }
            printf("\n");
        }
                
        system("cls");
        
        printf("\n -> The matrix: \n");
        for (i = 0; i < row1 ; ++i){
            for (j = 0; j < row1 ; ++j)
            {
            printf("    %.2lf   " , matrix[i][j]);
            }
            printf("\n");
        }

        d = determinant_c(matrix , row1) ;

        if (d == 0){
	  printf("\n Matrix is not inversible \n"); 
        }else{
	  cofactors(matrix , row1);
        }
     
   }
}

void cofactors(double A[row1][column1] , int row1) {
 
    int row_size = row1 ;
        
    double b[row_size][row_size], fac[row_size][row_size];
    int p, q, m, n, i, j;
 
    for (q = 0; q < row_size; q++) {
 	for (p = 0; p < row_size; p++) {
 
            m = 0;
            n = 0;
 
            for (i = 0; i < row_size; i++) {
                for (j = 0; j < row_size; j++) {
                    //b[i][j] = 0;
                    if (i != q && j != p) {
                        b[m][n] = A[i][j];
 
                        if (n < (row_size - 2))
                            n++; 
                        else {
                            n = 0;
                            m++;
                        } 
                    }
                }
            }
 			fac[q][p] = pow(-1, q + p) * determinant_c(b , row_size-1);
	}
    }
	trans(A,fac,row_size);
 
}

void trans(double A[row1][column1] , double B[row1][column1] , int row1 ){
    
    int row_size = row1 ;
    int column_size = row1 ;
    int i, j;
 
	double c[row_size][column_size], inv[row_size][column_size], d;
 
	for (i = 0; i < row_size; i++) {
 
		for (j = 0; j < row_size; j++) {
 
			c[i][j] = B[j][i];
 
		}
 
	}
 
	d = determinant_c(A , row_size);

	for (i = 0; i < row_size; i++) {
 
		for (j = 0; j < row_size; j++) {
 
			inv[i][j] = c[i][j] / d ;
 
		}
 
	}
 
	printf("\n THE INVERSE OF THE MATRIX:\n");
 
	for (i = 0; i < row_size; i++) {
 
		for (j = 0; j < row_size; j++) {
 
			printf("    %.2lf   ", inv[i][j]);
 
		}
 
		printf("\n");
 
	}
        
        printf("\n\n");

}

void factorial()
{
    int counti;
    do{
    
        printf("\n - Factorial - ");
    counti = 0 ;
    int fac[10000]; // Maximum number of digits in output
    int n , x, i ;
    printf("\n Enter a number to get its factorial value: ");
    scanf("%d", &n);
    
    if( n >= 0){
    fac[0] = 1; 
    int fac_size = 1; 
   
    for (x=2; x<=n; x++){ 
        fac_size = multiply_factorial( x, fac, fac_size); // recursion
    }
    printf(" Factorial of %d is: " , n); 
    for ( i= fac_size-1 ; i>=0 ; i--){ 
        printf("%d" , fac[i]); }
    
    }else{ printf(" Factorial can not be negative. \n");
          counti = 1 ; }
    
   if( n >= 0) {
       printf("\n\n  # for doing other -  Factorial - operator - input 1 , other numbers will back to the - Calculator Modes - list: ");
       scanf("%d" , &counti);
       system("cls");  }
    
    }while( counti == 1);
     system("cls");
     printf("\n # Backing to the Calculator Modes list ....\n");
}

 int multiply_factorial(int x, int fac[], int fac_size) 
{ 
    int fac_save = 0 , i; 
  
    // One by one multiply n with individual digits of fac[] 
    for ( i=0; i<fac_size; i++) 
    { 
        int prod = fac[i] * x + fac_save; 
  
        // Store last digit of 'prod' in fac[] (array)
        fac[i] = prod % 10;   
  
        // Put rest in fac_save 
        fac_save  = prod/10;     
    } 
  
    // Put fac_save in fac and increase result size 
    while (fac_save) 
    { 
        fac[fac_size] = fac_save%10; 
        fac_save = fac_save/10; 
        fac_size++; 
    } 
    return fac_size; 
} 


int prime()
{
    int try;
    do{
    
    try =0 ;
    printf("                                     ______________________________________________________________________________________________ \n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |                                 -> Prime number  calculation <-                              |\n");
    printf("                                    |                                  -----------------------------                               |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      1- single prime numbers             2- total prime numbers between two numbers          |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      3- Back to the Calculator Modes list                                                    |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |______________________________________________________________________________________________|\n\n");

    int c;
    printf(" -> Enter your input: ");
    scanf("%d", &c);
    
        system("cls");
        printf("\n");
 
    switch(c)
    {
        case 3:
            try = 0 ;
            system("cls");
            printf("\n # Backing to the Calculator Modes list ....\n"); 
        break;
        
        case 1:
            try =1;
            single_prime_number();
        break;
  
        case 2:
            try =1;
            total_prime_number();
        break;
 
        default:
            printf(" \n Wrong key.\n try again. \n\n");
    }
    
    }while( try == 1);
 
}

int single_prime_number()
{
    printf("\n - Single prime number - \n\n");
    printf(" Enter number to check : ");
    int n;
    scanf("%d", &n);
 
    int i=2 , temp=0; // prime numbers starts from 2
    while(i<n){
        
        if(n%i==0)
        {
             temp++;
        }
        i++;
    }
    if(temp!=0 || n < 2){ printf("\n -> %d isn't a prime number.\n\n", n);}
    else { printf("\n -> %d is a prime number.\n\n" , n);}
}

int total_prime_number()
{
    printf("\n - total prime numbers between two numbers - \n\n");
    printf(" # Enter two number to check total prime number between them. \n\n");
    printf("\n Enter the first number: ");
    int a, b;
    scanf("%d", &a);
    printf(" Enter the second number: "); 
    scanf("%d", &b);
    printf("\n -> %d to %d \n", a , b);
    
    int temp , temp1; 
    if(a==b)
    {
            printf(" The difference between %d to %d to is 0 \n", a, b);
            int i=2 , temp=0; // prime numbers starts from 2
            
            while(i<b){
                
                 if(b%i==0)
                {
                     temp++;
                }
                i++;
            }
            if(temp!=0 || b < 2){ printf("\n -> %d isn't a prime number.\n", b);}
            else { printf("\n -> %d is a prime number.\n\n", b);}
    }

    else{  
  
        if(b<a)
    {
        temp=a;
        a=b;
        b=temp; // b is the second value and a is the first
    }
    int i=a, count=0, x[b-a]; 
    while(i<=b) // from a to b
    {
        int j=2;
        temp1=0; 
        while(j<i) 
        {
            if(i%j==0)
            {
                temp1++;
            }
            j++;
        }
        if( (temp1==0) && i >=2)
        {
            x[count]=i;
            count++;
        }
        i++;
    }
    printf("\n -> There is total %d prime numbers between %d to %d \n", count, a, b);
    int g ;
    printf("    And they are: \n   ");
    for(g=0;g<count;g++)
    {
        printf(" %d ", x[g]);
        if(g<count-1) printf(",");
    }
    printf("\n\n");
    } 
}

 #define PI 3.14159 // PI value
int trigometry()
{
    int try;
    
    do{
        
        int c ;
        try = 0;
        
    printf("                                     ______________________________________________________________________________________________ \n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |                                 -> Trigonometric calculation <-                              |\n");
    printf("                                    |                                  -----------------------------                               |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      1- Conversion of Radian and Degree           2- Trigonometric functions                 |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      3- Pythagorean theorem                                                                  |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      4- Back to the Calculator Modes list                                                    |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |______________________________________________________________________________________________|\n\n");
    
    printf(" -> Enter your input: ");
    scanf("%d", &c);
    
        system("cls");
        printf("\n");

    switch(c)
    {
        
    case 4:
        try = 0 ;
        system("cls");
        printf("\n # Backing to the Calculator Modes list ....\n"); 
        break;
        
    case 1:
        try = 1 ;
        rad_deg_con();
        break;
        
    case 2:
        try = 1 ;
        trigonometry_function();
        break;
        
    case 3:
        try =1 ;
        pythagorean_theorem();
        break;
        
    default:
        try = 1 ;
        printf(" Wrong key.\n try again.\n\n");
    
    }
        
    }while(try == 1);

    return 0;
}

void pythagorean_theorem(){

    jumphere:
        system("cls");
    printf("\n - Pythagorean theorem - \n\n");
    printf("         |\\         \n");
    printf("         | \\        \n");
    printf("         |  \\ h     \n");
    printf("       a |   \\      \n");
    printf("         |    \\     \n");
    printf("         |90__d\\    \n");
    printf("            b        \n\n");
    
    double a ,b ,h ,d , x;
    printf(" 1- To get value of a \n");
    printf(" 2- To get value of b \n");
    printf(" 3- To get value of h \n");
    printf(" 4- To get value d degree \n\n");
    int choice;
    printf(" -> Enter your input: ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        printf("\n - get value of a - \n");
        printf(" Enter b value: ");
        scanf("%lf", &b);
        printf(" Enter h value: ");
        scanf("%lf", &h);
        a = sqrt((h*h) - (b*b));
        printf("\n The  value of a is = %.2lf .\n",a);
        decimalToFraction(a);
        break;
        
    case 2:
        printf("\n - get value of b - \n");
        printf(" Enter 'a' value: ");
        scanf("%lf", &a);
        printf(" Enter 'h' value: ");
        scanf("%lf", &h);
        a = sqrt((h*h) - (a*a));
        printf("\n The  value of a is = %.2lf .\n",b);
        decimalToFraction(b);
        break;
        
    case 3:
        printf("\n - get value of h - \n");
        printf(" Enter 'a' value: ");
        scanf("%lf", &a);
        printf(" Enter 'b' value: ");
        scanf("%lf", &b);
        h = sqrt((b*b) + (a*a));
        printf("\n The  value of a is = %.2lf .\n",h);
        decimalToFraction(h);
        break;
        
    case 4:
        jumphere1:
        printf("\n - get degree of d - \n");
        printf(" 1- By Length \n");
        printf(" 2- By degrees \n");
        int c_degree;
        printf(" -> Enter your input: ");
        scanf("%d", &c_degree);
        switch(c_degree){
            case 1 :
                printf("\n Enter 'a' value: ");
                scanf("%lf", &a);
                printf(" Enter 'b' value: ");
                scanf("%lf", &b);
                d = (a/b) ;
                d = atan(d) * (180.0/PI);
                printf("\n The value of 'd' degree is = %.2lf\n\n" , d);
                break;
                
            case 2 :
                printf("\n Enter degree that opposite of b : ");
                scanf("%lf", &x);
                if(90 > x){
                d = 180 - 90 - x;
                printf("\n The value of d degree is = %.2lf\n\n" , d);
                }else { printf(" Wrong degree , must be smaller than 90 \n\n");}
                break;
                
            default:    
                printf(" Wrong key.\n try again.\n\n");
                goto jumphere1;
        }
        break;
 
        
    default:
        printf(" Wrong key.\n try again.\n\n");
        goto jumphere;
    }
}



int rad_deg_con()
{
    jumphere:
    printf(" - Conversion of Radian and Degree -\n\n");
    printf(" 1- Conversion of Degree to Radian \n");
    printf(" 2- Conversion of Radian to Degree \n");
    int r_d_choose;
    printf(" -> Enter your input: ");
    scanf("%d", &r_d_choose);

    switch(r_d_choose)
    {
        double d;
    case 1:
        printf("\n - Degree to Radian - \n Enter a Degree value: ");
        scanf("%lf", &d);
        printf("\n The Radian value of %.2lf Degree is = %.4lf Radians.\n", d, (d*PI)/180);
        decimalToFraction((d*PI)/180 );
        break;
        
    case 2:
        printf("\n - Radian to Degree - \n Enter a Radian value n in decimal form  (n x ?): ");
        scanf("%lf", &d);
        printf("\n The Degree value of %.3lf Radian is = %.4lf Degree.\n\n", d, (180*d)/PI);
        break;
        
    default:
        printf(" Wrong key.\n try again.\n\n");
        goto jumphere;
    }
}



#define PI 3.14159
int trigonometry_function()
{
		  system("cls");  
    int try;
    do{
      
    try = 1;
    jumphere:
        
    printf("\n");
    printf("                                     ______________________________________________________________________________________________ \n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |                                 -> Trigonometric functions <-                                |\n");
    printf("                                    |                                  -----------------------------                               |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      1- sin(x)            2- cos(x)            3- tan(x)            4-cot(x)                 |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      5- sec(x)            6- cosec(x)          7- Back to the last list                      |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |______________________________________________________________________________________________|\n\n");
    
    printf(" -> Enter your input: ");
    int tri_choose;
    scanf("%d", &tri_choose);
    
    if( tri_choose == 7){
        try = 0;
        printf(" # Backing to the last list .... \n");
        system("cls");
        break;
    }
    
    jumphere1:
    printf("\n 1- Inputting Degree value \n");
    printf(" 2- Inputting Radian value \n");
    printf(" -> Enter your input: ");
    int d_r_choose;
    scanf("%d", &d_r_choose);
    
    double d , r ;
    switch(d_r_choose)
    {
        case 1:
            printf("\n Input the degree value: ");
            scanf("%lf" , &d);
            r = (d*PI)/180;
            break;
            
        case 2:
            printf("\n Input the Radian value n in decimal form (n x ?): ");
            scanf("%lf" , &r);
            d = (180*r)/PI;
            break;
            
        default:
            printf(" Wrong input, try again\n");
           goto jumphere1;
        
    }

    switch(tri_choose)
    {
        case 1:
            printf(" sin(%.2lf Degree or %.3lf? Radian) = %.3lf\n", d, r , sin(r));
            break;
        case 2:
            printf(" cos(%.2lf Degree or %.3lf? Radian) = %.3lf\n", d, r, cos(r));
            break;
        case 3:
            printf(" tan(%.2lf Degree or %.3lf? Radian) = %.3lf\n", d , r, tan(r));
            break;
        case 4:
            printf(" cot(%.2lf Degree or %.3lf? Radian) = %.3lf\n", d, r, 1/tan(r));
            break;
        case 5:
            printf(" sec(%.2lf Degree or %.3lf? Radian) = %.3lf\n", d, r, 1/cos(d));
            break;
        case 6:
            printf(" cosec(%.2lf Degree or %.3lf? Radian) = %.3lf\n", d, r, 1/sin(r));
            break;
        default:
            printf(" Wrong input, try again\n");
            goto jumphere;
    }
  }while(try =1 );
}

int logarithm_function()
{
    int try;
    double b, x;
 
    do{
        
        int c ;
        try = 0;
        
    printf("                                     ______________________________________________________________________________________________ \n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |                                  -> Logarithm calculation <-                                 |\n");
    printf("                                    |                                 -----------------------------                                |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      1- For 10 base Logarithm                    2- For for n base Logarithm                 |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      3- For e base Logarithm                                                                 |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      4- Back to the Calculator Modes list                                                    |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |______________________________________________________________________________________________|\n\n");
    
    printf(" -> Enter your input: ");
    scanf("%d", &c);
    
        system("cls");
        printf("\n");

    switch(c)
    {
        
    case 4:
        try = 0 ;
        system("cls");
        printf("\n # Backing to the Calculator Modes list ....\n"); 
        break;
        
    case 1:
        try = 1 ;
        printf(" - 10 base Logarithm or log10(real number)calculation - \n");
    	printf("\n    Log10(x) - input value of x - : ");
    	scanf("%lf", &x);
    	if(x>0){
        printf("\n -> Log10(%.2lf) = %.2lf \n", x, log10(x) ); }
    	else{ printf(" Math Error. \n");
             printf(" N.B: Logarithm is only valid for 1 to infinity. \n Try again. \n\n"); }
 
        break;
        
    case 2:
        try = 1 ;
        printf(" - b base Logarithm or log(base)(real number)calculation - \n");
    	printf("\n     Log of (x) : ");
    	scanf("%lf", &x);
	printf("     base: ");
    	scanf("%lf", &b);
    	if(x>0&&b>0){
           printf("\n -> Log%d(%.2lf) = %.2lf\n", (int)b , x , log(x)/log(b)); }
    	else{ printf(" Math Error.\n Try again. \n"); }
 
        break;

    case 3:
        try = 1 ;
        printf(" - e base Logarithm or ln(real number) calculation - \n");
    	printf("\n     Log e of (x) - ln(X): ");
    	scanf("%lf", &x);
    	if(x>0){ 
           printf("\n -> Log e (%.2lf) = %.2lf \n", x , log(x));  }
    	else { printf(" Math Error.\n Try again.\n"); }
 
        break;
        
    default:
        try = 1 ;
        printf(" Wrong key.\n try again.\n\n");
    
    }
        
    }while(try == 1);

    return 0;
}

void eqn(){

    int try;
    
    do{
        
        int c ;
        try = 0;
        
    printf("                                     ______________________________________________________________________________________________ \n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |                               -> Equation solution calculation <-                            |\n");
    printf("                                    |                               -----------------------------------                            |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      1- anx + bny = cn                         2- anx + bny + cnz = dn                       |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      3- ax^2 + bx + c = 0                      4- ax^3 + bx^2 + cx + d = 0                   |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      5- Back to the Calculator Modes list                                                    |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |______________________________________________________________________________________________|\n\n");
    
    printf(" -> Enter your input: ");
    scanf("%d", &c);
    
        system("cls");
        printf("\n");

    switch(c)
    {
        
    case 5:
        try = 0 ;
        system("cls");
        printf("\n # Backing to the Calculator Modes list ....\n"); 
        break;
        
    case 1:
        try = 1 ;
        two_linear();
        break;
        
    case 2:
        try = 1 ;
        three_linear();
        break;
        
    case 3:
        try =1 ;
        quadratic_eqn();
        break;
        
    case 4: 
        try =1;
        cubic_eqn();
        break;
            
    default:
        try = 1 ;
        printf(" Wrong key.\n try again.\n\n");
    
    }
        
    }while(try == 1);

}

void quadratic_eqn(){

    printf("\n - ax^2 + bx + c = 0 - \n\n");
    
    double a, b, c , discriminant, root1, root2, realPart, imagPart ;
    printf(" Enter coefficient a : ");
    scanf("%lf", &a);
    printf(" -> %.2fx^2 + bx + c = 0 \n",a);
    printf(" Enter coefficient b : ");
    scanf("%lf", &b);
    if(b <0){ printf(" -> %.2lfx^2 %.2lfx + c = 0 \n",a , b); }
    else {   printf(" -> %.2lfx^2 + %.2lfx + c = 0 \n",a , b);  }
    printf(" Enter coefficient c : ");
    scanf("%lf", &c);
    if(c <0 && b <0){ printf(" -> %.2lfx^2 %.2lfx %.2lf = 0 \n",a , b , c); }
    else if(c <0 ) {   printf(" -> %.2lfx^2 + %.2lfx %.2lf = 0 \n",a , b , c);  }
    else if(b <0 ) {   printf(" -> %.2lfx^2  %.2lfx + %.2lf = 0 \n",a , b , c);  }
    else {   printf(" -> %.2lfx^2 + %.2lfx + %.2lf = 0 \n",a , b , c);  }
    
    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\n -> root 1 = %.2lf \n" , root1);
        printf(" -> root 2 = %.2lf \n\n", root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("\n -> root1 = root2 = %.2lf \n\n", root1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("\n -> root1 = %.2lf + %.2lfi \n" , realPart, imagPart);
        printf(" -> root2 = %.2f - %.2fi \n\n", realPart, imagPart);
    }
    
}

void cubic_eqn(){
    
    printf("\n - ax^3 + bx^2 + cx + d = 0 - \n\n");
    
    double f_x ;
    int poly3[3] , poly2[3]  , r ;
    
    printf(" Enter coefficient a : ");
    scanf("%d", &poly3[0]);
    printf(" Enter coefficient b : ");
    scanf("%d", &poly3[1]);
    printf(" Enter coefficient c : ");
    scanf("%d", &poly3[2]);
    printf(" Enter coefficient d : ");
    scanf("%d", &poly3[3]);
    printf("\n -> %dx^3 + (%d)x^2 + (%d)x + (%d) = 0 \n\n" ,poly3[0],poly3[1],poly3[2],poly3[3]);
    
    for( r = -20 ; r <= 20 ; r++ ){
        
        f_x = (poly3[0]*r*r*r) + (poly3[1]*r*r) + (poly3[2]*r) + (poly3[3]);
        if(f_x == 0 ){
           // first factor 
            break;
        }
        
    }
    
    if(r != 21){
                
                int i, m=3;
                poly2[0] = poly3[0];
                for(i=1;i<=m;i++){
                    
                    poly2[i] = (poly2[i-1]*r) + poly3[i];
                }

                printf("\n -> (x+(%d))( %dx^2 + (%d)x + (%d) ) = 0 \n",r,poly2[0],poly2[1],poly2[2]);
                
   double a = poly2[0] , b = poly2[1], c = poly2[2], discriminant, root1, root2, root3= r , realPart, imagPart ;
     
    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\n -> root 1 = %.2lf \n" , root1);
        printf(" -> root 2 = %.2lf \n", root2);
        printf(" -> root 3 = %.2lf \n\n", root3);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("\n -> root1 = root2 = %.2lf \n", root1);
        printf(" -> root 3 = %.2lf \n\n", root3);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("\n -> root1 = %.2lf+%.2lfi \n" , realPart, imagPart);
        printf(" -> root2 = %.2f-%.2fi \n", realPart, imagPart);
        printf(" -> root 3 = %.2lf \n\n", root3);
    }
    
    }else{ printf("\n Sorry, we could not get the factors of this equation.\n Try other variables \n"); }

}

void two_linear(){
    
    printf("\n - anx + bny = cn - \n\n");
    double a , b , c , i , j , k , x , y ;
    printf(" Enter the coefficents of the first equation - ax + by = c - \n");
    printf("  a: ");
    scanf("%lf",&a); 
    printf("  b: ");
    scanf("%lf",&b); 
    printf("  c: ");
    scanf("%lf",&c); 
    if(b <0 ) {   printf(" -> %.0lfx %.0lfy = %.0lf  \n\n",a , b , c);  }
    else {   printf(" -> %.0lfx + %.0lfy = %.0lf  \n\n",a , b , c);  }
    printf(" Enter the coefficents of the second equation - ix + jy = k - \n");
    printf("  i: ");
    scanf("%lf",&i); 
    printf("  j: ");
    scanf("%lf",&j); 
    printf("  k: ");
    scanf("%lf",&k);
    if(b <0 ) {   printf(" -> %.0lfx %.0lfy = %.0lf  \n\n",i , j , k);  }
    else {   printf(" -> %.0lfx + %.0lfy = %.0lf  \n\n",i , j , k);  }
    if( ((a*j-j*b)!=0) && ((b*i-j*a)!=0) )
    {//In this case we have a unique solution
        printf("\n # The solution to the equations is unique \n");
        x=(c*j-k*b)/(a*j-i*b);
        y=(c*i-k*a)/(b*i-j*a);
        printf(" -> The value of x = %lf \n",x);
        printf(" -> The value of y = %lf \n\n",y);
    }
    else
        if(((a*j-i*b)==0)&&((b*i-j*a)==0)&&((c*j-k*b)==0)&&((c*i-k*a)==0))// infinitely many solutions to the equation.
        {//When we have such a condition than mathematically we can choose any one unknown as free and other unknown can be calculated using the free variables's value.
            printf("\n # Infinitely many solutions are possible \n");
            printf(" - y can be calculated according to x's value using - \n");
            printf("\n -> The relation y = %lf + (%lf)x \n\n",(c/b),(-1*a/b));
        }
        else
            if(((a*j-i*b)==0)&&((b*i-j*a)==0)&&((c*j-k*b)!=0)&&((c*i-k*a)!=0))//no solutions are possible.
            printf(" -> No solutions are possible\n\n");

}

void three_linear(){
    
        printf("\n - anx + bny + cnz = dn - \n\n");
    double a , b , c , d , i , j , k , m , p , q , r , s , x , y , z , H ;

    printf(" Enter the coefficents of the first equation - ax + by + cz = d - \n");
    printf("  a: ");
    scanf("%lf",&a); 
    printf("  b: ");
    scanf("%lf",&b); 
    printf("  c: ");
    scanf("%lf",&c); 
    printf("  d: ");
    scanf("%lf",&d); 
    printf(" -> %.0lfx + (%.0lf)y + (%.0lf)z = %.0lf  \n\n",a , b , c , d);  
    printf(" Enter the coefficents of the second equation - ix + jy + kz = m - \n");
    printf("  i: ");
    scanf("%lf",&i); 
    printf("  j: ");
    scanf("%lf",&j); 
    printf("  k: ");
    scanf("%lf",&k);
    printf("  m: ");
    scanf("%lf",&m);
    printf(" -> %.0lfx + (%.0lf)y + (%.0lf)z = %.0lf  \n\n",i , j , k , m);
    printf(" Enter the coefficents of the third equation - px + qy + rz = s - \n");
    printf("  p: ");
    scanf("%lf",&p); 
    printf("  q: ");
    scanf("%lf",&q); 
    printf("  r: ");
    scanf("%lf",&r);
    printf("  s: ");
    scanf("%lf",&s);
    printf(" -> %.0lfx + (%.0lf)y + (%.0lf)z = %.0lf  \n\n",p , q , r , s); 
    
        printf("    %.0lfx + (%.0lf)y + (%.0lf)z = %.0lf  \n",a , b , c , d);
        printf("    %.0lfx + (%.0lf)y + (%.0lf)z = %.0lf  \n",i , j , k , m);
        printf("    %.0lfx + (%.0lf)y + (%.0lf)z = %.0lf  \n\n",p , q , r , s);
        
        H = ((a*j*r + b*p*k + c*i*q)-(a*k*q + b*i*r + c*j*p))*-1.0;  
        x = ((b*r*m + c*j*s + d*k*q)-(b*k*s + c*q*m + d*j*r))/H;
        y = ((a*k*s + c*p*m + d*i*r)-(a*r*m + c*i*s + d*k*p))/H;
        z = ((a*q*m + b*i*s + d*j*p)-(a*j*s + b*p*m + d*i*q))/H;
        if(isnan(x) && isnan(y) && isnan(z)){ // opposite operation !! - should tell if it is no solution but it tells me the opposite
            printf(" There is infinite number of solutions for the system \n\n");
       }else if(isinf(x) && isinf(y) && isinf(z) ){ // opposite operation !!
            printf(" There is no solutions for the system \n\n"); // h == 0 && x and y and z !=0
       } else{
        printf(" The solutions to the system is : \n");
        printf(" -> The value of x = %.2lf \n",x);
        printf(" -> The value of y = %.2lf \n",y);
        printf(" -> The value of z = %.2lf \n\n",z);
       }

}

void programmer(){

    int try;
 
    do{
        
        int i, n, x , c;
	int dec=0, remainder=0, a[9000];
        try = 0;
        memset(a, 0, 9000);
        
    printf("                                     ______________________________________________________________________________________________ \n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |                -> Programmer calculation - Numerical base wise converter  <-                 |\n");
    printf("                                    |               ---------------------------------------------------------------                |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |     1- Decimal to Binary          2- Decimal to Octal          3- Decimal to Hexa-decimal    |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |     4- Binary to Decimal          5- Binary to Octal           6- Binary to Hexa-decimal     |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |     7- Octal to Decimal           8- Octal to Binary           9- Octal to Hexa-decimal      |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |     10- Hexa-decimal to Decimal   11- hexa-decimal to Binary   12- Hexa-decimal to Octal     |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |     13- Back to the Calculator Modes list                                                    |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |______________________________________________________________________________________________|\n\n");
    
    printf(" -> Enter your input: ");
    scanf("%d", &c);
    
        system("cls");
        printf("\n");

    switch(c)
    {
        
        case 13:
            try = 0 ;
            system("cls");
            printf("\n # Backing to the Calculator Modes list ....\n"); 
            break;
     
        

	case 1:
            try = 1 ;
            printf("\n - Decimal to Binary - \n\n");
            printf(" Enter a Decimal value: ");
	    scanf("%d", &n);
	    for(i=0;n>0;i++)
	    {
	        remainder = n%2; // 2 base
	        a[i] = remainder;
	        n/=2;
	        x = i;
            }
            
            printf("\n -> ");
            while(x >= 0)
                {
                    printf("%d", a[x]);
                    x--;
                }
            printf(" \n\n");
		break;

	case 2:
            try = 1 ;
            printf("\n - Decimal to Octal - \n\n");
            printf(" Enter a Decimal value: ");
	    scanf("%d", &n);
            printf("\n -> %o \n\n", n); // o character means octal base 8

            break;
 
	    case 3:
                try = 1 ;
                printf("\n - Decimal to Hexa-decimal \n\n");
                printf(" Enter a Decimal value: ");
                scanf("%d", &n);
                printf("\n -> %X \n\n", n); // X character means hexa-decimal base 16

		break;
 
        case 4:
	    try = 1 ;
            printf("\n - Binary to Decimal - \n\n");
            printf(" # Start from the left side with the first 1 value \n\n");
            i=0;
            printf(" Enter a Binary value: ");
            scanf("%d", &n);
            while(n != 0)
            {
		remainder = n%10; // base 10
                dec += remainder*pow(2, i);
                i++;
                n/=10;
            }
            printf("\n -> %d \n\n", dec);

            break;
 
	case 5:
	    try = 1 ;
            printf("\n - Binary to octal - \n\n");
            printf(" # Start from the left side with the first 1 value \n\n");
            i=0;
            printf(" Enter a Binary value: ");
            scanf("%d", &n);
            while(n!=0)
            {
                remainder = n%10;
                dec+=remainder*pow(2, i);
                i++;
                n/=10;
            }
            printf("\n -> %o \n\n", dec);

            break;
 
	case 6:
	    try = 1 ;
            printf("\n - Binary to Hexa-decimal - \n\n");
            printf(" # Start from the left side with the first 1 value \n\n");
            i=0;
            printf(" Enter a Binary value: ");
            scanf("%d", &n);
            while(n!=0)
            {
                remainder=n%10;
                dec+=remainder*pow(2, i);
                i++;
                n/=10;
            }
            printf("\n -> %X \n\n", dec);

            break;
 
        case 7:
	    try = 1 ;
            printf("\n - Octal to Decimal - \n\n");
            i=0;               
            printf(" Enter a Octal value: " );
            scanf("%d", &n);
            while(n!=0)
            {
                remainder=n%10;
                dec+=remainder*pow(8, i);
                i++;
                n/=10;
            }
            printf("\n -> %d \n\n", dec);

            break;
 
        case 8:
	    try = 1 ;
            printf("\n - Octal to Binary - \n\n");
            i=0;
            printf(" Enter a Octal value: ");
            scanf("%d", &n);
            while(n!=0)
            {
		remainder=n%10;
                dec+=remainder*pow(8, i);  //converted octal value to decimal
                i++;
                n/=10;
            }
			
            n=dec;
            for(i=0;n>0;i++)
            {                          //convert decimal to a binary 
                remainder=n%2;
                a[i]=remainder; 
                n/=2;
            }
            x=i-1;
            printf("\n -> ");
            while(x>=0)
            {
                printf("%d", a[x]);
                x--;
            }
            printf("\n\n");

	    break;
 
        case 9:
	    try = 1 ;
            printf("\n - Octal to Hexa-decimal - \n\n");
            i=0;
            printf(" Enter a Octal value: ");
            scanf("%d", &n);
            while(n!=0)
            {
                remainder=n%10;
                dec+=remainder*pow(8, i);
                i++;
                n/=10;
            }
            printf("\n -> %X \n\n", dec);

            break;
 
        case 10:
	    try = 1 ;
            printf("\n - Hexa-decimal to Decimal - \n\n");
            printf(" Enter a Hexa-decimal value: ");
            scanf("%hhx", &n); // hexa (%hhx)
            dec=(int)n;
            printf("\n -> %d \n\n", dec);
            break;
 
        case 11:
	    try = 1 ;
            printf("You choose for Hexa-decimal to Binary Convert.\n\nEnter a Hexa-decimal value:");
            scanf("%hhx", &n);
            dec=(int)n;   // covert hexa decimal to decimal
            i=0;
            while(dec>0)
            {
                remainder=dec%2;   // convert decimal to binary number
                a[i]=remainder;
                dec/=2;
                i++;
            }
		x=i-1;
                printf("\n -> ");
            while(x>=0)
            {
                printf("%d", a[x]);
                x--;
            }
                printf(" \n\n");
		break;

        case 12:
	    try = 1 ;
            printf("\n - Hexa-decimal to Octal - \n\n");
            printf(" Enter a Hexa-decimal value: ");
            scanf("%hhx", &n);
            dec=(int)n; //convrt hexa decimal to decimal
            printf("\n -> %o \n\n", dec); //convert decimal to octal number
 
	    break;

	default:
            try = 1 ;
            printf(" Wrong key.\n try again.\n\n");

	}
    
     }while(try == 1);
}

void palindrome()
{   
        printf("\n\n - Palindrome checking - \n");
        printf(" # You are able to check both Numerical and Character palindromic problems. \n\n");

	printf(" Type: ");
        
        char list[1000];
        getchar();   
        gets(list); // gets includes space - scanf ends when enter space


        int i = 0; 
        int j = strlen(list) - 1; 
        int count = 0;
        
        while (j > i) 
        { 
            if (list[i++] == list[j--]) 
            { 
              count++ ;   
            } 
        } 
            if( count == (strlen(list)/2))  {   printf("\n -> %s is Palindrome \n", list);}
            else {    printf("\n -> %s is not palindrome \n", list); }

    printf("\n\n # Press Enter to continue ... \n ");
    while(getchar()!='\n');
    system("cls");

} 

void statistics(){
    
    printf("\n - Statistics calculations - \n\n");
    int i , d=1 , n , max , min , range , sum= 0;  
    float array[100] , mean_value , median_value , mode_value;  
    double standarddeviation_value;   

printf(" -> Enter the number of Elements: ");
   scanf("%d",&n);  
printf("\n Enter Elements: \n");  

for(i=0; i < n;i++)  {
    printf(" %d-  ",d);
    scanf("%f",&array[i]); 
    
    d++;
}

         min = max = array[0];
         for(i=0 ; i < n ;i++)  {
             
             sum = sum + array[i];
             
            if( max < array[i])  
            {   max = array[i];  }
            
            if(min > array[i])  
            {   min = array[i];  }
             
         }
            printf("\n -> count = %d \n",n);
            printf("\n -> Minimum = %d \n",min);
            printf("\n -> Maximum = %d\n",max);
            printf("\n -> Sum = %d\n",sum);
            printf("\n -> Range = %d\n",max - min);
            
            mean_value = mean(array,n);
            printf("\n -> Mean = %.2f\n",mean_value);  

            median_value = median(array,n);
            printf("\n -> Median = %.2f \n",median_value);  
            
            mode_value = mode(array,n);   
            //printf("\n -> Mode = %.2f\n",mode_value);  
            
  
            standarddeviation_value = standarddeviation(array,n);   
            printf("\n -> Standard deviation = %.2lf \n",standarddeviation_value); 
            
    printf("\n\n # Press Enter to continue ... \n ");
    while(getchar()!='\n');
    getchar();
    system("cls");
   
}

float mean(float array[],int n){
     int i ;
     float sum = 0;  
     for(i=0;i<=n;i++)  
     sum=sum+array[i];  
      return (round(sum/(float)n));
    
}
float median(float array[],int n){
    int i , j;
    float temp;  
    for(i = 0 ; i < n; i++)
    {
	for(j = i + 1 ; j < n ; j++)
	{
	    if(array[i] > array[j])
            {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            }
            }
    }

    if(n%2==0)  
        return (array[n/2]+array[n/2-1])/2;  
    else  
        return array[n/2];
}
float mode(float array[],int n){
 
    int max_value = 0, max_count = 0, i, j;

   for (i = 0; i < n; i++) {
      int count = 0;
      for (j = i+1 ; j < n; j++) {
         if (array[j] == array[i])
         count++;
      }
      
      if (count > max_count) {
         max_count = count;
         max_value = array[i];
      }
   }
    if( max_value > 0)
    printf("\n -> Mode = %d - repeated %d times \n",max_value ,max_count+1);
    else printf("\n -> Mode =  -  \n");
   //return max_value;

} 
 
double standarddeviation(float array[],int n){
 
     int i;   
     double max[100],sum,variance,mean_value;     
     mean_value = mean(array,n);
            sum=0;  
            for(i=0; i<n ;i++)   
            {  
               max[i]= pow((array[i] - mean_value), 2); // (Every Number minus Mean) , (Square of each difference) 
               sum+=max[i];  //(Add up the Squared Differences)
            }  
            variance = (sum/n);   
            printf("\n -> Variance = %.2f\n",variance);
            return sqrt(variance);  
}

void cmplx(){
    
          int try;
    
    do{
        
        int choice ;
        double a, b;
        double real1,imag1 , real2 , imag2 ;
         double complex c1 ,c2 , z ;
        try = 0;
        
    printf("\n");
    printf("                                     ______________________________________________________________________________________________ \n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |                               -> complex numbers calculations <-                             |\n");
    printf("                                    |                               ----------------------------------                             |\n");
    printf("                                    |                                                                                              |\n");   
    printf("                                    |      1- Addition (+)           2- Subtraction (-)       3- Multiplication (X)                |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      4- Division (÷)           5- conjunction           6- Absolute value                    |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      7- Phase Angle            8- Powers                9- Square root                       |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      10- Back to the Calculator Modes list                                                   |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      // To use the previous made operations we saved you the printed operations you did      |\n");
    printf("                                    |______________________________________________________________________________________________|\n\n");
    
    printf(" -> Enter your input: ");
    scanf("%d", &choice);
    
        printf("\n");

    switch(choice)
    {
        
    case 10:
        try = 0 ;
        system("cls");
        printf("\n # Backing to the Calculator Modes list ....\n"); 
        break;
        
    case 1:
        printf("\n - Addition of complex numbers - \n");
        try = 1 ;
        
        printf(" Enter the value of real number in x : ");
         scanf("%lf", &real1);
         printf(" Enter the value of imaginary number in x : ");
         scanf("%lf",&imag1);
         printf(" Enter the value of real number in y : ");
         scanf("%lf", &real2);
         printf(" Enter the value of imaginary number in y : ");
         scanf("%lf",&imag2);
         
    c1=real1+imag1*I;     //declaration of a complex number 
    c2=real2+imag2*I;
    printf("\n Addition of complex numbers: \n");
    printf(" values of complex number x = %.2lf + (%.2lf)i \n", creal(c1), cimag(c1));   //computing real and imaginary part of c1
    printf(" values of complex number y = %.2lf + (%.2lf)i \n", creal(c2), cimag(c2));   //computing real and imaginary part of c2
    double complex sum =c1+c2;
    printf("The sum: c1+c2= %.2lf%+.2lfi\n", creal(sum), cimag(sum));
         
        break;
        
    case 2:
        printf("\n - Subtraction of complex numbers - \n");
        try = 1 ;
        
         printf(" Enter the value of real number in x : ");
         scanf("%lf", &real1);
         printf(" Enter the value of imaginary number in x : ");
         scanf("%lf",&imag1);
         printf(" Enter the value of real number in y : ");
         scanf("%lf", &real2);
         printf(" Enter the value of imaginary number in y : ");
         scanf("%lf",&imag2);
         
    c1=real1+imag1*I;     //declaration of a complex number 
    c2=real2+imag2*I;
    printf("\n Subtraction of complex numbers:\n");
    printf(" values of complex number x = %.2lf + (%.2lf)i \n", creal(c1), cimag(c1));   //computing real and imaginary part of c1
    printf(" values of complex number y = %.2lf + (%.2lf)i \n", creal(c2), cimag(c2));   //computing real and imaginary part of c2
    double complex difference = c1-c2;
    printf("\n -> The difference: c1-c2 = %.2lf %+.2lfi\n", creal(difference), cimag(difference));
         
        break;
        
    case 3:
        printf("\n - Multiplication of complex numbers - \n\n");
        try =1 ;
        
         printf(" Enter the value of real number in x : ");
         scanf("%lf", &real1);
         printf(" Enter the value of imaginary number in x : ");
         scanf("%lf",&imag1);
         printf(" Enter the value of real number in y : ");
         scanf("%lf", &real2);
         printf(" Enter the value of imaginary number in y : ");
         scanf("%lf",&imag2);
         
    c1=real1+imag1*I;     //declaration of a complex number 
    c2=real2+imag2*I;
    printf("\n Multiplication of complex numbers:\n");
    printf(" values of complex number x = %.2lf + (%.2lf)i \n", creal(c1), cimag(c1));   //computing real and imaginary part of c1
    printf(" values of complex number y = %.2lf + (%.2lf)i \n", creal(c2), cimag(c2));   //computing real and imaginary part of c2
    double complex product =c1*c2;
    printf("\n -> The product: c1*c2=%.2lf%+.2lfi\n", creal(product), cimag(product));
         
         
        break;
    
    case 4:
        printf("\n - Division of complex numbers - \n\n");
        try =1;
        
         printf(" Enter the value of real number in x : ");
         scanf("%lf", &real1);
         printf(" Enter the value of imaginary number in x : ");
         scanf("%lf",&imag1);
         printf(" Enter the value of real number in y : ");
         scanf("%lf", &real2);
         printf(" Enter the value of imaginary number in y : ");
         scanf("%lf",&imag2);
         
    c1=real1+imag1*I;     //declaration of a complex number 
    c2=real2+imag2*I;
    printf("\n Division of complex numbers:\n");
    printf(" values of complex number x = %.2lf+(%.2lf)i \n", creal(c1), cimag(c1));   //computing real and imaginary part of c1
    printf(" values of complex number y = %.2f+(%.2lf)i \n", creal(c2), cimag(c2));   //computing real and imaginary part of c2
    double complex devision =c1 / c2 ;
    printf("\n -> The Division : x/y = %.2lf + (%.2lf)i  \n", creal(devision), cimag(devision));

        break; 
       
    case 5: 
        try = 1 ;
         printf("\n - conjunction of complex numbers - \n\n");
         printf(" Enter the value of real number in x : ");
         scanf("%lf", &real1);
         printf(" Enter the value of imaginary number in x : ");
         scanf("%lf",&imag1);
         c1=real1+imag1*I;     //declaration of a complex number 
         printf(" values of complex number x = %.2lf+(%.2lf)i \n", creal(c1), cimag(c1));   //computing real and imaginary part of c1
         double complex conj_f = conjf(c1); 
         printf("\n -> The conjunction is %.1f + (%.1f)i \n\n", creal(conj_f), cimag(conj_f) ); 
             
        break;
        
    case 6:      
        try = 1 ;
        printf("\n - Absolute value of complex numbers - \n\n");
         printf(" Enter the value of real number in x : ");
         scanf("%lf", &real1);
         printf(" Enter the value of imaginary number in x : ");
         scanf("%lf",&imag1);
         c1=real1+imag1*I;     //declaration of a complex number 
         printf("\n Absolute value = %.1f \n\n", cabsf(c1)); 
             
        break;
        
    case 7: 
        try = 1 ;
        printf("\n - Phase Angle of complex numbers - \n\n");;
         printf(" Enter the value of real number in x : ");
         scanf("%lf", &real1);
         printf(" Enter the value of imaginary number in x : ");
         scanf("%lf",&imag1);
         c1=real1+imag1*I;     //declaration of a complex number 
         printf(" values of complex number x = %.2lf+(%.2lf)i \n", creal(c1), cimag(c1));   //computing real and imaginary part of c1
         printf("\n -> Phase Angle = %.1f radians , %.1f degree \n", cargf(c1) , ((180*cargf(c1))/PI) );  
             
        break;
        
    case 8: 
        try = 1 ;
         printf("\n - Powers of complex numbers - \n\n");
         printf(" Enter the value of real number in x : ");
         scanf("%lf", &real1);
         printf(" Enter the value of imaginary number in x : ");
         scanf("%lf",&imag1);
         printf(" Enter the value of real number in y : ");
         scanf("%lf", &real2);
         printf(" Enter the value of imaginary number in y : ");
         scanf("%lf",&imag2);
         c1=real1+imag1*I;     //declaration of a complex number 
         c2=real2+imag2*I;
         z = cpow(c1,c2);
         printf("\n The power of the complex number = %.1f + (%.1f)i \n" ,creal(z), cimag(z));  
             
        break;
        
        case 9: 
            try = 1 ;
            printf("\n - Square root of complex numbers - \n\n");
         printf(" Enter the value of real number in x : ");
         scanf("%lf", &real1);
         printf(" Enter the value of imaginary number in x : ");
         scanf("%lf",&imag1);
         c1=real1+imag1*I;     //declaration of a complex number 
         c2=csqrt(c1);
         printf(" square root of x = ±( %.1f + (%.1f)i ) \n",creal(c2), cimag(c2));  
             
        break;
        
    default:
        try = 1 ;
        printf(" Wrong key.\n try again.\n\n");
    
    }
        
    }while(try == 1);
  

}

void time_date(){
    
    int try;
    
    do{
    int c ;
        try = 0;
        
    printf("                                     ______________________________________________________________________________________________ \n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |                                 -> date and time calculation <-                              |\n");
    printf("                                    |                                  -----------------------------                               |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      1- Now's (date and time)                    2- difference between two dates             |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |      3- Back to the Calculator Modes list                                                    |\n");
    printf("                                    |                                                                                              |\n");
    printf("                                    |______________________________________________________________________________________________|\n\n");
    
    printf(" -> Enter your input: ");
    scanf("%d", &c);
    
        system("cls");
        printf("\n");

    switch(c)
    {
        
    case 3:
        try = 0 ;
        system("cls");
        printf("\n # Backing to the Calculator Modes list ....\n"); 
        break;
        
    case 1:
        try = 1 ;
        
    time_t t;  
    time(&t);

    printf("\n\n -> Now's (date and time): %s", ctime(&t));

    printf("\n\n # Press Enter to continue ... \n ");
    while(getchar()!='\n');
    getchar();
    system("cls");
    
        break;
        
    case 2:
        try = 1 ;
        date_diff();
        break;
        
        
    default:
        try = 1 ;
        printf(" Wrong key.\n try again.\n\n");
    }
    
    }while(try ==1 );
}

void date_diff(){
    
    printf(" - difference between two dates - \n");
    int day1,mon1,year1,day2,mon2,year2;
    int ref,dd1,dd2,i;
    here:
    printf("\n Enter first date: \n");
    printf(" -> day : ");
    scanf("%d" , &day1 );
    printf(" -> month : ");
    scanf("%d" , &mon1 );
    printf(" -> year : ");
    scanf("%d" , &year1 );
    printf("\n Enter second date: \n");
    printf(" -> day : ");
    scanf("%d" , &day2 );
    printf(" -> month : ");
    scanf("%d" , &mon2 );
    printf(" -> year : ");
    scanf("%d" , &year2 );
    
    if( mon1>12 || mon2> 12){
        printf("\n Wrong Input. \n");
        goto here;
        system("cls");
    }
    int y=0 , x =0;
    
        if(mon1 ==1) y=0; 
        if(mon2 ==1) x = 0;
        if(mon1 ==2) y=31; 
        if(mon2 ==2) x = 31;
        if(mon1 ==3) y=59; 
        if(mon2 ==3) x = 59;
        if(mon1 ==4) y=90;
        if(mon2 ==4) x = 90;
        if(mon1 ==5) y=120;
        if(mon2 ==5) x = 120;
        if(mon1 ==6) y=151; 
        if(mon2 ==6) x = 151;
        if(mon1 ==7) y=181; 
        if(mon2 ==7) x = 181;
        if(mon1 ==8) y=212;
        if(mon2 ==8) x = 212;
        if(mon1 ==9) y=243; 
        if(mon2 ==9) x = 243;
        if(mon1 ==10) y=273;
        if(mon2 ==10) x = 273;
        if(mon1 ==11) y=304;
        if(mon2 ==11) x = 304;
        if(mon1 ==12) y=334;
        if(mon2 ==12) x = 334;
        
      ref = year1;
      
      if(year2<year1){
      ref = year2; }
      
      dd1 = y;
      
    for( i = ref ; i<year1 ; i++)
    {
        if(i%4==0)
        dd1+=1;
    } 
    dd1=dd1+day1+(year1-ref)*365;
    
    dd2=0;
    for(i=ref;i<year2;i++)
    {
        if(i%4==0)
        dd2+=1;
    }
    dd2= x+dd2+day2+((year2-ref)*365);
    printf("\n\n Difference between the two dates is %d days \n\n",abs(dd2-dd1));


}

/*void system_info(){
  system("cls");
  printf("\n With this type of running (.exe), it is ignoring to find the system informations data\n");
  printf(" Use NetBeans compiler to able it \n\n");
    
}
*/
void user_manual()
{
    
    system("cls");
    printf("\n                          __________________________________________________________________________________________________________________ \n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |                                                   USER MANUAL                                                    |\n");
    printf("                         |                                             -----------------------                                              |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |   THIS CALCULATOR MADE BY AHMED EL-SHERIF,                                                                       |\n");
    printf("                         |   FOR ANY TYPE OF PROBLEMS PLEASE CONTACT ahmed02elsherif@gmail.com                                              |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |   Don't forget to use 1360 x 768 display resolution (Maximize your screen) for better view                       |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |   This program was created on NetBeans development environment, for the best running way it is preferable to     |\n");
    printf("                         |   work from this compiler program                                                                                |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |   This calculator is user friendly and designed perfectly for anyone to use, just follow the instructions.       |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |   This calculator is a great helping hand for school, college and universities students in their daily           |\n");
    printf("                         |   basics and  major problems.                                                                                    |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |   There are 12 different type of modes in this calculator :                                                      |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |   1- COMP - General calculations           2- Matrix calculations                3- Factorial calculation        |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |   4- Prime number calculation              5- Trigonometrical calculation        6- Logarithm calculation        |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |   7- EQN - Equation solution               8- Statistics calculations            9- CMPLX - complex numbers      |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |   10- Palindrome                           11- Programmer calculation            12- Time and Date calculation   |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |   Every mode type includes many different helpful operations to use                                              |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |   Choices from the menu allow you in some options to use the results from calculations                           |\n");
    printf("                         |   and allow you to return to the last menu                                                                       |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |   The program does not end unless you do it by yourself                                                          |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |   Thank you for using our SCIENTIFIC CALCULATOR                                                                  |\n");
    printf("                         |   We hope this Calculator helps you in your studies                                                              |\n"); 
    printf("                         |                                                                                                                  |\n");
    printf("                         |   Message of thanks:  I would like to thank my teachers for their efforts in helping and teaching me.            |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |                                                                                                                  |\n");
    printf("                         |    # Press Enter to back to the main list ...                                                                    |\n");
    printf("                         |__________________________________________________________________________________________________________________|\n\n");
    
    while(getchar()!='\n');
    //getchar();
    system("cls");

}

