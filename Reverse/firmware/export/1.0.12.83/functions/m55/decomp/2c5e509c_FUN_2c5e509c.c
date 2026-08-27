/* FUN_2c5e509c @ 0x2c5e509c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e509c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 auStack_2c [2];
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c5e5210;
  auStack_2c[0] = param_1;
  iVar1 = FUN_2c66c5b6(auStack_2c,_LAB_2c5e5214,param_3,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e5220,0x9f,_LAB_2c5e521c,_LAB_2c5e5238);
  }
  uVar2 = FUN_2c6684cc();
  uStack_24 = 0;
  iStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  switch(uVar2) {
  case 1:
    iVar1 = FUN_2c66c5b6(auStack_2c,_LAB_2c5e5214);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c5e5220,0xac,_LAB_2c5e521c,_LAB_2c5e5240);
    }
    uVar3 = 1;
    uVar2 = 0xaf;
    iStack_20 = iVar1;
    break;
  case 2:
    iVar1 = FUN_2c66c5b6(auStack_2c,_LAB_2c5e5214);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c5e5220,0xb4,_LAB_2c5e521c,_LAB_2c5e5240);
    }
    uVar3 = 3;
    uStack_1c = _DAT_2c5e5234;
    uVar2 = 0xb9;
    iStack_20 = iVar1;
    break;
  case 3:
    uVar2 = FUN_2c66c5b6(auStack_2c,_LAB_2c5e5214);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5e5220,0xbe,_LAB_2c5e521c,_LAB_2c5e5224,uVar2);
  case 4:
  case 5:
    if (*_LAB_2c5e5210 != iStack_14) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5e5220,0xd0,_LAB_2c5e521c,_LAB_2c5e5244);
  }
  uStack_18 = CONCAT31(uStack_18._1_3_,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5e5220,uVar2,_LAB_2c5e521c,_LAB_2c5e5218,iStack_20);
}

