/* FUN_2c53d154 @ 0x2c53d154 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c53d154(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  (**(code **)(*param_1 + 0x20))();
  FUN_2c603a04(param_1[4],0,_DAT_2c53d1d0);
  FUN_2c607048(param_1[4],300,0x50);
  FUN_2c606d6c(param_1[4],0xff,0);
  FUN_2c606d60(param_1[4],0xff000000,0);
  uVar1 = FUN_2c5e2e4c(_LAB_2c53d1d4);
  iVar2 = FUN_2c53cbcc(param_1,0x30,0x30,uVar1);
  param_1[7] = iVar2;
  FUN_2c6072bc(iVar2,7,0);
  iVar2 = FUN_2c53cac4(param_1,0x94,0x1c);
  param_1[8] = iVar2;
  FUN_2c6388dc(iVar2,4);
  FUN_2c6072bc(param_1[8],7,0x3c,0);
  if (param_1[5] != 0) {
    FUN_2c6043d8();
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    FUN_2c6043d8();
    param_1[6] = 0;
  }
  iVar2 = FUN_2c53cbcc(param_1,0x20,0x20,0,unaff_r4,unaff_lr);
  param_1[6] = iVar2;
  FUN_2c6072bc(iVar2,8,0);
  uVar1 = FUN_2c5c55d8();
  iVar2 = func_0x2c5c5af4(uVar1,param_1[6],2,_LAB_2c53d150);
  param_1[0x10] = iVar2;
  return;
}

