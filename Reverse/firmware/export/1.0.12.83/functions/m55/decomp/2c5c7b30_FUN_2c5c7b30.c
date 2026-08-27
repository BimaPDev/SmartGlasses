/* FUN_2c5c7b30 @ 0x2c5c7b30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c7b30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 uVar3;
  undefined4 unaff_lr;
  
  uVar3 = *(undefined4 *)(param_2 + 4);
  iVar1 = FUN_2c66b624(uVar3,_LAB_2c5c7ba0);
  if (iVar1 != 0) {
    iVar1 = FUN_2c66b624(uVar3,_LAB_2c5c7ba4);
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    else {
      iVar1 = FUN_2c66b624(uVar3,_LAB_2c5c7ba8);
      if (iVar1 != 0) {
        return;
      }
      uVar3 = 2;
    }
    FUN_2c5dc53c(1,0xfa5,uVar3,0,DAT_2c5c690c,0,unaff_r4,unaff_lr);
    FUN_2c5dc5e0();
    return;
  }
  if (param_1 != 3) {
    return;
  }
  iVar1 = FUN_2c6684cc(*(undefined4 *)(param_2 + 8));
  iVar2 = FUN_2c5c685c();
  *(int *)(iVar2 + 0x350) = iVar1;
  FUN_2c5e317c(0x18,iVar1,iVar1,iVar1 >> 0x1f,1);
  if (*(int *)(iVar2 + 0x2e4) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5cda44,0x97,_LAB_2c5cda40,_LAB_2c5cda3c);
}

