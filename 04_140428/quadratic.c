#include <stdio.h>
#include <math.h>

// 引数  : 二次方程式ax^2+bx+c=0における係数a,b,c
// 返り値: 判別式の計算結果
// 機能  : 判別式(D=b^2-4ac)の計算を行い、結果を返す
int distinct(int a, int b, int c) {
    return pow(b, 2) - 4*a*c;
}
void quadratic(int a, int b, int c) {
    int D; // 判別式の計算結果
    double ret[4]; // 二次方程式の解

    D = distinct(a, b, c);
    if (D==0) {
        // 方程式が重解をもつ
        ret[0] = -1*b / (2*a);
        printf("%lf\n", ret[0]);
    } else if (D>0) {
        // 方程式が二つの実数解をもつ
        ret[0] = (-1*b + sqrt(D)) / (2*a);
        ret[2] = (-1*b - sqrt(D)) / 2*a;
        printf("%lf, %lf\n", ret[0], ret[2]);
    } else {
        // 方程式が二つの虚数解をもつ
        ret[0] = (-1*b) / (2*a);
        ret[1] = sqrt(-1*D) / (2*a);
        ret[2] = (-1*b) / (2*a);
        ret[3] = (-1*sqrt(-1*D)) / (2*a);
        printf("%lf+%lfi, %lf%lfi\n", 
            ret[0], ret[1], ret[2], ret[3]);
    }
    return;
}

int main(int argc, char **argv) {
    int a, b, c; // 二次方程式の係数a, b, c
    if (argc < 4) {
        // コマンドライン引数が少ない場合には警告を出す
        printf("Too Few Argvs\n");
        return 0;
    } else {
        // コマンドライン引数を整数に変換し、
        // それらを係数とする二次方程式を解く
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        c = atoi(argv[3]);
        quadratic(a, b, c);
        return 0;
    }
}
