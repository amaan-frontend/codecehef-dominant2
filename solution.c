#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[1001] = {0};

        for (int i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);
            A[num]++;
        }

        int maxFreq = 0;
        int dominantElement = -1;
        int isDominant = 1;

        for (int i = 1; i <= N; i++) {
            if (A[i] > maxFreq) {
                maxFreq = A[i];
                dominantElement = i;
            } else if (A[i] == maxFreq) {
                isDominant = 0;
            }
        }

        if (isDominant) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
