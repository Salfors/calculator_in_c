#include <stdio.h>
#include <stdlib.h>
      
int main()  {

    // declaration of local variable op;  
    float N1 , N2, result  ;
    float NumberRead = 0 ; // Reference to check the value of an entry Watch this video to understand : https://www.youtube.com/watch?v=_i2faEmp2lo
    int Exit=1;
    char operation; 

    // Passing and processing entries

    do {
        printf("\nEnter the first number : " );
        NumberRead  = scanf("%f", &N1); 

        while (NumberRead != 1) {
            printf("\n[-] That is not a number [-]\n"); 
            scanf("%*[^\n]"); 
            printf("Enter the first number again : " );
            NumberRead  = scanf("%f", &N1);
        } 

        printf("Enter the operation: " );
        scanf(" %c", &operation) ;

        printf("Enter the second number : " ); 
        NumberRead  = scanf("%f", &N2); 

        while (NumberRead != 1) {
            printf("\n[-]That is not a number [-] "); 
            scanf("%*[^\n]"); 
            printf("\nEnter the second number again : " );
            NumberRead  = scanf("%f", &N2);
        } 

        // To carry out the operations required according to the input

        switch (operation) {

            case '+' :
                        
                    result = N1 + N2; // add two numbers  
                    system("clear"); // for clean screen to print result 
                    printf("\nThe result of the %.2f + %.2f = %.2f\n", N1, N2, result);
                    break ;

            case '-' :
                    result= N1 - N2 ;
                    system("clear");
                    printf("\nThe result of the %.2f - %.2f = %.2f\n", N1, N2, result);
                    break; 

            case '*' :
                    result= N1 * N2 ;
                    system("clear");
                    printf("\nThe result of the %.2f * %.2f = %.2f\n", N1, N2, result);
                    break; 

            case '/' :

                while (N2 == 0) {
                        printf("\n[-] Divisor cannot be zero [-]\n"); 
                        scanf("%*[^\n]"); 
                        printf("Please enter another value: ");
                        scanf("%f", &N2);
                }  //while for N2 
                result= N1 / N2 ;
                system("clear");
                printf("\nThe result of the %.2f / %.2f = %.2f\n", N1, N2, result);
                break ;

            default : 
                printf("\n[-]Error! operator is not correct[-]\n") ;

            } // switch 

        // for Exit with number 0 or continue with any number 

        printf("\n[+] Enter any Number to continue or '0' to Exit [+] : " ) ;
        NumberRead = scanf ("%f", &Exit) ;

        while (NumberRead != 1) {
            printf("\n[-] That is not A number [-]\n"); 
            scanf("%*[^\n]"); 
            printf("Enter any Number to continue or '0' to Exit : ") ;
            NumberRead  = scanf("%f", &N1);
        } // while for Exit

        system("clear");

    }while(Exit != 0 ) ;


    return 0;        
}  
