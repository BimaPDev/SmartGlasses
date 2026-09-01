/* FUN_100f8d28 @ 0x100f8d28 */

void FUN_100f8d28(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  short *psVar11;
  uint local_2c;
  
  if (param_1 == 0) {
    return;
  }
  iVar9 = (int)*(short *)(param_1 + 0x38);
  sVar1 = *(short *)(param_1 + 0x16);
  iVar3 = (int)sVar1;
  iVar6 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x54);
  *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + *(short *)(param_1 + 0x38);
  *(short *)(param_1 + 0x16) = *(short *)(param_1 + 0x3a) + sVar1;
  *(int *)(param_1 + 0x30) = iVar6;
  if (0 < iVar9) {
    psVar11 = *(short **)(param_1 + 0x44);
    uVar4 = -((uint)psVar11 >> 1) & 3;
    uVar2 = uVar4 + 3;
    if (uVar2 < 5) {
      uVar2 = 5;
    }
    if (iVar9 - 1U < uVar2) {
      iVar3 = 0;
    }
    else {
      local_2c = uVar4;
      if ((uVar4 != 0) && (*psVar11 = *psVar11 + sVar1, uVar4 != 1)) {
        psVar11[1] = psVar11[1] + sVar1;
        if (uVar4 == 3) {
          psVar11[2] = psVar11[2] + sVar1;
        }
        else {
          local_2c = 2;
        }
      }
      uVar2 = iVar9 - uVar4;
      puVar5 = (uint *)(psVar11 + uVar4);
      puVar10 = puVar5 + (uVar2 >> 2) * 2;
      puVar8 = puVar5 + -2;
      do {
        uVar4 = puVar8[2];
        uVar7 = puVar8[3];
        *puVar5 = iVar3 + uVar4 & 0xffff | (iVar3 + ((int)uVar4 >> 0x10)) * 0x10000;
        puVar5[1] = iVar3 + uVar7 & 0xffff | (iVar3 + ((int)uVar7 >> 0x10)) * 0x10000;
        puVar5 = puVar5 + 2;
        puVar8 = puVar8 + 2;
      } while (puVar5 != puVar10);
      iVar3 = local_2c + (uVar2 & 0xfffffffc);
      if (uVar2 == (uVar2 & 0xfffffffc)) goto LAB_100f8e6c;
    }
    psVar11[iVar3] = psVar11[iVar3] + sVar1;
    if ((((iVar3 + 1 < iVar9) &&
         (psVar11[iVar3 + 1] = psVar11[iVar3 + 1] + sVar1, iVar3 + 2 < iVar9)) &&
        (psVar11[iVar3 + 2] = psVar11[iVar3 + 2] + sVar1, iVar3 + 3 < iVar9)) &&
       ((psVar11[iVar3 + 3] = psVar11[iVar3 + 3] + sVar1, iVar3 + 4 < iVar9 &&
        (psVar11[iVar3 + 4] = psVar11[iVar3 + 4] + sVar1, iVar3 + 5 < iVar9)))) {
      psVar11[iVar3 + 5] = sVar1 + psVar11[iVar3 + 5];
    }
  }
LAB_100f8e6c:
  iVar3 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar3 != 0) {
    iVar3 = iVar3 + *(short *)(param_1 + 0x16) * 8;
  }
  iVar9 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x3c) = iVar3;
  if (iVar9 != 0) {
    iVar9 = iVar9 + *(short *)(param_1 + 0x16);
  }
  iVar3 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x40) = iVar9;
  if (iVar3 != 0) {
    iVar3 = iVar3 + *(short *)(param_1 + 0x14) * 2;
  }
  *(int *)(param_1 + 0x44) = iVar3;
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x28) + *(short *)(param_1 + 0x16) * 8;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x16) * 8;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 != 0) {
    iVar3 = iVar3 + iVar6 * 0x20;
  }
  *(int *)(param_1 + 0x58) = iVar3;
  return;
}

