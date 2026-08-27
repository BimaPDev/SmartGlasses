/* FUN_2c6132c8 @ 0x2c6132c8 */

int FUN_2c6132c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_2c613320;
  uVar2 = FUN_2c629df4();
  iVar3 = FUN_2c612898(iVar1,param_1,param_2,param_3);
  if (iVar3 == 0) {
    FUN_2c62c3b0(iVar1,0x2c);
    *(undefined4 *)(iVar1 + 0x28) = 0x80000000;
    iVar3 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    iVar3 = DAT_2c613320;
    if (*(int *)(iVar1 + 0x1c) == 0) {
      iVar3 = FUN_2c629e10(uVar2);
      if (iVar3 == 0) {
        *(undefined4 *)(iVar1 + 0x1c) = 1;
        return iVar1;
      }
      *(int *)(iVar1 + 0x1c) = iVar3;
      iVar3 = DAT_2c613320;
    }
  }
  return iVar3;
}

