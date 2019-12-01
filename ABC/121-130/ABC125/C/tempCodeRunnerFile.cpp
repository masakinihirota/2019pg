    for (int i = n - 2; i >= 0; i--) {
        right[i] = gcd(a[i + 1], right[i + 1]);
    }
