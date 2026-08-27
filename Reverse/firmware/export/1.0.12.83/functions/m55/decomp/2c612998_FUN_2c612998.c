/* FUN_2c612998 @ 0x2c612998 */

void FUN_2c612998(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(code **)(iVar1 + 0xc) != (code *)0x0) {
      (**(code **)(iVar1 + 0xc))(iVar1,param_1);
    }
    if ((char)param_1[4] == '\x01') {
      FUN_2c62bea8(param_1[1]);
      param_1[1] = 0;
      return;
    }
  }
  return;
}

