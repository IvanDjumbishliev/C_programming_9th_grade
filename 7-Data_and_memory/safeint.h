#ifndef SAFEINT_H_
#define SAFEINT_H_

typedef struct SafeResult{
    int value;
    int errorflag;
} SafeResult;

SafeResult Safeadd(int a, int b);
SafeResult Safesubtract(int a, int b);
SafeResult Safemultiply(int a, int b);   
SafeResult Safedivide(int a, int b);
SafeResult Safestrtoint (const char *str);

#endif