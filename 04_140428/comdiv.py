# coding: utf-8
import sys

def comdiv(a, b):
    i = 1 # カウンタ
    ret = 1 # 最大公約数
    while i<=a and i<=b:
        if a%i is 0 and b%i is 0:
            ret = i
        i += 1
    return ret

def main():
    if len(sys.argv) < 3:
        print "Too few Argvs"
    else:
        a = int(sys.argv[1])
        b = int(sys.argv[2])
        print "{0} is the common divider of {1} and {2}"\
            .format(comdiv(a, b), a, b)

main()
