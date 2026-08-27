/* FUN_2c5c0620 @ 0x2c5c0620 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c0620(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  uVar1 = FUN_2c606a10(*(undefined4 *)(param_1 + 8));
  uVar2 = _DAT_2c5c06bc;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  FUN_2c603a04(uVar1,0,uVar2);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x14),0x10);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x14),0x2064,0x27d1);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x14),0);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  FUN_2c606d30(uVar2,0xc,0);
  FUN_2c606d3c(uVar2,0xc,0);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  FUN_2c606d18(uVar2,0xc,0);
  FUN_2c606d24(uVar2,0xc,0);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x14),0x10,0);
  FUN_2c606d9c(*(undefined4 *)(param_1 + 0x14),1,0);
  FUN_2c606d84(*(undefined4 *)(param_1 + 0x14),0xff00ff00,0);
  FUN_2c606d90(*(undefined4 *)(param_1 + 0x14),0x4c,0);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  FUN_2c603c40(uVar2,*DAT_2c627e48,1,0,unaff_r4,unaff_lr);
  FUN_2c603c40(uVar2,10,*DAT_2c627e4c,0);
  return;
}

