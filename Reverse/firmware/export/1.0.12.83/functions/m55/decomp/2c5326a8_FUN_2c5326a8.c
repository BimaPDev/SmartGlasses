/* FUN_2c5326a8 @ 0x2c5326a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c5326a8(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = _LAB_2c5327ac;
  iVar4 = *_LAB_2c5327ac;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (iVar4 == 0) {
    FUN_2c4723c4();
    *piVar3 = 1;
  }
  puVar1 = (undefined4 *)FUN_2c47245c(0,0x40);
  FUN_2c674268(puVar1,0,0x40);
  func_0x2c53bf8c(puVar1);
  *puVar1 = _LAB_2c5327b0;
  piVar2 = (int *)param_1[1];
  param_1[1] = (int)puVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  if (*piVar3 == 0) {
    FUN_2c4723c4();
    *piVar3 = 1;
  }
  puVar1 = (undefined4 *)FUN_2c47245c(0,0x40);
  FUN_2c674268(puVar1,0,0x40);
  func_0x2c53bf8c(puVar1);
  *puVar1 = _LAB_2c5327b4;
  piVar2 = (int *)*param_1;
  *param_1 = (int)puVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  if (*piVar3 == 0) {
    FUN_2c4723c4();
    *piVar3 = 1;
  }
  puVar1 = (undefined4 *)FUN_2c47245c(0,0x58);
  FUN_2c674268(puVar1,0,0x58);
  func_0x2c53bf8c(puVar1);
  puVar1[0x10] = 0;
  puVar1[0x14] = 0;
  *puVar1 = _DAT_2c5327b8;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  piVar2 = (int *)param_1[2];
  param_1[2] = (int)puVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  if (*piVar3 == 0) {
    FUN_2c4723c4();
    *piVar3 = 1;
  }
  puVar1 = (undefined4 *)FUN_2c47245c(0,0x44);
  FUN_2c674268(puVar1,0,0x44);
  func_0x2c53bf8c(puVar1);
  *puVar1 = _LAB_2c5327bc;
  puVar1[0x10] = 0;
  piVar3 = (int *)param_1[3];
  param_1[3] = (int)puVar1;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  return param_1;
}

