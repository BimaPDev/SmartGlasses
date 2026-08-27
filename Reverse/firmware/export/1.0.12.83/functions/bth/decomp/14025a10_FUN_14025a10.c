/* FUN_14025a10 @ 0x14025a10 */

void FUN_14025a10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_lr;
  
  uVar6 = DAT_14025aa8;
  puVar5 = DAT_14025aa4;
  pbVar4 = DAT_14025aa0;
  iVar9 = 0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    iVar9 = getBasePriority();
  }
  if (iVar9 != 0x40) {
    bVar1 = *DAT_14025aa0;
    *DAT_14025aa4 = 0x14025a22;
    puVar5[1] = unaff_lr;
    uVar8 = bVar1 + 1;
    *pbVar4 = (char)uVar8 + (char)(uint)((ulonglong)uVar6 * (ulonglong)uVar8 >> 0x23) * -10;
    *(undefined4 *)(DAT_14025aac + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(0x40);
  }
  pcVar7 = *(char **)(DAT_14025ab0 + 300);
  if (pcVar7 != (char *)0x0) {
    *(undefined4 *)(DAT_14025ab0 + 300) = *(undefined4 *)(pcVar7 + 4);
  }
  if (iVar9 == 0) {
    *DAT_14025aa4 = 0xffffffff;
  }
  pbVar4 = DAT_14025ab4;
  uVar6 = DAT_14025aa8;
  bVar1 = *DAT_14025ab4;
  *(undefined4 *)(DAT_14025abc + (uint)bVar1 * 4) = unaff_lr;
  uVar8 = bVar1 + 1;
  *pbVar4 = (char)uVar8 + (char)(uint)((ulonglong)uVar6 * (ulonglong)uVar8 >> 0x23) * -10;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(iVar9);
  }
  if (pcVar7 != (char *)0x0) {
    cVar2 = *pcVar7;
    if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14025ab8,cVar2,uVar8,cVar2,param_4);
    }
    *(undefined4 *)(pcVar7 + 0xc) = param_1;
    *(undefined4 *)(pcVar7 + 0x10) = param_2;
    pcVar7[4] = '\0';
    pcVar7[5] = '\0';
    pcVar7[6] = '\0';
    pcVar7[7] = '\0';
    *pcVar7 = '\x01';
  }
  return;
}

