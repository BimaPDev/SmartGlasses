/* FUN_14030694 @ 0x14030694 */

void FUN_14030694(uint param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 unaff_lr;
  ushort local_1e;
  uint local_1c;
  
  pcVar5 = DAT_140307b0;
  local_1c = *DAT_140307ac;
  cVar1 = *DAT_140307b0;
  if (cVar1 == '\x02') {
    if (*DAT_140307cc < 2) goto LAB_14030766;
    uVar10 = (param_1 & 0x1f) << 3;
    if (0x3b < uVar10) {
      uVar10 = 0x3c;
    }
    uVar9 = 0x10a;
  }
  else {
    uVar10 = (param_1 & 0x1f) << 3;
    if (0x3b < uVar10) {
      uVar10 = 0x3c;
    }
    if (cVar1 == '\0') {
      uVar9 = 0x69;
    }
    else if (cVar1 == '\x03') {
      uVar9 = 0x69;
    }
    else {
      uVar9 = 0x10a;
    }
  }
  FUN_1402e37c(uVar9,0xffe);
  uVar8 = DAT_140307bc;
  puVar7 = DAT_140307b8;
  pbVar6 = DAT_140307b4;
  iVar12 = 0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    iVar12 = getBasePriority();
  }
  if (iVar12 != 0x40) {
    bVar2 = *DAT_140307b4;
    *DAT_140307b8 = 0x140306d2;
    puVar7[1] = unaff_lr;
    uVar11 = bVar2 + 1;
    *pbVar6 = (char)uVar11 + (char)(uint)((ulonglong)uVar8 * (ulonglong)uVar11 >> 0x23) * -10;
    *(undefined4 *)(DAT_140307c0 + (uint)bVar2 * 4) = unaff_lr;
  }
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(0x40);
  }
  cVar1 = *pcVar5;
  if (cVar1 == '\0') {
    uVar9 = 0x6b;
  }
  else if (cVar1 == '\x03') {
    uVar9 = 0x6b;
  }
  else {
    uVar9 = 0x10c;
  }
  FUN_1402e1fc(uVar9,&local_1e);
  cVar1 = *pcVar5;
  local_1e = local_1e & 0x3ff | (ushort)(uVar10 << 10) | 0x200;
  if (cVar1 == '\0') {
    uVar9 = 0x6b;
  }
  else if (cVar1 == '\x03') {
    uVar9 = 0x6b;
  }
  else {
    uVar9 = 0x10c;
  }
  FUN_1402e37c(uVar9);
  if (iVar12 == 0) {
    *DAT_140307b8 = 0xffffffff;
  }
  param_2 = DAT_140307c4;
  bVar2 = *DAT_140307c4;
  *(undefined4 *)(DAT_140307c8 + (uint)bVar2 * 4) = unaff_lr;
  uVar10 = bVar2 + 1;
  lVar4 = (ulonglong)DAT_140307bc * (ulonglong)uVar10;
  param_1 = (uint)lVar4;
  *param_2 = (char)uVar10 + (char)(uint)((ulonglong)lVar4 >> 0x23) * -10;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(iVar12);
  }
LAB_14030766:
  if ((*DAT_140307ac ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(param_1,param_2,*DAT_140307ac ^ local_1c,0);
}

