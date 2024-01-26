#include <stdio.h>

int main() {
    char type;
    char operation;
    scanf(" %c", &type);
    if (type == 't')
    {
        scanf(" %c", &operation);
        if (operation == 'p')
        {
            float s1, s2, s3, perimeter;
            scanf(" %f%f%f", &s1, &s2, &s3);
            perimeter = s1 + s2 + s3;
            printf("%.2lf", perimeter);
        } else if (operation == 'a')
        {
            float b, h, area;
            scanf(" %f%f", &b, &h);
            area = 0.5 * b * h;
            printf("%.2lf", area);
        } else {
            printf("opertion not specified");
        }
        
        
    } else if (type == 'r')
    {
        scanf(" %c", &operation);
        if (operation == 'p')
        {
            float s1, s2, perimeter;
            scanf(" %f%f", &s1, &s2);
            perimeter = 2 * (s1 + s2);
            printf("%.2lf", perimeter);
        } else if (operation == 'a')
        {
            float s1, s2, area;
            scanf(" %f%f", &s1, &s2);
            area = s1 * s2;
            printf("%.2lf", area);
        } else {
            printf("opertion not specified");
        }
    } else if (type == 's')
    {
        scanf(" %c", &operation);
        if (operation == 'p')
        {
            float s, perimeter;
            scanf(" %f", &s);
            perimeter = 4 * s;
            printf("%.2lf", perimeter);
        } else if (operation == 'a')
        {
            float s, area;
            scanf(" %f", &s);
            area = s * s;
            printf("%.2lf", area);
        } else {
            printf("opertion not specified");
        }
    } else if (type == 'c')
    {
        scanf(" %c", &operation);
        if (operation == 'p')
        {
            float s, perimeter;
            scanf(" %f", &s);
            perimeter = 2 * 3.14 * s;
            printf("%.2lf", perimeter);
        } else if (operation == 'a')
        {
            float s, area;
            scanf(" %f", &s);
            area = 3.14 * s * s;
            printf("%.2lf", area);
        } else {
            printf("opertion not specified");
        }
    } else {
        printf("Shape unrecognized");
    }
    return 0;
}