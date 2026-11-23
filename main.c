
#include <stdio.h>

/* 商と余りをポインタを使って返す関数 */
void divmod(int x, int y, int *q, int *r)
{
    *q = x / y;
    *r = x % y;
}

int main(void)
{
    int x, y;
    int q, r;

    scanf("%d %d", &x, &y);

    /* 0以下の数値が入力された場合はNG */
    if (x <= 0 || y <= 0)
    {
        printf("NG");
        return 0;
    }

    /* 商と余りを計算する */
    divmod(x, y, &q, &r);

    printf("%d,%d", q, r);

    return 0;
}
