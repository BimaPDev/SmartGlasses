/* FUN_2c4b4d10 @ 0x2c4b4d10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4b4d10(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_2c648600(_LAB_2c4b4d70,param_1,param_2,param_3,param_4);
  FUN_2c498c40();
  if (param_1 < 0) {
    param_1 = param_1 + 1;
  }
  iVar1 = *(int *)(_LAB_2c4b4d74 + 0x18) + param_2 * 0x140 + (param_1 >> 1);
  if (param_4 != 0) {
    iVar2 = 0;
    if (param_3 < 0) {
      param_3 = param_3 + 1;
    }
    do {
      iVar2 = iVar2 + 1;
      FUN_2c674268(iVar1,0xff,param_3 >> 1);
      iVar1 = iVar1 + 0x140;
    } while (iVar2 != param_4);
  }
  FUN_2c644080(*(undefined4 *)(_LAB_2c498c68 + 0x38));
  return 0;
}

