#include <stdio.h>
#include <ctype.h>
#include<math.h>
double atof(char s[])
{
    double val, power;
    int i, sign,exp_sign, exponent;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    if (s[i] == 'e' || s[i] == 'E')
    {
        i++;

        exp_sign = (s[i] == '-') ? -1 : 1;
        if (s[i] == '+' || s[i] == '-')
            i++;

        for (exponent = 0; isdigit(s[i]); i++)
            exponent = 10 * exponent + (s[i] - '0');

        // Calculate the power of 10 based on the exponent
        power *= pow(10.0, exp_sign * exponent);
    }
    return sign * val / power;
}
int main()
{

    char str[] = "12345e+6";
    double num = atof(str);
    printf("%f\n", num);
    return 0;
}