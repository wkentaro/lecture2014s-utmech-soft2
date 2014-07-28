/* test0.c */
#include <stdio.h>

int test(int i, int j) {
    // 引数: 整数 i, j
    // 返り値: iとjの積となる整数
    // 機能: 引数の積を計算し返す関数
    return (i * j);
}

int main(int argc, char *argv) {
    int i, j; // 入力となる整数i, j
    int k; // 出力となる整数k

    i = 3;
    j = 2;

    // iとjの積をkに代入する
    k = test(i, j);

    // kの値が5より大きい場合には">5"と表示し、
    // そうでなければ"<=5"と表示する。
    if (k>5) {
        printf(">5\n");
    } else {
        printf("<=5\n");
    }

    return 0;
}
