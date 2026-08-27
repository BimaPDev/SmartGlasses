/* FUN_2c5c25c4 @ 0x2c5c25c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c25c4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x2c5e90c4(6,3);
  if ((iVar1 == 1) && (iVar1 = func_0x2c5e90c4(6,1), iVar1 == 0)) {
    if (*(int *)(param_3 + 0x48) == 0) {
      uVar2 = 5000;
      goto LAB_2c5c25f6;
    }
  }
  else if (*(int *)(param_3 + 0x48) == 0) {
    uVar2 = 500;
LAB_2c5c25f6:
    iVar1 = FUN_2c62bdd8(_LAB_2c5c260c,uVar2,param_3);
    *(int *)(param_3 + 0x48) = iVar1;
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
    return;
  }
  return;
}

