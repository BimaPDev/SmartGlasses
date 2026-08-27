/* FUN_2c5ddc98 @ 0x2c5ddc98 */

void FUN_2c5ddc98(int *param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  piVar1 = DAT_2c5ddd4c;
  uVar6 = (param_2 >> 7) + 3;
  iVar3 = *DAT_2c5ddd4c;
  iVar4 = (param_2 >> 7) + 1;
  if (uVar6 < 8) {
    uVar6 = 8;
  }
  param_1[1] = uVar6;
  if (iVar3 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  iVar3 = FUN_2c47245c(0,uVar6 << 2);
  *param_1 = iVar3;
  uVar6 = (uint)(param_1[1] - iVar4) >> 1;
  puVar8 = (undefined4 *)(iVar3 + uVar6 * 4);
  puVar5 = puVar8 + iVar4;
  for (puVar7 = puVar8; puVar7 < puVar5; puVar7 = puVar7 + 1) {
    if (*piVar1 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    uVar2 = FUN_2c47245c(0,0x200);
    *puVar7 = uVar2;
  }
  param_1[5] = (int)puVar8;
  iVar3 = *(int *)(iVar3 + uVar6 * 4);
  param_1[3] = iVar3;
  param_1[4] = iVar3 + 0x200;
  param_1[9] = (int)(puVar5 + -1);
  iVar4 = puVar5[-1];
  param_1[2] = iVar3;
  param_1[6] = iVar4 + (param_2 & 0x7f) * 4;
  param_1[7] = iVar4;
  param_1[8] = iVar4 + 0x200;
  return;
}

