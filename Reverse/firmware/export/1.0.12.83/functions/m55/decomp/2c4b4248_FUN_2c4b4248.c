/* FUN_2c4b4248 @ 0x2c4b4248 */

void FUN_2c4b4248(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  
  piVar2 = DAT_2c4b42f8;
  puVar1 = DAT_2c4b42f4;
  puVar8 = (undefined1 *)((int)DAT_2c4b42f4 + -1);
  puVar6 = (undefined1 *)((int)DAT_2c4b42f4 + 0x43);
  *DAT_2c4b42f8 = (int)DAT_2c4b42f4;
  do {
    puVar8 = puVar8 + 1;
    *puVar8 = 0;
  } while (puVar8 != puVar6);
  iVar7 = *DAT_2c4b42fc;
  uVar9 = *DAT_2c4b4304;
  *puVar1 = *DAT_2c4b4300;
  puVar1[3] = iVar7;
  puVar1[1] = uVar9;
  if (0 < iVar7) {
    puVar8 = (undefined1 *)(uVar9 - 1);
    do {
      puVar8 = puVar8 + 1;
      *puVar8 = 0;
    } while ((undefined1 *)(iVar7 + uVar9 + -1) != puVar8);
    uVar9 = puVar1[1];
  }
  if ((uVar9 & 0x3f) == 0) {
    if (uVar9 == 0) goto LAB_2c4b42ec;
    iVar7 = puVar1[3];
  }
  else {
    iVar4 = puVar1[3] + uVar9;
    do {
      uVar9 = uVar9 + 4;
      iVar7 = iVar4 - uVar9;
    } while ((uVar9 & 0x3f) != 0);
    puVar1[1] = uVar9;
    puVar1[3] = iVar7;
  }
  puVar1[4] = uVar9;
  uVar3 = DAT_2c4b4308;
  puVar1[7] = iVar7;
  puVar1[5] = uVar9;
  puVar1[6] = iVar7;
  puVar1[8] = uVar3;
  puVar1[9] = uVar3;
  piVar5 = (int *)FUN_2c4b4980(0x14);
  if (piVar5 != (int *)0x0) {
    iVar4 = *piVar2;
    piVar5[2] = 0;
    iVar7 = *(int *)(iVar4 + 0x18);
    piVar5[4] = 0;
    *piVar5 = iVar4 + 0x20;
    piVar5[3] = iVar7;
    piVar5[1] = *(int *)(iVar4 + 0x24);
    *(int **)(iVar4 + 0x24) = piVar5;
    if ((int *)piVar5[1] != (int *)0x0) {
      *(int *)piVar5[1] = (int)piVar5;
    }
    *(undefined4 *)(iVar4 + 0x2c) = 0;
    return;
  }
LAB_2c4b42ec:
  FUN_2c4b41bc();
  return;
}

