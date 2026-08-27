/* FUN_2c473fa8 @ 0x2c473fa8 */

bool FUN_2c473fa8(undefined4 param_1,double *param_2)

{
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 6:
  case 7:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x10:
    return *(int *)param_2 == 0;
  case 3:
  case 4:
  case 5:
  case 8:
  case 9:
    return *(int *)((int)param_2 + 4) == 0 && *(int *)param_2 == 0;
  case 10:
    return *(float *)param_2 == 0.0;
  case 0xb:
    return *param_2 == 0.0;
  case 0xe:
    if (*(char **)param_2 != (char *)0x0) {
      return **(char **)param_2 == '\0';
    }
  }
  return true;
}

