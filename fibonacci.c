#include <stdio.h>

void fibonacci(int numTerms);

void fibonacci(int numTerms) {
    int term1 = 0, term2 = 1, nextTerm, i;

    printf("Fibonacci Sequence:\n");

    for (i = 0; i < numTerms; i++) {
        printf("%d ", term1);
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }
}

int main() {
    int numTerms;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &numTerms);

    fibonacci(numTerms);

    return 0;
}
