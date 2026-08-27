/* FUN_2c5e36e0 @ 0x2c5e36e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e36e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar4 = _DAT_2c5e38d4;
  FUN_2c62a470();
  FUN_2c5fee80();
  uVar2 = FUN_2c606a10();
  FUN_2c603a04(uVar2,0,uVar4);
  FUN_2c607048(uVar2,0x27d1);
  FUN_2c6072bc(uVar2,2,0,8);
  FUN_2c606d6c(uVar2,0xff,0);
  FUN_2c606d60(uVar2,0xff000000,0);
  uVar3 = FUN_2c606a10(uVar2);
  FUN_2c603a04(uVar3,0,uVar4);
  FUN_2c606e68(uVar3,0x10,0);
  FUN_2c606d9c(uVar3,1,0);
  FUN_2c606d84(uVar3,0xff00ff00,0);
  FUN_2c606d90(uVar3,0x4c,0);
  FUN_2c606d30(uVar3,0xe,0);
  FUN_2c606d3c(uVar3,0xe,0);
  FUN_2c606d18(uVar3,0xc,0);
  FUN_2c606d24(uVar3,0xc,0);
  FUN_2c607048(uVar3,0x27d1);
  FUN_2c6072bc(uVar3,9,0);
  uVar4 = FUN_2c6313f4(uVar3);
  FUN_2c607048(uVar4,0x2c);
  FUN_2c63140c(uVar4,param_3);
  FUN_2c6072bc(uVar4,7,0);
  uVar5 = FUN_2c637344(uVar3);
  FUN_2c608808(uVar5,uVar4,0x13,6,2);
  FUN_2c607048(uVar5,0x27d1);
  FUN_2c606e20(uVar5,0xff00ff00,0);
  FUN_2c606e2c(uVar5,0xff,0);
  uVar6 = FUN_2c5e2e58(_LAB_2c5e38d8);
  FUN_2c606e38(uVar5,uVar6,0);
  FUN_2c6388dc(uVar5,1);
  FUN_2c6388cc(uVar5,1);
  FUN_2c638730(uVar5,param_1);
  uVar6 = FUN_2c637344(uVar3);
  FUN_2c608808(uVar6,uVar4,0x15,6,3);
  FUN_2c607048(uVar6,0x27d1);
  FUN_2c606e20(uVar6,0xff00ff00,0);
  FUN_2c606e2c(uVar6,0xff,0);
  uVar4 = FUN_2c5e2e58(_LAB_2c5e38dc);
  FUN_2c606e38(uVar6,uVar4,0);
  FUN_2c6388dc(uVar6,1);
  FUN_2c6388cc(uVar6,1);
  FUN_2c638730(uVar6,param_2);
  FUN_2c608c7c(uVar3);
  uVar1 = FUN_2c6073f8(uVar3);
  *_LAB_2c5e38e0 = uVar1;
  iVar7 = FUN_2c6073ec(uVar5);
  if (99 < iVar7) {
    iVar7 = 100;
  }
  FUN_2c6070bc(uVar5,(int)(short)iVar7);
  iVar7 = FUN_2c6073ec(uVar6);
  if (99 < iVar7) {
    iVar7 = 100;
  }
  FUN_2c6070bc(uVar6,(int)(short)iVar7);
  return uVar2;
}

