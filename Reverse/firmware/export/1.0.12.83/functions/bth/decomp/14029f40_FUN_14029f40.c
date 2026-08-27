/* FUN_14029f40 @ 0x14029f40 */

int FUN_14029f40(uint param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 unaff_lr;
  
  puVar6 = DAT_14029bac;
  pbVar5 = DAT_14029ba8;
  if (2 < param_1) {
    return 1;
  }
  iVar10 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar10 = getBasePriority();
  }
  if (iVar10 != 0x40) {
    bVar1 = *DAT_14029ba8;
    *DAT_14029bac = 0x14029a9c;
    puVar6[1] = unaff_lr;
    uVar9 = bVar1 + 1;
    *pbVar5 = (char)uVar9 + (char)(uint)((ulonglong)DAT_14029bb0 * (ulonglong)uVar9 >> 0x23) * -10;
    *(undefined4 *)(DAT_14029bb4 + (uint)bVar1 * 4) = unaff_lr;
  }
  pbVar5 = DAT_14029bd0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  uVar9 = (uint)*DAT_14029bd0;
  if (uVar9 < 3) {
    if (uVar9 == param_1) {
      iVar11 = 0;
    }
    else {
      pbVar3 = DAT_14029bc0;
      pcVar4 = DAT_14029bcc;
      iVar12 = DAT_14029bd4;
      if (uVar9 - 1 < 2) {
        if (*DAT_14029bcc != -1) {
          FUN_14028694();
        }
        FUN_1402c520(*DAT_14029bc0);
        pbVar3 = DAT_14029bc0;
        pcVar4 = DAT_14029bcc;
        iVar12 = DAT_14029bd4;
      }
      uVar9 = param_1 - 1 & 0xff;
      DAT_14029bc0 = pbVar3;
      DAT_14029bcc = pcVar4;
      DAT_14029bd4 = iVar12;
      if (uVar9 < 2) {
        cVar8 = *pcVar4;
        *pbVar3 = (byte)(param_1 - 1);
        if (cVar8 != -1) {
          FUN_14028888();
          uVar9 = (uint)*pbVar3;
        }
        iVar12 = DAT_14029bd4;
        cVar8 = *(char *)(DAT_14029bc4 + uVar9);
        pcVar4[10] = cVar8;
        cVar8 = FUN_14028770(cVar8,0);
        *pcVar4 = cVar8;
        uVar7 = DAT_14029bc8;
        bVar1 = *pbVar3;
        *(undefined2 *)(iVar12 + 10) = 0;
        *(undefined2 *)(iVar12 + 0xc) = 0;
        iVar11 = FUN_1402c6c8(bVar1,uVar7);
        if (iVar11 != 0) {
          FUN_14028888(*pcVar4);
          *pcVar4 = -1;
          *pbVar5 = 3;
          goto LAB_14029af4;
        }
      }
      iVar11 = 0;
      *pbVar5 = (byte)param_1;
      *(undefined1 *)(iVar12 + 6) = 0;
    }
  }
  else {
    iVar11 = 1;
  }
LAB_14029af4:
  if (iVar10 == 0) {
    *DAT_14029bac = 0xffffffff;
  }
  bVar1 = *DAT_14029bb8;
  uVar9 = bVar1 + 1;
  *DAT_14029bb8 =
       (char)uVar9 + (char)(uint)((ulonglong)DAT_14029bb0 * (ulonglong)uVar9 >> 0x23) * -10;
  *(undefined4 *)(DAT_14029bbc + (uint)bVar1 * 4) = unaff_lr;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar10);
  }
  return iVar11;
}

