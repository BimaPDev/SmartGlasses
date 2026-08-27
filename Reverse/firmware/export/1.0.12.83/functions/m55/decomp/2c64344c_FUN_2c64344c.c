/* FUN_2c64344c @ 0x2c64344c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64344c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_2c64358c;
  if (2 < param_1 - 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c643598,0xaf,DAT_2c6435a4,DAT_2c6435a0,param_1);
  }
  iVar5 = (param_1 - 1U) * 0x58;
  iVar6 = *(int *)(DAT_2c643588 + iVar5 + 0x44);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c643598,0x157,DAT_2c643594,DAT_2c6435ac,DAT_2c6435b0);
  }
  if (*(int *)(DAT_2c64358c + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c643598,0x15c,DAT_2c643594,DAT_2c64359c);
  }
  if (param_1 == 2) {
    iVar5 = FUN_2c6433c4(DAT_2c643588 + iVar5 + 0x48,iVar6);
    uVar4 = DAT_2c643598;
    uVar3 = DAT_2c643594;
    uVar2 = DAT_2c643590;
    if (iVar5 == 0) {
      *(int *)(iVar1 + 0x14) = iVar6;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,uVar4,0x16d,uVar3,uVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c643598,0x167,DAT_2c643594,DAT_2c6435c0,2,DAT_2c6435bc);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c643598,0x161,DAT_2c643594,LAB_2c6435b8,param_1);
}

