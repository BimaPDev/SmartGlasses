/* FUN_14028770 @ 0x14028770 */

uint FUN_14028770(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 unaff_lr;
  
  puVar4 = DAT_14028868;
  pbVar3 = DAT_14028864;
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14028884);
  }
  if (param_1 == 0) {
    return 0xff;
  }
  if (2 < param_1 - 1) {
    uVar7 = 0x32;
    pbVar8 = DAT_1402885c;
    while (uVar7 != param_1) {
      if (pbVar8 == DAT_1402885c + 0xf) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_14028860,param_1,param_2,pbVar8,param_4);
      }
      pbVar8 = pbVar8 + 1;
      uVar7 = (uint)*pbVar8;
    }
  }
  iVar9 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar9 = getBasePriority();
  }
  if (iVar9 != 0x40) {
    bVar1 = *DAT_14028864;
    *DAT_14028868 = 0x140287ac;
    puVar4[1] = unaff_lr;
    uVar7 = bVar1 + 1;
    *pbVar3 = (char)uVar7 + (char)(uint)((ulonglong)DAT_1402886c * (ulonglong)uVar7 >> 0x23) * -10;
    *(undefined4 *)(DAT_14028870 + (uint)bVar1 * 4) = unaff_lr;
  }
  iVar5 = DAT_14028878;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    if (((param_2 != 0) && (uVar6 = 7 - uVar7 & 0xff, param_2 == 2)) && ((9 - uVar7 & 0xff) < 8)) {
      uVar6 = 0xff;
      goto LAB_14028804;
    }
    if ((*(char *)(DAT_14028874 + uVar6) == '\0') &&
       ((1 << uVar6 & *(uint *)(DAT_14028878 + 0x1c)) == 0)) {
      *(undefined1 *)(DAT_14028874 + uVar6) = 1;
      *(uint *)(iVar5 + 0x30) = *(uint *)(iVar5 + 0x30) | (1 << uVar6) << 0xc;
      goto LAB_14028804;
    }
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 != 8);
  uVar6 = 0xff;
LAB_14028804:
  if (iVar9 == 0) {
    *DAT_14028868 = 0xffffffff;
  }
  bVar1 = *DAT_1402887c;
  uVar7 = bVar1 + 1;
  *DAT_1402887c =
       (char)uVar7 + (char)(uint)((ulonglong)DAT_1402886c * (ulonglong)uVar7 >> 0x23) * -10;
  *(undefined4 *)(DAT_14028880 + (uint)bVar1 * 4) = unaff_lr;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar9);
  }
  return uVar6;
}

