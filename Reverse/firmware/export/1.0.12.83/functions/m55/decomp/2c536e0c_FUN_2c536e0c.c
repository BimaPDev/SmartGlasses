/* FUN_2c536e0c @ 0x2c536e0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c536e0c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  (**(code **)(**(int **)(param_2 + 8) + 8))(*(int **)(param_2 + 8),param_3);
  iVar1 = FUN_2c53c04c(*(undefined4 *)(param_2 + 8));
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_2 + 8) + 0xc))();
  }
  uVar7 = *(undefined4 *)(param_2 + 8);
  uVar2 = FUN_2c5e2e4c(_LAB_2c536e70);
  FUN_2c53cff4(uVar7,uVar2);
  uVar7 = *(undefined4 *)(param_2 + 8);
  uVar2 = FUN_2c5e2e4c(_DAT_2c536e74);
  FUN_2c53cf24(uVar7,uVar2);
  uVar7 = *(undefined4 *)(param_2 + 8);
  uVar2 = registry_lookup(0x6102);
  FUN_2c53c8e0(uVar7,uVar2);
  iVar1 = FUN_2c53c064(*(undefined4 *)(param_2 + 8));
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 8);
  FUN_2c607df0(*(undefined4 *)(iVar1 + 8));
  uVar2 = extraout_r1;
  uVar5 = 0;
  while( true ) {
    uVar3 = FUN_2c6041fc(*(undefined4 *)(iVar1 + 8),uVar2);
    uVar6 = uVar5 + 1;
    if (uVar3 <= uVar5) break;
    iVar4 = FUN_2c6041dc(*(undefined4 *)(iVar1 + 8),uVar5);
    uVar2 = 1;
    uVar5 = uVar6;
    if (iVar4 != 0) {
      FUN_2c606abc();
      uVar2 = extraout_r1_00;
    }
  }
  FUN_2c606abc(*(undefined4 *)(iVar1 + 8),1);
  return;
}

