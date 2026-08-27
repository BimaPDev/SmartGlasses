/* FUN_2c55e1f4 @ 0x2c55e1f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c55e1f4(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  uVar1 = _LAB_2c55e368;
  *param_1 = _LAB_2c55e364;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar3 = (undefined4 *)FUN_2c64ca5c(0x10);
  *puVar3 = uVar1;
  param_1[7] = puVar3;
  puVar3[3] = 0;
  puVar3[1] = 1;
  puVar3[2] = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar3 = (undefined4 *)FUN_2c64ca5c(0x10);
  *puVar3 = uVar1;
  piVar2 = _LAB_2c55e36c;
  param_1[10] = 5;
  iVar5 = *piVar2;
  puVar3[3] = 0;
  param_1[9] = puVar3;
  puVar3[1] = 1;
  puVar3[2] = 1;
  if (iVar5 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  piVar4 = (int *)FUN_2c47245c(0,0x5c);
  FUN_2c674268(piVar4,0,0x5c);
  FUN_2c674268(piVar4 + 6,0,0x44);
  iVar5 = _LAB_2c55e370;
  *piVar4 = _LAB_2c55e370;
  piVar4[1] = iVar5 + 0x30;
  iVar5 = *piVar2;
  param_1[0xb] = piVar4;
  if (iVar5 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  piVar4 = (int *)FUN_2c47245c(0,0x5c);
  FUN_2c674268(piVar4,0,0x5c);
  FUN_2c674268(piVar4 + 6,0,0x44);
  iVar5 = _LAB_2c55e374;
  *piVar4 = _LAB_2c55e374;
  piVar4[1] = iVar5 + 0x30;
  iVar5 = *piVar2;
  param_1[0xc] = piVar4;
  if (iVar5 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  piVar4 = (int *)FUN_2c47245c(0,0x5c);
  FUN_2c674268(piVar4,0,0x5c);
  FUN_2c674268(piVar4 + 6,0,0x44);
  iVar5 = _LAB_2c55e378;
  *piVar4 = _LAB_2c55e378;
  piVar4[1] = iVar5 + 0x30;
  iVar5 = *piVar2;
  param_1[0xd] = piVar4;
  if (iVar5 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  piVar4 = (int *)FUN_2c47245c(0,0x5c);
  FUN_2c674268(piVar4,0,0x5c);
  FUN_2c674268(piVar4 + 6,0,0x44);
  iVar5 = _LAB_2c55e37c;
  *piVar4 = _LAB_2c55e37c;
  piVar4[1] = iVar5 + 0x30;
  iVar5 = *piVar2;
  param_1[0xe] = piVar4;
  if (iVar5 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar3 = (undefined4 *)FUN_2c47245c(0,0x5c);
  FUN_2c674268(puVar3,0,0x5c);
  FUN_2c674268(puVar3 + 5,0,0x44);
  *puVar3 = _LAB_2c55e380;
  param_1[0xf] = puVar3;
  param_1[0x10] = 0;
  FUN_2c674268(param_1 + 0x11,0,0xd20);
  *(undefined2 *)(param_1 + 0x359) = 0xf;
  return param_1;
}

