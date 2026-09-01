/* FUN_1008f924 @ 0x1008f924 */

uint * FUN_1008f924(uint param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 extraout_r2;
  byte bVar8;
  undefined4 extraout_r3;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint local_34;
  uint *local_30;
  undefined4 local_2c [2];
  
  pcVar1 = DAT_1008fadc;
  local_30 = (uint *)(*(byte *)(param_1 + 9) & 7);
  if ((*(byte *)(param_1 + 9) & 7) != 0) {
    if (*DAT_1008fadc == '\0') {
      FUN_1008f77c();
      *pcVar1 = '\x01';
    }
    uVar7 = param_1 ^ (int)param_2 >> 1;
    local_34 = param_2;
    if ((*(byte *)(param_1 + 9) & 7) != 2) {
      local_34 = param_3;
    }
    local_34 = local_34 ^ uVar7;
    local_30 = (uint *)0x0;
    iVar5 = FUN_1008f71c(DAT_1008fae0,&local_34,&local_30);
    puVar4 = DAT_1008fb1c;
    piVar3 = DAT_1008fb18;
    uVar6 = DAT_1008faec;
    piVar2 = DAT_1008fae4;
    if (iVar5 == 1) {
      local_30[1] = local_30[1] & 0xc0000000 | local_30[1] + 1 & 0x3fffffff;
    }
    else {
      uVar11 = param_2;
      if ((*(byte *)(param_1 + 9) & 7) != 2) {
        uVar11 = param_3;
      }
      if ((int)param_3 < (int)param_2) {
        param_3 = param_2;
      }
      puVar9 = (uint *)*DAT_1008fae4;
      iVar10 = (param_3 * 2 + 3 & 0xfffffffc) + 0x18;
      uVar12 = iVar10 + uVar11 * 4;
      iVar5 = (int)puVar9 - *DAT_1008fb18;
      if (uVar12 + iVar5 < *DAT_1008fb1c) {
        *(byte *)((int)puVar9 + 7) = *(byte *)((int)puVar9 + 7) & 0x7f;
      }
      else {
        if (*DAT_1008fb1c < uVar12) {
          puVar9 = (uint *)FUN_10094254(uVar12,DAT_1008faf0);
          if (puVar9 == (uint *)0x0) {
            uVar13 = FUN_10094174(3,DAT_1008fb00,0xc1,DAT_1008faf0,DAT_1008fafc,DAT_1008faf8,
                                  DAT_1008faf4);
            FUN_10119dc2(DAT_1008fb08,DAT_1008fb04,DAT_1008fb00,0xc1,uVar13);
            FUN_10119dc2(DAT_1008fb0c);
            FUN_1011a1f0(DAT_1008fb00,0xc1,extraout_r2,extraout_r3);
            local_30 = puVar9;
            FUN_10094174(2,DAT_1008fb00,0x113,DAT_1008fb14,DAT_1008fb10);
            return local_30;
          }
          bVar8 = *(byte *)((int)puVar9 + 7) | 0x80;
        }
        else {
          while (*puVar4 < iVar5 + uVar12) {
            local_2c[0] = 0xffffffff;
            FUN_1008f71c(DAT_1008fae8,local_2c,0);
            FUN_1008f71c(uVar6,local_2c,0);
            iVar5 = *piVar2 - *piVar3;
          }
          puVar9 = (uint *)*piVar2;
          bVar8 = *(byte *)((int)puVar9 + 7) & 0x7f;
        }
        *(byte *)((int)puVar9 + 7) = bVar8;
      }
      *puVar9 = uVar7 ^ uVar11;
      uVar7 = puVar9[1];
      puVar9[1] = uVar7 & 0x80000000 | 1;
      puVar9[3] = param_3;
      puVar9[4] = uVar11;
      if ((uVar7 & 0x80000000) == 0) {
        iVar5 = *piVar2;
        puVar9[2] = iVar5 + 0x18;
        puVar9[5] = iVar10 + iVar5;
        *piVar2 = iVar5 + uVar12;
      }
      else {
        puVar9[2] = (uint)(puVar9 + 6);
        puVar9[5] = iVar10 + (int)puVar9;
      }
      local_30 = puVar9;
      for (iVar5 = 0; puVar4 = local_30, iVar5 < (int)local_30[4]; iVar5 = iVar5 + 1) {
        uVar6 = FUN_1008f810(param_1,local_30[4],iVar5);
        *(undefined4 *)(puVar4[5] + iVar5 * 4) = uVar6;
      }
    }
  }
  return local_30;
}

