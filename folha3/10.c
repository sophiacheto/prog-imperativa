#include <stdio.h>
#include <limits.h>

int main(void) {
printf("SHRT_MIN = %d\n", SHRT_MIN);
printf("SHRT_MAX = %d\n", SHRT_MAX);
printf("INT_MIN = %d\n", INT_MIN);
printf("INT_MAX = %d\n", INT_MAX);
printf("LONG_MIN = %ld\n", LONG_MIN);
printf("LONG_MAX = %ld\n", LONG_MAX);
// %ld para formatar long int
}

// 1. n´umero de dias num ano = 365 (short)
// 2. n´umero de horas num ano = 8760 (short)
// 3. n´umero de segundos num dia = 86400 (int)
// 4. n´umero de segundos num mˆes (31 dias) = 2678400 (int)
// 5. n´umero de segundos desde 1 de janeiro de 1900 = (long)