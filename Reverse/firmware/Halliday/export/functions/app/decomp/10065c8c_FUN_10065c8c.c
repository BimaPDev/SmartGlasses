/* FUN_10065c8c @ 0x10065c8c */

undefined4 FUN_10065c8c(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  
  iVar6 = FUN_1011df5e();
  puVar3 = DAT_10065d24;
  puVar2 = DAT_10065d20;
  iVar6 = iVar6 + -2;
  while (0x10 < iVar6) {
    iVar7 = FUN_1011df34(param_1);
    puVar13 = DAT_10065d28;
    if ((iVar7 != 0) && (puVar13 = puVar3, iVar7 != 1)) {
      puVar13 = puVar2;
    }
    iVar12 = 0;
    pbVar10 = DAT_10065d1c;
    do {
      bVar1 = *pbVar10;
      uVar5 = FUN_1011df34(param_1);
      iVar12 = iVar12 + 1;
      *(undefined1 *)((int)puVar13 + (uint)bVar1) = uVar5;
      pbVar10 = pbVar10 + 1;
    } while (iVar12 != 0x40);
    iVar6 = iVar6 + -0x41;
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
    puVar4 = DAT_10065d24;
    puVar13 = DAT_10065d20;
    if (iVar7 == 1) {
      uVar8 = DAT_10065d24[1];
      uVar9 = DAT_10065d24[2];
      uVar11 = DAT_10065d24[3];
      puVar14 = DAT_10065d24 + 4;
      *DAT_10065d20 = *DAT_10065d24;
      puVar13[1] = uVar8;
      puVar13[2] = uVar9;
      puVar13[3] = uVar11;
      uVar8 = puVar4[5];
      uVar9 = puVar4[6];
      uVar11 = puVar4[7];
      puVar13[4] = *puVar14;
      puVar13[5] = uVar8;
      puVar13[6] = uVar9;
      puVar13[7] = uVar11;
      uVar8 = puVar4[9];
      uVar9 = puVar4[10];
      uVar11 = puVar4[0xb];
      puVar13[8] = puVar4[8];
      puVar13[9] = uVar8;
      puVar13[10] = uVar9;
      puVar13[0xb] = uVar11;
      uVar8 = puVar4[0xd];
      uVar9 = puVar4[0xe];
      uVar11 = puVar4[0xf];
      puVar13[0xc] = puVar4[0xc];
      puVar13[0xd] = uVar8;
      puVar13[0xe] = uVar9;
      puVar13[0xf] = uVar11;
    }
  }
  if (iVar6 != 0) {
    FUN_1011dfde(param_1,iVar6);
  }
  return 0;
}

