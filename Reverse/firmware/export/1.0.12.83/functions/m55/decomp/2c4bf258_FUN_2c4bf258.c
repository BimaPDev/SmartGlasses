/* FUN_2c4bf258 @ 0x2c4bf258 */

void FUN_2c4bf258(void)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int *piVar10;
  byte bVar11;
  int iVar12;
  
  iVar4 = DAT_2c4bf364;
  uVar3 = DAT_2c4bf360;
  pcVar2 = DAT_2c4bf358;
  iVar1 = DAT_2c4bf354;
  if (*DAT_2c4bf358 != '\0') {
    return;
  }
  bVar11 = 1;
  iVar12 = 0x23;
  puVar6 = DAT_2c4bf344;
  iVar7 = DAT_2c4bf350;
  puVar8 = DAT_2c4bf348;
  pcVar9 = DAT_2c4bf34c;
  piVar10 = DAT_2c4bf35c;
  do {
    *(undefined4 *)(iVar7 + 0x110) = 0;
    *(undefined4 *)(iVar7 + 0x130) = 0;
    *(undefined4 *)(iVar7 + 0x150) = 0;
    *(undefined4 *)(iVar7 + 0x170) = 0;
    *(undefined4 *)(iVar7 + 400) = 0;
    *(undefined4 *)(iVar7 + 0x1b0) = 0;
    *(undefined4 *)(iVar7 + 0x1d0) = 0;
    *(undefined4 *)(iVar7 + 0x1f0) = 0;
    *(undefined4 *)(iVar7 + 8) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x10) = 0xffffffff;
    *(uint *)(iVar7 + 0x30) = *(uint *)(iVar7 + 0x30) & uVar3 | 9;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(undefined4 *)(*(int *)(iVar4 + 8) + (iVar12 + 0x10) * 4) = *puVar8;
    DataSynchronizationBarrier(0xf);
    if (bVar11 == 1) {
      *(undefined1 *)(iVar1 + 0x323) = 0x80;
      uVar5 = (uint)*pcVar9;
      if (-1 < (int)uVar5) goto LAB_2c4bf2f4;
    }
    else {
      *(undefined1 *)(iVar1 + 0x324) = 0xa0;
      uVar5 = (uint)*pcVar9;
      if ((int)uVar5 < 0) {
LAB_2c4bf338:
        *pcVar2 = '\x01';
        return;
      }
LAB_2c4bf2f4:
      iVar7 = 1 << (uVar5 & 0x1f);
      *(int *)(iVar1 + (uVar5 >> 5) * 4 + 0x180) = iVar7;
      *(int *)(iVar1 + (uVar5 >> 5) * 4) = iVar7;
      if (1 < bVar11) goto LAB_2c4bf338;
    }
    bVar11 = bVar11 + 1;
    puVar6 = puVar6 + 8;
    piVar10 = piVar10 + 1;
    iVar7 = *piVar10;
    pcVar9 = pcVar9 + 1;
    iVar12 = (int)*pcVar9;
    puVar8 = puVar8 + 1;
  } while( true );
}

