/* FUN_2c5caf34 @ 0x2c5caf34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5caf34(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  
  uVar1 = FUN_2c48e424(param_2,_LAB_2c5cb00c);
  iVar2 = FUN_2c48e424(uVar1,_LAB_2c5cb010);
  if (iVar2 == 0) {
    FUN_2c48de10(uVar1);
    uVar1 = FUN_2c48e3b8();
    iVar2 = FUN_2c48e83c(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5cb01c,0x1d1,_DAT_2c5cb018,_DAT_2c5cb028);
    }
    FUN_2c48e424(uVar1,_LAB_2c5cb010);
    uVar1 = FUN_2c48de20();
    iVar2 = VectorFloatToSigned(CONCAT44(extraout_s1_00,uVar1),3);
  }
  else {
    iVar3 = FUN_2c48e83c();
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5cb01c,0x1ca,_DAT_2c5cb018,_DAT_2c5cb020);
    }
    uVar1 = FUN_2c48de20(iVar2);
    iVar2 = VectorFloatToSigned(CONCAT44(extraout_s1,uVar1),3);
  }
  if (0 < iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5cb01c,0x1d8,_DAT_2c5cb018,_DAT_2c5cb014,iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5cb01c,0x1db,_DAT_2c5cb018,_DAT_2c5cb024);
}

