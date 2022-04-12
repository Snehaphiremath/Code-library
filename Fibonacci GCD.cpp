/*Python code*/
from math import gcd


MOD = 1000000007


def multipleM(X, Y):
    a00, a10, a01, a11 = X
    b00, b10, b01, b11 = Y
    return [(a00 * b00 + a10 * b01) % MOD, (a00 * b10 + a10 * b11) % MOD,
            (a01 * b00 + a11 * b01) % MOD, (a01 * b10 + a11 * b11) % MOD]


def multipleV(X, Z):
    a00, a10, a01, a11 = X
    b0, b1 = Z
    return [(a00 * b0 + a10 * b1) % MOD,
            (a01 * b0 + a11 * b1) % MOD]


def power(M, N):
    T = [1, 0,
         0, 1]

    if N == 0:
        return T
    if N == 1:
        return M

    while N != 0:
        if N % 2 == 1:
            T = multipleM(T, M)
        M = multipleM(M, M)
        N //= 2
    return T



g = 0
n = int(input())
for i in range(n):
    g = gcd(g, int(input()))


A = [1, 1, 1, 0]
An = power(A, g)
F0 = [1, 0]
Fn = multipleV(An, F0)
print(Fn[1])
