// builds only with GCC 2.8.1
#include "common.h"

void gt2_main_task0b1100 (unsigned int, unsigned int, unsigned int *); /* extern */
extern unsigned int gt2_main_cd_read;

void
gt2_main_task0b110 (unsigned int arg0, unsigned int arg1)
{
  gt2_main_task0b1100 (arg0, arg1, &gt2_main_cd_read);
}
