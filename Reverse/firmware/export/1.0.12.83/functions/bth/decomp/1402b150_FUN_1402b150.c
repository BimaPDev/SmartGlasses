/* FUN_1402b150 @ 0x1402b150 */

int FUN_1402b150(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 unaff_lr;
  
  puVar8 = DAT_1402b238;
  pbVar4 = DAT_1402b230;
  puVar7 = DAT_14029bac;
  pbVar6 = DAT_14029ba8;
  if (2 < param_1) {
    return 1;
  }
  if (2 < *DAT_1402b230) {
    uVar13 = DAT_1402b234[1];
    *DAT_1402b238 = *DAT_1402b234;
    puVar7 = DAT_1402b23c;
    uVar11 = param_1 - 1 & 0xff;
    *DAT_1402b23c = 0;
    puVar7[1] = 0;
    *(short *)(puVar8 + 1) = (short)uVar13;
    *(undefined2 *)(puVar7 + 2) = 0;
    uVar13 = DAT_1402b260;
    pbVar6 = DAT_1402b25c;
    if (uVar11 < 2) {
      *DAT_1402b25c = (byte)(param_1 - 1);
      iVar12 = FUN_1402c6c8(uVar11,uVar13,puVar8,0,param_4);
      if (iVar12 != 0) {
        return iVar12;
      }
      *(undefined2 *)((int)puVar7 + 10) = 0;
      *(undefined2 *)(puVar7 + 3) = 0;
      puVar7 = DAT_1402b264;
      bVar1 = *pbVar6;
      DAT_1402b264[1] = 0;
      puVar7[2] = 0;
      *(undefined2 *)((int)puVar7 + 6) = 0x204;
      *(undefined1 *)(puVar7 + 2) = 1;
      iVar12 = DAT_1402b268;
      puVar7[3] = 0;
      puVar7[4] = 0;
      *puVar7 = 0;
      puVar7[6] = 0;
      uVar13 = DAT_1402b26c;
      uVar2 = *(undefined1 *)(iVar12 + (uint)bVar1);
      *(undefined1 *)((int)puVar7 + 10) = uVar2;
      puVar7[5] = uVar13;
      iVar12 = FUN_14028770(uVar2,0);
      *(char *)puVar7 = (char)iVar12;
      if (iVar12 == 0xff) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_1402b270);
      }
    }
    *pbVar4 = (byte)param_1;
    puVar7 = DAT_1402b244;
    *DAT_1402b240 = 4;
    pcVar5 = DAT_1402b24c;
    puVar9 = DAT_1402b248;
    *puVar7 = 0xffffffff;
    puVar7[1] = 0xffffffff;
    uVar13 = DAT_1402b250;
    *puVar9 = 0;
    FUN_14039b30(uVar13);
    if ((*pcVar5 != '\0') && (FUN_14029cb0(DAT_1402b254,1), *pcVar5 != '\0')) {
      FUN_14029cb0(DAT_1402b254,1);
      uVar13 = FUN_140dd3a4(DAT_1402b258);
      if ((*pcVar5 != '\0') && (FUN_14029cb0(DAT_1402b258,uVar13), *pcVar5 != '\0')) {
        FUN_14029cb0(DAT_1402b254,1);
        return 0;
      }
    }
    return 0;
  }
  iVar12 = 0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    iVar12 = getBasePriority();
  }
  if (iVar12 != 0x40) {
    bVar1 = *DAT_14029ba8;
    *DAT_14029bac = 0x14029a9c;
    puVar7[1] = unaff_lr;
    uVar11 = bVar1 + 1;
    *pbVar6 = (char)uVar11 + (char)(uint)((ulonglong)DAT_14029bb0 * (ulonglong)uVar11 >> 0x23) * -10
    ;
    *(undefined4 *)(DAT_14029bb4 + (uint)bVar1 * 4) = unaff_lr;
  }
  pbVar6 = DAT_14029bd0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(0x40);
  }
  uVar11 = (uint)*DAT_14029bd0;
  if (uVar11 < 3) {
    if (uVar11 == param_1) {
      iVar14 = 0;
    }
    else {
      pbVar4 = DAT_14029bc0;
      pcVar5 = DAT_14029bcc;
      iVar15 = DAT_14029bd4;
      if (uVar11 - 1 < 2) {
        if (*DAT_14029bcc != -1) {
          FUN_14028694();
        }
        FUN_1402c520(*DAT_14029bc0);
        pbVar4 = DAT_14029bc0;
        pcVar5 = DAT_14029bcc;
        iVar15 = DAT_14029bd4;
      }
      uVar11 = param_1 - 1 & 0xff;
      DAT_14029bc0 = pbVar4;
      DAT_14029bcc = pcVar5;
      DAT_14029bd4 = iVar15;
      if (uVar11 < 2) {
        cVar10 = *pcVar5;
        *pbVar4 = (byte)(param_1 - 1);
        if (cVar10 != -1) {
          FUN_14028888();
          uVar11 = (uint)*pbVar4;
        }
        iVar15 = DAT_14029bd4;
        cVar10 = *(char *)(DAT_14029bc4 + uVar11);
        pcVar5[10] = cVar10;
        cVar10 = FUN_14028770(cVar10,0);
        *pcVar5 = cVar10;
        uVar13 = DAT_14029bc8;
        bVar1 = *pbVar4;
        *(undefined2 *)(iVar15 + 10) = 0;
        *(undefined2 *)(iVar15 + 0xc) = 0;
        iVar14 = FUN_1402c6c8(bVar1,uVar13);
        if (iVar14 != 0) {
          FUN_14028888(*pcVar5);
          *pcVar5 = -1;
          *pbVar6 = 3;
          goto LAB_14029af4;
        }
      }
      iVar14 = 0;
      *pbVar6 = (byte)param_1;
      *(undefined1 *)(iVar15 + 6) = 0;
    }
  }
  else {
    iVar14 = 1;
  }
LAB_14029af4:
  if (iVar12 == 0) {
    *DAT_14029bac = 0xffffffff;
  }
  bVar1 = *DAT_14029bb8;
  uVar11 = bVar1 + 1;
  *DAT_14029bb8 =
       (char)uVar11 + (char)(uint)((ulonglong)DAT_14029bb0 * (ulonglong)uVar11 >> 0x23) * -10;
  *(undefined4 *)(DAT_14029bbc + (uint)bVar1 * 4) = unaff_lr;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(iVar12);
  }
  return iVar14;
}

