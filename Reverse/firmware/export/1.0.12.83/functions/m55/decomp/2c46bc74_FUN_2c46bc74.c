/* FUN_2c46bc74 @ 0x2c46bc74 */

void FUN_2c46bc74(char *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r1;
  int extraout_r1_00;
  int iVar9;
  int iVar10;
  bool bVar11;
  char *pcVar12;
  undefined8 uVar13;
  int local_90;
  int iStack_8c;
  char local_88;
  char acStack_87 [99];
  uint local_24;
  
  piVar4 = DAT_2c46be50;
  local_24 = *DAT_2c46be4c;
  if (*DAT_2c46be50 == 0) {
    FUN_2c66b4f8(DAT_2c46be5c,DAT_2c46be58);
    piVar8 = (int *)FUN_2c6685e0();
    iVar5 = iStack_8c;
    iVar10 = local_90;
    iVar9 = *piVar8;
    FUN_2c66b4f8(DAT_2c46be60,DAT_2c46be58,&local_90);
    piVar8 = (int *)FUN_2c6685e0();
    if ((((iVar9 != 0x22) || (iVar10 != 0 || iVar5 != -0x80000000)) ||
        (iStack_8c != 0x7fffffff || local_90 != -1)) || (*piVar8 != 0x22)) {
      *DAT_2c46be64 = 1;
    }
    *piVar4 = 1;
  }
  iVar5 = DAT_2c46be54;
  iVar10 = (int)*param_1;
  bVar1 = *(byte *)(DAT_2c46be54 + iVar10);
  while (((int)((uint)bVar1 << 0x1c) < 0 && (iVar10 != 0))) {
    param_1 = param_1 + 1;
    iVar10 = (int)*param_1;
    bVar1 = *(byte *)(DAT_2c46be54 + iVar10);
  }
  bVar11 = false;
  puVar6 = (undefined4 *)FUN_2c6685e0();
  *puVar6 = 0;
  uVar13 = FUN_2c66b4f8(param_1,DAT_2c46be58,&local_90);
  iVar10 = (int)((ulonglong)uVar13 >> 0x20);
  if ((int)uVar13 != 1) {
    uVar7 = 1;
    goto LAB_2c46bcc8;
  }
  uVar13 = FUN_2c6685e0();
  iVar10 = (int)((ulonglong)uVar13 >> 0x20);
  cVar2 = *param_1;
  iVar9 = *(int *)uVar13;
  if (cVar2 == '-') {
    if (*DAT_2c46be64 == 0) {
      if (iVar9 != 0x22) goto LAB_2c46bda8;
    }
    else if (iVar9 != 0x22) {
      cVar2 = param_1[1];
      bVar11 = true;
      param_1 = param_1 + 1;
      goto joined_r0x2c46bd52;
    }
LAB_2c46bd98:
    local_90 = 0;
    iStack_8c = -0x80000000;
  }
  else {
    iVar10 = *DAT_2c46be64;
    if (iVar10 == 0) {
      if (iVar9 != 0x22) goto LAB_2c46bda8;
    }
    else if (iVar9 != 0x22) {
joined_r0x2c46bd52:
      do {
        pcVar3 = param_1;
        if (cVar2 != '0') break;
        cVar2 = pcVar3[1];
        param_1 = pcVar3 + 1;
      } while (cVar2 != '\0');
      if (local_90 == 0 && iStack_8c == 0) {
        FUN_2c66b450(&local_88,100,DAT_2c46be58,0,0,0);
        iVar10 = extraout_r1_00;
        if (local_88 != '-') {
          iVar9 = FUN_2c66c4ec(&local_88);
          uVar13 = FUN_2c66c540(pcVar3,&local_88,iVar9);
          iVar10 = (int)((ulonglong)uVar13 >> 0x20);
          bVar11 = false;
          if ((int)uVar13 == 0) {
LAB_2c46be0a:
            uVar13 = FUN_2c66c4ec(pcVar3);
            iVar10 = (int)((ulonglong)uVar13 >> 0x20);
            if (((int)uVar13 == iVar9) ||
               (-1 < (int)((uint)*(byte *)(iVar5 + pcVar3[iVar9]) << 0x1d))) goto LAB_2c46bda8;
            goto joined_r0x2c46be44;
          }
        }
      }
      else {
        FUN_2c66b450(&local_88,100,DAT_2c46be58,iStack_8c,local_90,iStack_8c);
        if (local_88 == '-') {
          pcVar12 = acStack_87;
        }
        else {
          pcVar12 = &local_88;
        }
        iVar10 = extraout_r1;
        if ((local_88 == '-') == bVar11) {
          iVar9 = FUN_2c66c4ec(pcVar12);
          uVar13 = FUN_2c66c540(pcVar3,pcVar12,iVar9);
          iVar10 = (int)((ulonglong)uVar13 >> 0x20);
          if ((int)uVar13 == 0) goto LAB_2c46be0a;
        }
joined_r0x2c46be44:
        if (bVar11 != false) goto LAB_2c46bd98;
      }
    }
    local_90 = -1;
    iStack_8c = 0x7fffffff;
  }
LAB_2c46bda8:
  uVar7 = 0;
  *param_2 = local_90;
  param_2[1] = iStack_8c;
LAB_2c46bcc8:
  if ((*DAT_2c46be4c ^ local_24) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar7,iVar10,*DAT_2c46be4c ^ local_24,0);
  }
  return;
}

