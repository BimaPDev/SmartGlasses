/* FUN_140a2494 @ 0x140a2494 */

void FUN_140a2494(int param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *param_2;
  puVar4 = (uint *)(uVar5 & 0xfffffffc);
  if (puVar4 == (uint *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (int)puVar4 + (-4 - (int)param_2);
  }
  if (((int)(uVar5 << 0x1f) < 0) || (uVar6 < param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140a2578,param_2);
  }
  uVar3 = param_3 + 3 & 0xfffffffc;
  if (param_2 == (uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140a2580);
  }
  if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140a257c);
  }
  uVar2 = (int)param_2 + uVar3 + 4;
  if ((int)puVar4 <= (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140a2584,puVar4,param_2);
  }
  uVar1 = *puVar4;
  if (((int)(uVar1 << 0x1f) < 0) && ((uVar1 & 0xfffffffc) != 0)) {
    *(uint *)((int)param_2 + uVar3 + 4) = uVar1;
    *(uint *)(uVar2 + 4) = puVar4[1];
    if (param_4 == 0) {
      param_4 = FUN_140a2434(param_1,param_2);
    }
    if (*(uint **)(param_4 + 4) != puVar4) {
LAB_140a2570:
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a2578,param_4 + 4);
    }
    *(uint *)(param_1 + 8) = (*(int *)(param_1 + 8) - uVar3) + uVar6;
  }
  else {
    if ((uint)((int)puVar4 + (-4 - (int)param_2)) < uVar3 + 8) {
      return;
    }
    if (param_4 == 0) {
      param_4 = FUN_140a2434(param_1,param_2);
    }
    *(uint *)((int)param_2 + uVar3 + 4) = uVar5 | 1;
    uVar5 = *(uint *)(param_4 + 4);
    *(uint *)(uVar2 + 4) = uVar5;
    if (uVar5 <= uVar2) goto LAB_140a2570;
    *(uint *)(param_1 + 8) = (int)puVar4 + ((*(int *)(param_1 + 8) + -4) - uVar2);
  }
  *param_2 = uVar2;
  *(uint *)(param_4 + 4) = uVar2;
  return;
}

