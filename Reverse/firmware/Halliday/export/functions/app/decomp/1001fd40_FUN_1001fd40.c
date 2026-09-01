/* FUN_1001fd40 @ 0x1001fd40 */

void FUN_1001fd40(void)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *extraout_r3;
  byte *pbVar9;
  undefined4 uVar10;
  undefined4 extraout_r12;
  undefined8 uVar11;
  
  pbVar9 = DAT_1001fe0c;
  puVar3 = DAT_1001fe04;
  iVar7 = 0;
  iVar8 = *DAT_1001fe08;
  puVar4 = DAT_1001fe04;
  do {
    if ((uint)*DAT_1001fe0c == *puVar4) {
      bVar1 = true;
      goto LAB_1001fd68;
    }
    iVar7 = iVar7 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar7 != 0xb);
  bVar1 = false;
LAB_1001fd68:
  iVar7 = 0;
  puVar4 = DAT_1001fe04;
  do {
    if ((uint)DAT_1001fe0c[1] == *puVar4) {
      if (!bVar1) {
        *DAT_1001fe0c = 0;
      }
      goto LAB_1001fd8e;
    }
    iVar7 = iVar7 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar7 != 0xb);
  if (!bVar1) {
    *DAT_1001fe0c = 0;
  }
  pbVar9[1] = 1;
LAB_1001fd8e:
  iVar7 = 0;
  uVar10 = 2;
  pbVar6 = DAT_1001fe0c;
LAB_1001fd9a:
  uVar11 = CONCAT44(pbVar6,iVar7);
  iVar7 = 0;
  puVar4 = puVar3;
  do {
    if (*(uint *)(pbVar6 + 0x10) == *puVar4) goto LAB_1001fdf0;
    iVar7 = iVar7 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar7 != 0xb);
  bVar1 = false;
  do {
    iVar5 = (int)((ulonglong)uVar11 >> 0x20);
    iVar7 = 0;
    puVar4 = puVar3;
    do {
      if (*(uint *)(iVar5 + 4) == *puVar4) {
        if (bVar1) goto LAB_1001fdd8;
        bVar2 = true;
        goto LAB_1001fdca;
      }
      iVar7 = iVar7 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar7 != 0xb);
    bVar2 = false;
    if (bVar1) {
LAB_1001fdd2:
      *(undefined4 *)(pbVar9 + 4) = uVar10;
      pbVar9[8] = 0;
      pbVar9[9] = 0;
      pbVar9[10] = 0;
      pbVar9[0xb] = 0;
      pbVar9[0xc] = 1;
      pbVar9[0xd] = 0;
      pbVar9[0xe] = 0;
      pbVar9[0xf] = 0;
    }
    else {
LAB_1001fdca:
      *(undefined4 *)(pbVar9 + 0x10) = uVar10;
      pbVar9[0x14] = 1;
      pbVar9[0x15] = 0;
      pbVar9[0x16] = 0;
      pbVar9[0x17] = 0;
      pbVar9[0x18] = 0;
      pbVar9[0x19] = 0;
      pbVar9[0x1a] = 0;
      pbVar9[0x1b] = 0;
      if (!bVar2) goto LAB_1001fdd2;
    }
LAB_1001fdd8:
    iVar7 = (int)uVar11 + 1;
    pbVar6 = (byte *)(iVar5 + 4);
    if (iVar7 != 3) goto LAB_1001fd9a;
    if (*DAT_1001fe08 == iVar8) {
      return;
    }
    uVar11 = FUN_1013cdc0();
    pbVar9 = extraout_r3;
    uVar10 = extraout_r12;
LAB_1001fdf0:
    bVar1 = true;
  } while( true );
}

