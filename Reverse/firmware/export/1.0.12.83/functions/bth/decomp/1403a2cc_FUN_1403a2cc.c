/* FUN_1403a2cc @ 0x1403a2cc */

int FUN_1403a2cc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = FUN_140006d4();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_1403a030(param_1,param_2,1);
  if (iVar1 != 0) {
    return iVar1;
  }
  uVar6 = DAT_1403a3d8 - DAT_1403a3d4;
  uVar5 = DAT_1403a3d4 + 0x20000000;
  FUN_1402a6e8(4,0x282,DAT_1403a3e4,DAT_1403a3e0,DAT_1403a3dc,uVar5,uVar6);
  if (uVar6 != 0) {
    if (((uVar5 | uVar6) & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_1403a404,uVar5,uVar6);
    }
    uVar2 = FUN_14039ec8();
    if (uVar2 == 0xff) {
      return -1;
    }
    iVar1 = FUN_14039f74(uVar2,uVar5,uVar6,1,1);
    if (iVar1 != 0) {
      if (uVar2 < 8) {
        FUN_14039f2c(uVar2);
      }
      uVar3 = 0x29d;
      uVar4 = DAT_1403a3e8;
      goto LAB_1403a348;
    }
  }
  uVar6 = DAT_1403a3f4 - DAT_1403a3f0;
  uVar5 = DAT_1403a3f0 + 0x20000000;
  FUN_1402a6e8(4,0x2ac,DAT_1403a3e4,DAT_1403a3e0,DAT_1403a3f8,uVar5,uVar6);
  if (uVar6 == 0) {
    return 0;
  }
  if (((uVar5 | uVar6) & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1403a400,uVar5,uVar6);
  }
  uVar2 = FUN_14039ec8();
  if (uVar2 == 0xff) {
    return -1;
  }
  iVar1 = FUN_14039f74(uVar2,uVar5,uVar6,1,1);
  if (iVar1 == 0) {
    return 0;
  }
  if (uVar2 < 8) {
    FUN_14039f2c(uVar2);
  }
  uVar3 = 0x2c7;
  uVar4 = DAT_1403a3fc;
LAB_1403a348:
  FUN_1402a6e8(4,uVar3,DAT_1403a3e4,DAT_1403a3e0,DAT_1403a3ec,uVar4,iVar1);
  return iVar1;
}

