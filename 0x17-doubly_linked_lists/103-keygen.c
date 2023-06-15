#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long f1(int arg1)
{
    return ((arg1 ^ 0x3b) & 0x3f);
}

unsigned long f2(char* arg1, int arg2)
{
    int var_10 = 0;
    for (int var_c = 0; var_c < arg2; var_c = (var_c + 1))
    {
        var_10 = (var_10 + *(arg1 + var_c));
    }
    return ((var_10 ^ 0x4f) & 0x3f);
}

unsigned long f3(char* arg1, int arg2)
{
    int var_10 = 1;
    for (int var_c = 0; var_c < arg2; var_c = (var_c + 1))
    {
        var_10 = (*(arg1 + var_c) * var_10);
    }
    return ((var_10 ^ 0x55) & 0x3f);
}

unsigned long f4(char* arg1, int arg2)
{
    int var_10 = *arg1;
    for (int var_c = 0; var_c < arg2; var_c = (var_c + 1))
    {
        if (arg1[var_c] > var_10)
        {
            var_10 = arg1[var_c];
        }
    }
    srand((var_10 ^ 0xe));
    return (rand() & 0x3f);
}

unsigned long f5(char* arg1, int arg2)
{
    int var_10 = 0;
    for (int var_c = 0; var_c < arg2; var_c = (var_c + 1))
    {
        var_10 = (var_10 + (*(arg1 + var_c) * *(arg1 + var_c)));
    }
    int rax_12;
    rax_12 = (var_10 ^ 0xef);
    return (rax_12 & 0x3f);
}

unsigned long f6(char arg1)
{
    int var_10 = 0;
    for (int var_c = 0; arg1 > var_c; var_c = (var_c + 1))
    {
        var_10 = rand();
    }
    int rax_3;
    rax_3 = (var_10 ^ 0xe5);
    return (rax_3 & 0x3f);
}

int main(int argc, char *argv[])
{
  char *magic_str = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
  char pwd[7];
  char *user = argv[1];
  int len = strlen(user);

  pwd[0] = magic_str[f1(len)];
  pwd[1] = magic_str[f2(user, len)];
  pwd[2] = magic_str[f3(user, len)];
  pwd[3] = magic_str[f4(user, len)];
  pwd[4] = magic_str[f5(user, len)];
  pwd[5] = magic_str[f6(*user)];

  printf("%s", pwd);
  return (EXIT_SUCCESS);
}
