/* FUN_14030034 @ 0x14030034 */

void FUN_14030034(int param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  uint extraout_r2;
  uint uVar8;
  int iVar9;
  undefined4 unaff_lr;
  undefined2 local_16;
  uint local_14;
  
  cVar1 = *DAT_14030120;
  local_14 = *DAT_14030124;
  if (cVar1 == '\x02') {
    if (*DAT_14030144 == '\x01') {
      uVar6 = 2;
      goto LAB_140300da;
    }
    if ((byte *)0xffff < param_2 + param_1) goto LAB_140300fc;
    uVar7 = 0x10b;
    *DAT_14030128 = (short)(param_2 + param_1);
  }
  else {
    if ((byte *)0xffff < param_2 + param_1) {
LAB_140300fc:
      param_2 = param_2 + param_1;
      uVar6 = 1;
      goto LAB_140300da;
    }
    *DAT_14030128 = (short)(param_2 + param_1);
    if (cVar1 == '\0') {
      uVar7 = 0x6a;
    }
    else {
      uVar7 = 0x10b;
      if (cVar1 == '\x03') {
        uVar7 = 0x6a;
      }
    }
  }
  FUN_1402e37c(uVar7);
  puVar5 = DAT_14030130;
  pbVar4 = DAT_1403012c;
  iVar9 = 0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    iVar9 = getBasePriority();
  }
  uVar8 = extraout_r2;
  if (iVar9 != 0x40) {
    bVar2 = *DAT_1403012c;
    *DAT_14030130 = 0x14030070;
    puVar5[1] = unaff_lr;
    uVar8 = bVar2 + 1;
    *pbVar4 = (char)uVar8 + (char)(uint)((ulonglong)DAT_14030134 * (ulonglong)uVar8 >> 0x23) * -10;
    *(undefined4 *)(DAT_14030138 + (uint)bVar2 * 4) = unaff_lr;
  }
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(0x40);
  }
  FUN_1402e1fc(0xb,&local_16,uVar8,0x40);
  FUN_1402e37c(0xb,local_16);
  if (iVar9 == 0) {
    *DAT_14030130 = 0xffffffff;
  }
  param_2 = DAT_1403013c;
  bVar2 = *DAT_1403013c;
  *(undefined4 *)(DAT_14030140 + (uint)bVar2 * 4) = unaff_lr;
  uVar8 = bVar2 + 1;
  *param_2 = (char)uVar8 + (char)(uint)((ulonglong)DAT_14030134 * (ulonglong)uVar8 >> 0x23) * -10;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(iVar9);
  }
  uVar6 = 0;
LAB_140300da:
  if ((*DAT_14030124 ^ local_14) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc(uVar6,param_2,*DAT_14030124 ^ local_14,0);
  }
  return;
}

