/* FUN_2c63df34 @ 0x2c63df34 */

/* WARNING: Removing unreachable block (ram,0x2c63d8cc) */
/* WARNING: Removing unreachable block (ram,0x2c63da24) */
/* WARNING: Removing unreachable block (ram,0x2c63da44) */
/* WARNING: Removing unreachable block (ram,0x2c63da2e) */
/* WARNING: Removing unreachable block (ram,0x2c63d95c) */
/* WARNING: Removing unreachable block (ram,0x2c63da14) */
/* WARNING: Removing unreachable block (ram,0x2c63d96e) */
/* WARNING: Removing unreachable block (ram,0x2c63da3e) */
/* WARNING: Removing unreachable block (ram,0x2c63d8e4) */
/* WARNING: Removing unreachable block (ram,0x2c63d8ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c63df34(uint param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 unaff_r4;
  
  iVar2 = FUN_2c6411ac();
  if (iVar2 == 0) {
    return 0;
  }
  if (100 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c63df74,0x135,_LAB_2c63df70,_LAB_2c63df6c);
  }
  uVar1 = FUN_2c489b44();
  FUN_2c63eb94();
  iVar2 = FUN_2c63e864();
  if (iVar2 != 0) {
    FUN_2c63e8a0((uint)((ulonglong)DAT_2c63da80 * (ulonglong)param_1 >> 0x23) * 10,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c63da6c,0x18,DAT_2c63da70,DAT_2c63da68,param_1,unaff_r4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c63da6c,0x18,DAT_2c63da70,DAT_2c63da68,param_1,unaff_r4);
}

