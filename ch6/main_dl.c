#include <stdio.h>
#include <dlfcn.h>
int main(void) {
    void *h = dlopen("./libcalc.so", RTLD_LAZY);
    if (!h) { fprintf(stderr, "%s\n", dlerror()); return 1; }
    const char *names[] = {"add", "subtract", "multiply", "divide"};
    const char *ops[]   = {"+", "-", "*", "/"};
    for (int i = 0; i < 4; i++) {
        double (*f)(double, double) = (double (*)(double, double))dlsym(h, names[i]);
        printf("10 %s 5 = %.1f\n", ops[i], f(10, 5));
    }
    dlclose(h);
    return 0;
}
