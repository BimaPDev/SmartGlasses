/* FUN_2c5ae6a8 @ 0x2c5ae6a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ae6a8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  
  FUN_2c5abf68();
  FUN_2c5acf1c();
  uVar1 = FUN_2c48e424(param_2,_LAB_2c5ae844);
  uVar3 = FUN_2c48de20();
  if (NAN((double)CONCAT44(extraout_s1,uVar3))) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5ae854,0x2fe,DAT_2c5ae850,_LAB_2c5ae860,_LAB_2c5ae85c);
  }
  uVar1 = FUN_2c48de20(uVar1);
  uVar1 = VectorFloatToSigned(CONCAT44(extraout_s1_00,uVar1),3);
  FUN_2c48e424(param_2,_LAB_2c5ae848);
  iVar2 = FUN_2c48de10();
  if (iVar2 != 0) {
    uVar3 = FUN_2c6684cc();
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5ae854,0x30b,DAT_2c5ae850,_LAB_2c5ae84c,uVar1,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5ae854,0x30b,DAT_2c5ae850,_LAB_2c5ae84c,uVar1,0xffffffff);
}

