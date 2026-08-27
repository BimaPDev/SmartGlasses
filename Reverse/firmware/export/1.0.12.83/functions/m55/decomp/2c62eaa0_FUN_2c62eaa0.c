/* FUN_2c62eaa0 @ 0x2c62eaa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c62eaa0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_2c62e4a8(*(undefined4 *)(param_1 + 0x30),0,*(undefined4 *)(param_1 + 0x2c),0,0x400);
  iVar3 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20);
  if ((int)uVar1 < 0x198) {
    uVar1 = (int)(uVar1 * 0x9c4) >> 10;
  }
  else {
    iVar2 = iVar3 >> 0x1f;
    if (uVar1 - 0x198 < 0xce) {
      uVar1 = (uVar1 - 0x198) * -5 + 0x400;
      iVar3 = (int)((longlong)_LAB_2c62eb78 * (longlong)iVar3 >> 0x23) - iVar2;
    }
    else if (uVar1 - 0x266 < 0xcd) {
      uVar1 = (uVar1 - 0x266) * 5;
      iVar3 = (int)((longlong)_LAB_2c62eb78 * (longlong)iVar3 >> 0x23) - iVar2;
    }
    else if (uVar1 - 0x333 < 0x66) {
      uVar1 = (uVar1 - 0x333) * -10 + 0x400;
      iVar3 = (int)((longlong)_LAB_2c62eb78 * (longlong)iVar3 >> 0x24) - iVar2;
    }
    else if (uVar1 - 0x399 < 0x68) {
      uVar1 = (uVar1 - 0x399) * 10;
      iVar3 = (int)((longlong)_LAB_2c62eb78 * (longlong)iVar3 >> 0x24) - iVar2;
    }
  }
  uVar1 = uVar1 & ~((int)uVar1 >> 0x1f);
  if (0x3ff < (int)uVar1) {
    uVar1 = 0x400;
  }
  iVar2 = FUN_2c62e27c(uVar1,0x400,800,500,0);
  return *(int *)(param_1 + 0x28) - (iVar3 * iVar2 >> 10);
}

