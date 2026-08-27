/* FUN_2c5e3950 @ 0x2c5e3950 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e3950(undefined4 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_2c62a470();
  FUN_2c5fee80();
  uVar2 = FUN_2c606a10();
  FUN_2c603a04(uVar2,0,_DAT_2c5e3ae0);
  FUN_2c607048(uVar2,0x27d1);
  FUN_2c6072bc(uVar2,2,0,8);
  uVar3 = FUN_2c637344(uVar2);
  FUN_2c603a04(uVar3,0,_DAT_2c5e3ae0);
  FUN_2c606e68(uVar3,0x10,0);
  FUN_2c606d9c(uVar3,1,0);
  FUN_2c606d84(uVar3,0xff00ff00,0);
  FUN_2c606d90(uVar3,0xff,0);
  FUN_2c606d6c(uVar3,0xff,0);
  FUN_2c606d60(uVar3,0xff000000,0);
  FUN_2c606d30(uVar3,0x10,0);
  FUN_2c606d3c(uVar3,0x10,0);
  FUN_2c606d18(uVar3,0xc,0);
  FUN_2c606d24(uVar3,0xc,0);
  FUN_2c6388dc(uVar3,1);
  FUN_2c638730(uVar3,param_1);
  FUN_2c606e5c(uVar3,2,0);
  FUN_2c6072bc(uVar3,9,0);
  FUN_2c606e44(uVar3,5,0);
  FUN_2c606e20(uVar3,0xff00ff00,0);
  FUN_2c606e2c(uVar3,0xff,0);
  iVar4 = FUN_2c5e33e4();
  if (iVar4 == 1) {
    uVar5 = FUN_2c5e2e58(_LAB_2c5e3aec);
    FUN_2c606e38(uVar3,uVar5,0);
    uVar6 = FUN_2c66c4ec(param_1);
    uVar5 = _LAB_2c5e3aec;
  }
  else {
    uVar5 = FUN_2c5e2e58(_LAB_2c5e3ae4);
    FUN_2c606e38(uVar3,uVar5,0);
    uVar6 = FUN_2c66c4ec(param_1);
    uVar5 = _LAB_2c5e3ae4;
  }
  uVar5 = FUN_2c5e2e58(uVar5);
  iVar4 = FUN_2c62b85c(param_1,uVar6,uVar5,0,0);
  if (iVar4 < 0x119) {
    FUN_2c607048(uVar3,0x27d1);
  }
  else {
    iVar4 = FUN_2c6033b4(uVar3,0,0x57);
    FUN_2c607048(uVar3,0x13a,(int)(short)(*(short *)(iVar4 + 8) * 4 + 0x2a));
  }
  FUN_2c608c7c(uVar3);
  uVar1 = FUN_2c6073f8(uVar3);
  *_LAB_2c5e3ae8 = uVar1;
  return uVar2;
}

