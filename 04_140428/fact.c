// fact.c
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

// 引数  : 階乗を計算する整数x (x!におけるx)
// 返り値: 階乗の計算結果
// 機能  : 階乗を再帰的に計算する
int fact (int x) {
    /* if (x >= 0) { */
    if (x >= 1) {
        // 1以上の引数を与えられた場合には、再帰的に関数を呼び出す
        //printf("x = %d\n", x);
        return x * fact(x-1);
    } else {
        // 1より小さい引数が与えられた場合には、1を返す
        //printf("x = %d, return 1\n", x);
        return 1;
    }
}

int main(int argc, char **argv) {
    int x, ret; // 階乗計算の引数x, 階乗計算結果ret

    // コマンドライン引数を整数に変換し、その階乗を計算する
    x = atoi(argv[1]);
    ret = fact(x);
    printf("ret = %d\n", ret);

    return 0;
}
