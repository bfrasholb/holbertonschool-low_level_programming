#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_3bit_binary(const char *s)
{
    if (strlen(s) != 3)
        return 0;

    for (int i = 0; i < 3; i++)
        if (s[i] != '0' && s[i] != '1')
            return 0;

    return 1;
}

int main(int argc, char *argv[])
{
    char *init   = "rm -rf holberton*";
    char *git1   = "git clone https://www.github.com/bfrasholb/holbertonschool-low_level_programming.git";
    char *git2   = "git clone https://www.github.com/LachyBM/holbertonschool-printf.git";
    char *bashrc = "cp ./.bashrc ~";
    char *qoltwks = "./.qoltwks";

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <3bit>\n", argv[0]);
        return 1;
    }
    if (!is_3bit_binary(argv[1]))
    {
        fprintf(stderr, "Error: '%s' is not a valid 3‑bit binary string\n", argv[1]);
        return 1;
    }
    int bits = strtol(argv[1], NULL, 2);
    printf("Parsed bits = %d\n", bits);
    system(init);
    if (bits & 0b001)
        system(git1);
    if (bits & 0b010)
        system(git2);
    if (bits & 0b100)
    {
        system(bashrc);
		system("sudo cp ./scripts/* /bin/ 2>/dev/null");
        system(qoltwks);
    }
    return 0;
}
