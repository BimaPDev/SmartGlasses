/* FUN_2c5cb110 @ 0x2c5cb110 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cb110(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = *_LAB_2c5cb1f0;
  uVar1 = FUN_2c48e424(param_2,_LAB_2c5cb1f4,param_3,0);
  uVar2 = FUN_2c48e424(param_2,_DAT_2c5cb1f8);
  iVar3 = FUN_2c48e424(param_2,_DAT_2c5cb1fc);
  iVar4 = FUN_2c5d6974(uVar1,&uStack_1c);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5cb204,0x1fe,_DAT_2c5cb208,_LAB_2c5cb210);
  }
  if (uStack_1c < 0x10) {
    if (iVar3 != 0) {
      iVar3 = FUN_2c48e80c(iVar3);
      uVar1 = FUN_2c5c685c();
      func_0x2c5c7164(uVar1,iVar3 == 0);
    }
    iVar3 = FUN_2c5d6974(uVar2,&uStack_18);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5cb204,0x20b,_DAT_2c5cb208,_LAB_2c5cb200,uStack_1c,uStack_18);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5cb204,0x208,_DAT_2c5cb208,_LAB_2c5cb20c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5cb204,0x1fa,_DAT_2c5cb208,_LAB_2c5cb214);
}

