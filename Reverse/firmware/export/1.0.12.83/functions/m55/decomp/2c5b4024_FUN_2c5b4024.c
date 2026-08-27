/* FUN_2c5b4024 @ 0x2c5b4024 */

void FUN_2c5b4024(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_2c606a10(param_2);
  FUN_2c606abc(uVar1,0x10);
  FUN_2c606abc(uVar1,2);
  FUN_2c606d60(uVar1,0xff000000,0);
  FUN_2c606d6c(uVar1,0);
  FUN_2c606d9c(uVar1,0);
  FUN_2c606d30(uVar1,0);
  FUN_2c606d3c(uVar1,0);
  FUN_2c606d18(uVar1,0);
  FUN_2c606d24(uVar1,0);
  FUN_2c606e68(uVar1,0);
  FUN_2c607048(uVar1,0x144,0x90);
  FUN_2c606d9c(uVar1,1,0);
  FUN_2c606d84(uVar1,0xff00ff00,0);
  FUN_2c606d90(uVar1,0x4c,0);
  FUN_2c606e68(uVar1,0x10,0);
  FUN_2c5b3d48(param_1,uVar1,param_3);
  uVar2 = FUN_2c6313f4(uVar1);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  FUN_2c6072bc(uVar2,3,0xfffffff4,0xc);
  iVar3 = FUN_2c5abf68();
  FUN_2c5b3fc4(param_1,(int)*(char *)(iVar3 + 8));
  uVar2 = FUN_2c639320(uVar1);
  FUN_2c607048(uVar2,0x11c,8);
  FUN_2c6072bc(uVar2,2,0,0x6e);
  FUN_2c6393b8(uVar2,0,*(undefined4 *)(param_3 + 8));
  FUN_2c606d60(uVar2,0xff00ff00,0);
  FUN_2c606d6c(uVar2,0x19,0);
  FUN_2c606d60(uVar2,0xff00ff00,0x20000);
  FUN_2c606d6c(uVar2,0x99,0x20000);
  *(undefined4 *)(param_1 + 8) = uVar2;
  iVar3 = FUN_2c5b3de4(param_1);
  if (iVar3 != 0) {
    uVar1 = FUN_2c637344(uVar1);
    uVar2 = registry_lookup(0x4044);
    FUN_2c638730(uVar1,uVar2);
    uVar2 = FUN_2c5e2e80(DAT_2c5b3fbc);
    FUN_2c606e38(uVar1,uVar2,0);
    FUN_2c606e20(uVar1,0xff00ff00,0);
    FUN_2c606e2c(uVar1,0x99,0);
    FUN_2c6072bc(uVar1,5,0,0xfffffff4);
    FUN_2c607048(uVar1,0x27d1,0x18);
    FUN_2c606d18(uVar1,4,0);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = FUN_2c620f0c(0xbbe,DAT_2c5b3fc0,param_1);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    FUN_2c5b3e6c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5b4188,0x10b,DAT_2c5b4184,DAT_2c5b4180);
}

