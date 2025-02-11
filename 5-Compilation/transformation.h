#ifndef TRANSFORMATION_H__
#define TRANSFORMATION_H__
struct Transformation
{
    long result;
    char error[100];    
};

struct Transformation transform(char srting[]);

#endif