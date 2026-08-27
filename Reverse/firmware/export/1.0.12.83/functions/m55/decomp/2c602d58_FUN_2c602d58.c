/* FUN_2c602d58 @ 0x2c602d58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c602d58(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    uVar4 = **(undefined4 **)(param_1 + 0xc);
    uVar1 = FUN_2c602bd8();
    FUN_2c602340(uVar4,0xf,uVar1);
    FUN_2c607df0(**(undefined4 **)(param_1 + 0xc));
  }
  piVar2 = (int *)FUN_2c62ca10(param_1);
  while (piVar2 != (int *)0x0) {
    if (*(int *)(*piVar2 + 8) != 0) {
      *(undefined4 *)(*(int *)(*piVar2 + 8) + 8) = 0;
    }
    piVar2 = (int *)FUN_2c62ca20(param_1);
  }
  iVar3 = 0;
  while (iVar3 = FUN_2c62a5c0(iVar3), iVar3 != 0) {
    while (*(int *)(iVar3 + 0x50) == param_1) {
      func_0x2c5ff5b8(iVar3,0);
      iVar3 = FUN_2c62a5c0(iVar3);
      if (iVar3 == 0) goto LAB_2c602dba;
    }
  }
LAB_2c602dba:
  FUN_2c62c9e8(param_1);
  FUN_2c62c998(_LAB_2c602dd4,param_1);
  if ((param_1 != DAT_2c62beb8) && (param_1 != 0)) {
    FUN_2c4726f0();
    return;
  }
  return;
}

