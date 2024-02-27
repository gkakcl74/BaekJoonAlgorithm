#include <stdio.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int DP[101][100001];
int w[101];
int v[101];

int main() {
    int i, j, n, k;
    scanf("%d %d", &n, &k);
    for (i=1; i <= n; i++)
        scanf("%d %d", &w[i], &v[i]);

    for (i=1; i <= n; i++) {
        for (j = 1; j <= k; j++) {
            if (j - w[i] >= 0)
                DP[i][j] = MAX(DP[i - 1][j], DP[i - 1][j - w[i]] + v[i]);
            else DP[i][j] = DP[i - 1][j];
        }
    }
    printf("%d\n", DP[n][k]);

    return 0;
}