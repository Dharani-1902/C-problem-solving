HELLO WORLD IN-C

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	printf("Hello, World!\n");
      printf("%s",s);
    return 0;
}

PLAYING WITH CHARACTER

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char charInput;
    char stringInput[100];
    char sentenceInput[100];

    scanf(" %c", &charInput);
    scanf(" %99[^\n]", stringInput);
    scanf(" %99[^\n]", sentenceInput);

    printf("%c\n", charInput);
    printf("%s\n", stringInput);
    printf("%s\n", sentenceInput);
    return 0;
}
 
SUM AND DIFFERENCE OF TWO NUMBERS

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char charInput;
    char stringInput[100];
    char sentenceInput[100];

    scanf(" %c", &charInput);
    scanf(" %99[^\n]", stringInput);
    scanf(" %99[^\n]", sentenceInput);

    printf("%c\n", charInput);
    printf("%s\n", stringInput);
    printf("%s\n", sentenceInput);  
    return 0;
}

FUNCTION IN C

#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int max = a; 

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }

    return max; 
}

int main() {
    int num1, num2, num3, num4;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);

    printf("%d\n", max_of_four(num1, num2, num3, num4));

    return 0;
}

POINTER IN C

#include <stdio.h>
#include <stdlib.h> 
void update(int *a, int *b) {
    int sum = *a + *b;    
    int difference = abs(*a - *b);

    *a = sum;                   
    *b = difference;             
}

int main() {
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    update(&num1, &num2);

    printf("%d\n", num1);
    printf("%d\n", num2);

    return 0;
}


DIGIT FREQUENCY

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int frequency[10] = {0}; digits 0-9

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            frequency[str[i] - '0']++; 
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d", frequency[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    printf("\n"); 

    return 0;
}
