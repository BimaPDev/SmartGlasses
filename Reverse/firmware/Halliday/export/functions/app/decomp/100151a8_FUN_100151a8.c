/* FUN_100151a8 @ 0x100151a8 */

void FUN_100151a8(int *param_1)

{
  int iVar1;
  
  iVar1 = *DAT_10015204;
  if (param_1 == (int *)0x0) {
    if (*DAT_10015204 == iVar1) {
      return;
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_100a9394();
      FUN_100a98c4(*param_1);
      *param_1 = 0;
    }
    if (param_1[1] != 0) {
      FUN_100a0a70();
      FUN_100a0b00(param_1[1]);
      param_1[1] = 0;
    }
    if (*DAT_10015204 == iVar1) goto LAB_100151ea;
  }
  FUN_1013cdc0();
LAB_100151ea:
  FUN_1012d1f4(param_1);
  return;
}

