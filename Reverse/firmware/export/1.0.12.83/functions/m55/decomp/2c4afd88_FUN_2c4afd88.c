/* FUN_2c4afd88 @ 0x2c4afd88 */

void FUN_2c4afd88(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r2;
  uint uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_2c4b44a4();
    FUN_2c4b44b4(0,uVar3 & 0xfffffffd);
    FUN_2c4b44b4(0,uVar3 & 0xffff0000 | uVar3 & 0xfc01 | 0x300);
    FUN_2c4b44b4(0,uVar3 & 0xffff0000 | uVar3 & 0xfc01 | 0x100);
    iVar2 = 1;
    do {
      FUN_2c4b4238(iVar2);
      uVar3 = FUN_2c4b44a4(4);
      iVar2 = iVar2 << 1;
    } while ((~uVar3 & 0xb05) != 0);
    FUN_2c4b44b4(0x520,4);
    uVar3 = 0xffffffff;
    iVar2 = 0x14;
  }
  else {
    uVar3 = 1;
    while( true ) {
      uVar1 = FUN_2c4b44a4(4);
      if (((~uVar1 & 0xb05) == 0) || (999 < uVar3)) break;
      FUN_2c4b4238(uVar3);
      uVar3 = uVar3 << 1;
    }
    uVar1 = FUN_2c4b44a4(0);
    uVar3 = uVar1 & 0xffff0000 | uVar1 & 0xfc03 | 4;
    FUN_2c4b44b4(0,uVar1 & 0xffff0000 | uVar1 & 0xfc03 | 0x204,extraout_r2,
                 uVar1 & 0xfffffc03 | 0x204,param_4);
    FUN_2c4b44b4(0,uVar3);
    uVar3 = uVar3 | 2;
    iVar2 = 0;
  }
  *(uint *)(iVar2 + *(int *)*DAT_2c4b44c0) = uVar3;
  return;
}

