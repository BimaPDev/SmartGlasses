/* FUN_2c63dea8 @ 0x2c63dea8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c63dea8(uint param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  
  iVar3 = FUN_2c6411ac();
  if (iVar3 == 0) {
    return 0;
  }
  if (100 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c63deec,0x119,_LAB_2c63dee8,_LAB_2c63dee4);
  }
  uVar2 = FUN_2c489b44();
  if (param_2 == 0) {
    FUN_2c63eb94();
    iVar3 = FUN_2c63e864();
    if (iVar3 != 0) {
      FUN_2c63e8a0((uint)((ulonglong)DAT_2c63da80 * (ulonglong)param_1 >> 0x23) * 10,uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c63da6c,0x18,DAT_2c63da70,DAT_2c63da68,param_1,unaff_r4,unaff_r5,unaff_r6)
      ;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c63da6c,0x18,DAT_2c63da70,DAT_2c63da68,param_1,unaff_r4,unaff_r5,unaff_r6);
  }
  FUN_2c63b92c(1);
  FUN_2c63eb94();
  iVar3 = FUN_2c63e864();
  if (iVar3 == 0) {
    FUN_2c6411e0();
    iVar3 = FUN_2c640208();
    if (iVar3 != 0) {
      FUN_2c63f744(0,1);
    }
    iVar3 = FUN_2c63e954(uVar2,0);
    if (iVar3 == 0) {
      uVar1 = (ulonglong)DAT_2c63da80;
      if (param_3 != 0) {
        FUN_2c5e317c(0x1f,1,param_1,0,1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c63da6c,0xa1,DAT_2c63da8c,DAT_2c63da84,
                   (uint)(uVar1 * param_1 >> 0x23) * 10);
    }
  }
  FUN_2c63e8a0(param_1 & 0xffff,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c63da6c,0x18,DAT_2c63da70,DAT_2c63da68,param_1);
}

