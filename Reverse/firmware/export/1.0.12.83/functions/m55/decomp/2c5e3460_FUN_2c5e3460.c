/* FUN_2c5e3460 @ 0x2c5e3460 */

undefined4 FUN_2c5e3460(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_2c62a470();
  FUN_2c5fee80();
  uVar2 = FUN_2c606a10();
  FUN_2c603a04(uVar2,0,DAT_2c5e3670);
  FUN_2c607048(uVar2,0x27d1);
  FUN_2c6072bc(uVar2,2,0,8);
  FUN_2c606d6c(uVar2,0xff,0);
  FUN_2c606d60(uVar2,0xff000000,0);
  uVar3 = FUN_2c606a10(uVar2);
  FUN_2c603a04(uVar3,0,DAT_2c5e3670);
  FUN_2c606e68(uVar3,0x10,0);
  FUN_2c606d9c(uVar3,1,0);
  FUN_2c606d84(uVar3,0xff00ff00,0);
  FUN_2c606d90(uVar3,0xff,0);
  FUN_2c606d30(uVar3,0x10,0);
  FUN_2c606d3c(uVar3,0x10,0);
  FUN_2c606d18(uVar3,10,0);
  FUN_2c606d24(uVar3,10,0);
  FUN_2c607048(uVar3,0x27d1);
  FUN_2c6072bc(uVar3,9,0);
  uVar4 = FUN_2c6313f4(uVar3);
  FUN_2c607048(uVar4,0x20);
  FUN_2c63140c(uVar4,param_2);
  FUN_2c6072bc(uVar4,7,0);
  uVar5 = FUN_2c637344(uVar3);
  FUN_2c6388dc(uVar5,1);
  FUN_2c638730(uVar5,param_1);
  FUN_2c606d18(uVar5,1,0);
  FUN_2c606e20(uVar5,0xff00ff00,0);
  FUN_2c606e2c(uVar5,0xff,0);
  FUN_2c606e44(uVar5,5,0);
  iVar6 = FUN_2c5e33e4();
  if (iVar6 == 1) {
    uVar7 = FUN_2c5e2e58(DAT_2c5e367c);
    FUN_2c606e38(uVar5,uVar7,0);
    uVar7 = FUN_2c66c4ec(param_1);
    uVar8 = FUN_2c5e2e58(DAT_2c5e367c);
    iVar6 = FUN_2c62b85c(param_1,uVar7,uVar8,0,0);
    if (iVar6 < 0x1e1) goto LAB_2c5e35c8;
    FUN_2c606d18(uVar5,3,0);
  }
  else {
    uVar7 = FUN_2c5e2e58(DAT_2c5e3674);
    FUN_2c606e38(uVar5,uVar7,0);
    uVar7 = FUN_2c66c4ec(param_1);
    uVar8 = FUN_2c5e2e58(DAT_2c5e3674);
    iVar6 = FUN_2c62b85c(param_1,uVar7,uVar8,0,0);
    if (iVar6 < 0x1e1) {
LAB_2c5e35c8:
      if (iVar6 < 0xf1) {
        FUN_2c608808(uVar5,uVar4,0x14,4,0);
        FUN_2c607048(uVar5,0x27d1);
        goto LAB_2c5e35e8;
      }
    }
    else {
      FUN_2c606d18(uVar5,6,0);
    }
  }
  FUN_2c6072bc(uVar5,8,0);
  FUN_2c607048(uVar3,0x13a,0x4c);
  FUN_2c607048(uVar5,0xf0,0x38);
LAB_2c5e35e8:
  FUN_2c608c7c(uVar3);
  uVar1 = FUN_2c6073f8(uVar3);
  *DAT_2c5e3678 = uVar1;
  return uVar2;
}

