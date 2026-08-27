/* FUN_2c55f2fc @ 0x2c55f2fc */

void FUN_2c55f2fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = FUN_2c606a10();
    iVar4 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar4 != 0) {
      FUN_2c58d410(param_1 + 8);
      iVar1 = *(int *)(param_1 + 8);
    }
    if (iVar1 != 0) {
      FUN_2c6070bc(iVar1,0x2064);
      FUN_2c60710c(iVar1,0x27d1);
      FUN_2c606f34(iVar1,0);
      FUN_2c606abc(iVar1,0x10);
      FUN_2c606d60(iVar1,0xff00ff00,0);
      FUN_2c606d6c(iVar1,0);
      FUN_2c606d9c(iVar1,0);
      FUN_2c606d30(iVar1,0xe,0);
      FUN_2c606d3c(iVar1,0xe,0);
      FUN_2c606d18(iVar1,8,0);
      FUN_2c606d24(iVar1,0xe,0);
      FUN_2c627e28(iVar1,1);
      FUN_2c606d54(iVar1,8,0);
      uVar2 = FUN_2c606a10(iVar1);
      iVar1 = *(int *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = uVar2;
      if (iVar1 != 0) {
        FUN_2c58d410(param_1 + 0x20);
        uVar2 = *(undefined4 *)(param_1 + 0x20);
      }
      FUN_2c6070bc(uVar2,0x2064);
      FUN_2c60710c(uVar2,0x27d1);
      FUN_2c606cb8(uVar2,(int)*(short *)(param_1 + 0x12),0);
      FUN_2c606f34(uVar2,0);
      FUN_2c6072b4(uVar2,3);
      FUN_2c606abc(uVar2,0x10);
      FUN_2c606d60(uVar2,0xff00ff00,0);
      FUN_2c606d6c(uVar2,0);
      FUN_2c606d9c(uVar2,0);
      FUN_2c606d30(uVar2,0);
      FUN_2c606d3c(uVar2,0);
      FUN_2c606d18(uVar2,0);
      FUN_2c606d24(uVar2,0);
      FUN_2c627e28(uVar2,1);
      FUN_2c606d48(uVar2,(int)*(short *)(param_1 + 0x1c),0);
      uVar2 = FUN_2c606a10(*(undefined4 *)(param_1 + 4));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      if (iVar1 != 0) {
        FUN_2c58d410(param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 0x24);
      }
      FUN_2c603a04(uVar2,0,DAT_2c55f4b0);
      FUN_2c607048(uVar2,0xcc,0x3e);
      FUN_2c606db4(uVar2,0);
      FUN_2c606d9c(uVar2,0);
      uVar3 = FUN_2c5e2e8c(DAT_2c55f4b4);
      FUN_2c606d78(uVar2,uVar3,0);
      lv_obj_add_flag_invalidate(uVar2,1);
      return;
    }
  }
  return;
}

