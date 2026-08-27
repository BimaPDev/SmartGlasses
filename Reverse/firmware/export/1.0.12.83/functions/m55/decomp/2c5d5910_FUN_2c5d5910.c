/* FUN_2c5d5910 @ 0x2c5d5910 */

undefined4 * FUN_2c5d5910(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = DAT_2c5d5bdc;
  uVar5 = 0;
  *(char *)(param_1 + 1) = (char)param_3;
  *param_1 = uVar1;
  param_1[2] = 0;
  if (param_3 == 1) {
    uVar1 = FUN_2c606a10(param_2);
    param_1[2] = uVar1;
    FUN_2c5d58a4(param_1,uVar1);
    FUN_2c607048(param_1[2],100,0x60);
    FUN_2c6072bc(param_1[2],9,0,0);
    uVar1 = FUN_2c61c7d0(param_1[2]);
    FUN_2c607048(uVar1,0x30);
    FUN_2c6072bc(uVar1,2,0,8);
    FUN_2c606e14(uVar1,0x4c,0);
    FUN_2c606e14(uVar1,0xff,0x20000);
    FUN_2c606df0(uVar1,4,0x20000);
    FUN_2c606df0(uVar1,4,0);
    uVar2 = FUN_2c637344(param_1[2]);
    FUN_2c5d58a4(param_1,uVar2);
    uVar1 = FUN_2c66c4ec(param_4);
    uVar5 = FUN_2c5e2e80(DAT_2c5d5be0);
    iVar3 = FUN_2c62b85c(param_4,uVar1,uVar5,0,0);
    FUN_2c606d18(uVar2,4,0);
    FUN_2c606d24(uVar2,4,0);
    FUN_2c606e5c(uVar2,2,0);
    if (100 < iVar3) {
      iVar3 = 100;
    }
    FUN_2c607048(uVar2,iVar3,0x1c);
    uVar5 = 0x44;
    uVar4 = 0;
    uVar1 = 2;
  }
  else {
    if (param_3 == 2) {
      uVar1 = FUN_2c606a10(param_2);
      param_1[2] = uVar1;
      FUN_2c5d58a4(param_1,uVar1);
      FUN_2c607048(param_1[2],0x20);
      FUN_2c6072bc(param_1[2],2,0,8);
      FUN_2c606d60(param_1[2],0xff000000,0);
      uVar1 = FUN_2c61c7d0(param_1[2]);
      FUN_2c607048(uVar1,0x20);
LAB_2c5d5980:
      FUN_2c606e14(uVar1,0x4c,0);
      FUN_2c606e14(uVar1,0xff,0x20000);
      FUN_2c606df0(uVar1,4,0x20000);
      FUN_2c606df0(uVar1,4,0);
      return param_1;
    }
    if (param_3 != 3) {
      if (param_3 != 4) {
        uVar1 = FUN_2c606a10(param_2);
        param_1[2] = uVar1;
        FUN_2c5d58a4(param_1);
        FUN_2c607048(param_1[2],0x30);
        FUN_2c6072bc(param_1[2],9,0,0);
        uVar1 = FUN_2c61c7d0(param_1[2]);
        FUN_2c607048(uVar1,0x30);
        FUN_2c6072bc(uVar1,9,0,0);
        goto LAB_2c5d5980;
      }
      uVar1 = FUN_2c606a10(param_2);
      param_1[2] = uVar1;
      FUN_2c5d58a4(param_1,uVar1);
      FUN_2c607048(param_1[2],0x27d1,0x34);
      FUN_2c6072bc(param_1[2],2,0,8);
      FUN_2c606d9c(param_1[2],1,0);
      FUN_2c606d84(param_1[2],0xff00ff00,0);
      FUN_2c606d90(param_1[2],0x4c,0);
      FUN_2c606e68(param_1[2],0xc,0);
      uVar1 = FUN_2c61c7d0(param_1[2]);
      FUN_2c607048(uVar1,0x18);
      FUN_2c6072bc(uVar1,1,0x10,0xc);
      FUN_2c606e14(uVar1,0x4c,0);
      FUN_2c606e14(uVar1,0xff,0x20000);
      FUN_2c606df0(uVar1,4,0x20000);
      FUN_2c606df0(uVar1,4,0);
      uVar2 = FUN_2c637344(param_1[2]);
      FUN_2c5d58a4(param_1,uVar2);
      FUN_2c606e5c(uVar2,2,0);
      FUN_2c6072bc(uVar2,1,0x2e,0xc);
      FUN_2c606d3c(uVar2,0x10,0);
      FUN_2c606d18(uVar2,2,0);
      goto LAB_2c5d5a8e;
    }
    uVar1 = FUN_2c66c4ec(param_4);
    uVar2 = FUN_2c5e2e80(DAT_2c5d5cc8);
    iVar3 = FUN_2c62b85c(param_4,uVar1,uVar2,0,0);
    uVar1 = FUN_2c606a10(param_2);
    param_1[2] = uVar1;
    FUN_2c5d58a4(param_1,uVar1);
    FUN_2c6072bc(param_1[2],2,0,0);
    uVar1 = FUN_2c61c7d0(param_1[2]);
    FUN_2c607048(uVar1,0x20);
    FUN_2c6072bc(uVar1,7,0,0);
    FUN_2c606e14(uVar1,0x4c,0);
    FUN_2c606e14(uVar1,0xff,0x20000);
    FUN_2c606df0(uVar1,4,0x20000);
    FUN_2c606df0(uVar1,4,0);
    if (0x77 < iVar3) {
      iVar3 = 0x78;
    }
    uVar2 = FUN_2c637344(param_1[2]);
    FUN_2c5d58a4(param_1,uVar2);
    FUN_2c607048(param_1[2],(int)(short)((short)iVar3 + 0x24),0x40);
    FUN_2c607048(uVar2,(int)(short)iVar3,0x1c);
    FUN_2c606d18(uVar2,4,0);
    FUN_2c606d24(uVar2,4,0);
    FUN_2c606e5c(uVar2,2,0);
    uVar4 = 0x24;
    uVar1 = 7;
  }
  FUN_2c6072bc(uVar2,uVar1,uVar4,uVar5);
LAB_2c5d5a8e:
  uVar1 = FUN_2c5e2e80(DAT_2c5d5be0);
  FUN_2c606e38(uVar2,uVar1,0);
  FUN_2c606e20(uVar2,0xff00ff00,0);
  FUN_2c6388dc(uVar2,1);
  FUN_2c638730(uVar2,param_4);
  return param_1;
}

