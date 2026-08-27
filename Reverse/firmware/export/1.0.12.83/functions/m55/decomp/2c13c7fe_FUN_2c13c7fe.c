/* FUN_2c13c7fe @ 0x2c13c7fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c13c7fe(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  int iStack_28;
  int iStack_24;
  
  iStack_24 = *_DAT_2c13c938;
  iStack_28 = param_2;
  uVar1 = FUN_2c13c41c(0x104,param_2,param_3,0);
  if (uVar1 == 0) {
    iStack_28 = 0xf;
    uVar2 = FUN_2c13c41c(0x100,0xf);
    FUN_2c13bc94(0x100,&iStack_28);
    FUN_2c13bc94(0x40,&iStack_28);
    FUN_2c13bc94(0x40,&iStack_28);
    iStack_28 = 10;
    uVar3 = FUN_2c13c41c(0xa00,10);
    iStack_28 = 10;
    uVar4 = FUN_2c13c41c(0x1000,10);
    iStack_28 = 0xff;
    uVar5 = FUN_2c13c41c(0x104);
    iStack_28 = 0xf;
    uVar6 = FUN_2c13c41c(0x100,0xf);
    iVar7 = 9;
    FUN_2c13bc94(0x100,&iStack_28);
    do {
      FUN_2c13bc94(0x1004,&iStack_28);
      if (iStack_28 << 0x1b < 0) break;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iStack_28 = 0;
    puVar8 = (undefined1 *)(param_1 + 0xc);
    puVar10 = (undefined4 *)(param_1 + 0x3c);
    do {
      FUN_2c13c41c(0x100c,iStack_28);
      puVar9 = puVar8 + 1;
      *puVar8 = 10;
      puVar8[8] = 0;
      *puVar10 = 0;
      puVar8 = puVar9;
      puVar10 = puVar10 + 1;
    } while ((undefined1 *)(param_1 + 0x14) != puVar9);
    iStack_28 = 0xa5;
    uVar1 = FUN_2c13c41c(0x34);
    uVar1 = uVar6 | uVar2 | uVar3 | uVar4 | uVar5 | uVar1;
    if (uVar1 != 0) {
      FUN_2c135988(4,0x491,_DAT_2c13c948,_DAT_2c13c944,_DAT_2c13c940,_DAT_2c13c93c,uVar1);
    }
    func_0x2c13f650(0x32);
  }
  else {
    FUN_2c135988(4,0x457,_DAT_2c13c948,_DAT_2c13c944,_DAT_2c13c94c,_DAT_2c13c93c,uVar1);
  }
  if (*_DAT_2c13c938 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    FUN_2c13424c();
  }
  return uVar1;
}

