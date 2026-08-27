/* FUN_2c50cda8 @ 0x2c50cda8 */

void FUN_2c50cda8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  uVar2 = FUN_2c6313f4();
  uVar3 = DAT_2c50cee4;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  uVar3 = FUN_2c5e2e8c(uVar3);
  FUN_2c63140c(uVar2,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x48),2,0,0x8f);
  uVar2 = FUN_2c6313f4(uVar1);
  uVar3 = DAT_2c50cee8;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  uVar3 = FUN_2c5e2e8c(uVar3);
  FUN_2c63140c(uVar2,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x4c),2,0,0x95);
  uVar2 = FUN_2c6313f4(uVar1);
  uVar3 = DAT_2c50ceec;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  uVar3 = FUN_2c5e2e8c(uVar3);
  FUN_2c63140c(uVar2,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x50),2,0,0xa0);
  uVar3 = FUN_2c637344(uVar1);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_2c6072bc(uVar3,2,0,0xf0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x44),0x278,0x27d1);
  FUN_2c6388dc(*(undefined4 *)(param_1 + 0x44),0);
  uVar1 = *DAT_2c50cef0;
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x44),uVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x44),2,0);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  uVar3 = FUN_2c5e2e80(DAT_2c50cef4);
  FUN_2c606e38(uVar2,uVar3,0);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  uVar3 = registry_lookup(DAT_2c50cef8);
  FUN_2c638730(uVar2,uVar3);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x24),0x88,0x2c);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x24),1,0xfc,0x144);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x24),uVar1,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x24),0x19,0);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = registry_lookup(DAT_2c50cefc);
  FUN_2c638730(uVar1,uVar3);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x24),1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x28),1);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x2c),1);
    return;
  }
  return;
}

