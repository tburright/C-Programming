#include <stdio.h>
#include <string.h>

int main(void)
{
    int number = 65;
    float floaty = 2.2;
    double doubles = 3.3333333331;
    char izard = 'X';

    int testing = strlen("double  -> float: ") + sizeof(doubles);

    printf("===============================================\n");

    printf("int %d -> float:..............%f \n", number, (float) number);
    printf("int %d -> char:...............%c \n", number, (char) number);
    printf("float %f -> double:.....%.15f \n", floaty, (double) floaty);
    printf("double %.10f -> float: %f \n", doubles, (float) doubles);
    printf("char %c -> int:................%d \n", izard, (int) izard);
    printf("int 33 -> char:...............%c \n", (char) 33);

    printf("===============================================\n");
    for (int i = 0;  i < testing;  i++, printf("%c", '='));

    return 0;
}
