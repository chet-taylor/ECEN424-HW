//gcc -S -m64 -o 3_60.s -Og 3_60.c

long loop(long x, long n) {
    long result = 0;
    long mask;
    for (mask = 1; mask != 0; mask = mask << (n & 0xFF)) {
        result |= (x & mask);
    }
    return result;
}
