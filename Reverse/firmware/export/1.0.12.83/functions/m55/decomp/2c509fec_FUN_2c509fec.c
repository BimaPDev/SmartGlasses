/* FUN_2c509fec @ 0x2c509fec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c509fec(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r3;
  int iVar3;
  undefined4 unaff_r4;
  
  iVar3 = param_1[4];
  iVar1 = param_1[5];
  if (iVar3 == 0xf && iVar1 == 0) {
    uVar2 = 4;
  }
  else if (iVar3 == 0x1e && iVar1 == 0) {
    uVar2 = 1;
  }
  else if (iVar3 == 0x3c && iVar1 == 0) {
    uVar2 = 2;
  }
  else if (iVar3 == 0x78 && iVar1 == 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
  }
  (**(code **)(*(int *)param_1[2] + 0x4c))((int *)param_1[2],_LAB_2c50a070,uVar2);
  func_0x2c63b658(param_1[4],param_1[5]);
  if (*(code **)(*param_1 + 0x3c) == _LAB_2c50a074) {
    FUN_2c5d7694(6,0,0xffffffff);
    func_0x2c509da0(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x3c))(param_1);
    func_0x2c509da0(param_1);
  }
  iVar1 = 0;
  if (param_1[100] != 0) {
    lv_obj_add_flag_invalidate(param_1[100],1);
    iVar1 = param_1[100];
  }
  FUN_2c606d6c(iVar1,0);
  FUN_2c60710c(param_1[0x66],0);
  FUN_2c6070bc(param_1[0x67],0);
  FUN_2c509dec(param_1);
  FUN_2c50ec60(param_1 + 0x68,param_1[100]);
  iVar1 = param_1[0x66];
  if (param_1[0x90] != 0) {
    uVar2 = extraout_r3;
    FUN_2c62e838(param_1[0x90],DAT_2c50ec94);
    if (param_1[0x90] != 0) {
      FUN_2c50e398(param_1[0x90],*(undefined1 *)(param_1[0xb4] + 0x18),
                   *(undefined1 *)(param_1[0xb4] + 8),1,uVar2,unaff_r4);
    }
  }
  param_1[0x90] = iVar1;
  param_1[0x8f] = 0;
  FUN_2c62e8ec(param_1 + 0x92);
  return;
}

