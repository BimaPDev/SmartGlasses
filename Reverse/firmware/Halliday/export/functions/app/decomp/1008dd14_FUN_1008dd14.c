/* FUN_1008dd14 @ 0x1008dd14 */

void FUN_1008dd14(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(code **)(iVar1 + 0xc) != (code *)0x0) {
      (**(code **)(iVar1 + 0xc))(iVar1,param_1);
    }
    if ((char)param_1[4] == '\x01') {
      FUN_10094268(param_1[1],DAT_1008dd38);
      param_1[1] = 0;
    }
  }
  return;
}

