int main() { int x = 10; int *ptr = &x; *ptr = 20; printf("%d\n", x); // Output: 20 \nThis code is correct. It directly modifies the value of x via the pointer. return 0; }