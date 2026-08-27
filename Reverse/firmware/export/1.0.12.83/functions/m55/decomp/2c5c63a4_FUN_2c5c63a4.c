/* FUN_2c5c63a4 @ 0x2c5c63a4 */

void FUN_2c5c63a4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c621080(param_2);
  if ((iVar1 != 0) && (iVar1 = *(int *)(param_2 + 0xc), iVar1 != 0)) {
    iVar2 = FUN_2c66b624(iVar1,DAT_2c5c6440);
    if (iVar2 != 0) {
      iVar2 = FUN_2c66b624(iVar1,DAT_2c5c6444);
      if (iVar2 == 0) {
        FUN_2c5c55d8();
        uVar3 = FUN_2c5c5b3c();
        iVar2 = FUN_2c66b624(uVar3,DAT_2c5c6444);
        if (iVar2 == 0) {
          return;
        }
      }
      FUN_2c5c55d8();
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5c585c,0x48,DAT_2c5c5858,DAT_2c5c5854,iVar1);
    }
    FUN_2c5c55d8();
    uVar3 = FUN_2c5c5b3c();
    iVar1 = FUN_2c66b624(uVar3,DAT_2c5c6448);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5c6454,0x26a,DAT_2c5c6450,DAT_2c5c644c);
    }
  }
  return;
}

