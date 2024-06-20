// 1
#include <stdio.h>

int main() {
    int num = 5; 
    int n = 2;   

    if (num & (1 << n)) {
        printf("Bit is set at position %d\n", n);
    } else {
        printf("Bit is not set at position %d\n", n);
    }

    return 0;
}

// 2

#include <stdio.h>

int main() {
    int number = 20;
    int n = 2;

    int multiplied_result = number << n;
    printf("Result of multiplication: %d\n", multiplied_result);

    int divided_result = number >> n;
    printf("Result of division: %d\n", divided_result);

    return 0;
}


// 3

#include <stdio.h>

int main() {
    int num = 0, count0 = 0, count1 = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num != 0) {
        if (num & 1) {
            count1++;
        } else {
            count0++;
        }
        num = num >> 1;
    }
    
    printf("Number of 0's: %d\n", count0);
    printf("Number of 1's: %d\n", count1);
    
    return 0;
}

// 4

#include <stdio.h>

int main() {
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1) {
        printf("%d is odd.", num);
    } else {
        printf("%d is even.", num);
    }

    return 0;
}
// 5
#include <stdio.h>

int main() {
    char input = 0;
    char output;
    printf("Enter a symbol: ");
    scanf("%s", &input);

    output = input ^ 32;

    printf("Original: %c\n", input);
    printf("Converted: %c\n", output);

    return 0;
}
// 6
#include <stdio.h>

int main() {
    int num = 0, binary = 0, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        if (num % 2 == 0) {
            binary += place;
            break;
        }
        num /= 2;
        place *= 10;
    }

    printf("Binary number after replacing the last 0 with 1: %d\n", binary);

    return 0;
}
// 7
