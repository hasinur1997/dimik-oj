#include<stdio.h>

int main() {
    int T, i, counter = 0;

    scanf("%d", &T);

    for(i = 1; i <= T; i++) {
        int n;
        while(scanf("%d", &n)) {
            counter = counter + 1;
            
            if (getchar() == '\n') {
                break;
            }
        }

        printf("%d\n", counter);
        counter = 0;
    }

}