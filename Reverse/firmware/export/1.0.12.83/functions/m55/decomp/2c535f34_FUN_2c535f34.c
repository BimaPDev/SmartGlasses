/* FUN_2c535f34 @ 0x2c535f34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c535f34(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar1 = _DAT_2c536038;
  piVar5 = _LAB_2c536034;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 4) = 0x1f12;
  param_1[3] = iVar1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (*piVar5 == 0) {
    FUN_2c4723c4();
    *piVar5 = 1;
  }
  iVar1 = FUN_2c47245c(0,0x40);
  func_0x2c53bf8c();
  piVar2 = (int *)*param_1;
  *param_1 = iVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  if (*piVar5 == 0) {
    FUN_2c4723c4();
    *piVar5 = 1;
  }
  puVar3 = (undefined4 *)FUN_2c47245c(0,0x70);
  FUN_2c674268(puVar3,0,0x70);
  func_0x2c53bf8c(puVar3);
  puVar3[0x10] = 0;
  puVar3[0x14] = 0;
  *(undefined1 *)(puVar3 + 0x1a) = 0;
  *puVar3 = _DAT_2c53603c;
  puVar3[0x19] = 3;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  piVar2 = (int *)param_1[1];
  param_1[1] = (int)puVar3;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
    puVar3 = (undefined4 *)param_1[1];
  }
  uVar4 = FUN_2c5e2e4c(_DAT_2c536040);
  FUN_2c53cf24(puVar3,uVar4);
  if (*piVar5 == 0) {
    FUN_2c4723c4();
    *piVar5 = 1;
  }
  puVar3 = (undefined4 *)FUN_2c47245c(0,0x40);
  FUN_2c674268(puVar3,0,0x40);
  func_0x2c53bf8c(puVar3);
  *puVar3 = _LAB_2c536044;
  piVar5 = (int *)param_1[2];
  param_1[2] = (int)puVar3;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
    puVar3 = (undefined4 *)param_1[2];
  }
  uVar4 = FUN_2c5e2e4c(_DAT_2c536040);
  FUN_2c53cf24(puVar3,uVar4);
  func_0x2c5307cc(param_1 + 3,param_2);
  return param_1;
}

