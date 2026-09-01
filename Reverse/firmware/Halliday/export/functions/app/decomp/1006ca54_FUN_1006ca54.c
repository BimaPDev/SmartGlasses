/* FUN_1006ca54 @ 0x1006ca54 */

int FUN_1006ca54(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x10);
  if (iVar2 != param_2) {
    uVar1 = FUN_1012370e(*param_1,param_2,param_2,param_2 >> 0x1f);
    if (uVar1 == 0) {
      if (param_2 < iVar2) {
        uVar1 = FUN_10123cde();
      }
      else {
        uVar1 = FUN_1012359a(*param_1);
      }
      if ((int)uVar1 < 0x14) goto LAB_1006ca76;
    }
    else if (uVar1 < 0x14) {
LAB_1006ca76:
      return (int)*(char *)(DAT_1006ca94 + uVar1);
    }
  }
  return -5;
}

