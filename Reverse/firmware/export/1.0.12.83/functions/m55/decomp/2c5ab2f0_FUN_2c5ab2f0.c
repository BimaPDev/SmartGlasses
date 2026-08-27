/* FUN_2c5ab2f0 @ 0x2c5ab2f0 */

byte FUN_2c5ab2f0(void)

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 in_r3;
  undefined4 unaff_lr;
  
  iVar2 = FUN_2c5abf68();
  if (*(int *)(iVar2 + 0x180) == 0) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x180) + 8);
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0x48);
    if (iVar2 != 0) {
      bVar1 = FUN_2c606b94(iVar2,1,extraout_r2,in_r3,in_r3,unaff_lr);
      return bVar1 ^ 1;
    }
    return 0;
  }
  return 0;
}

