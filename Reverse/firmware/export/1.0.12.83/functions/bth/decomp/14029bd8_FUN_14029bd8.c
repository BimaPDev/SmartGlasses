/* FUN_14029bd8 @ 0x14029bd8 */

void FUN_14029bd8(uint param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  ushort uVar11;
  uint uVar12;
  ushort *puVar13;
  char acStack_30 [12];
  int local_24;
  
  iVar4 = DAT_14029ca8;
  local_24 = *DAT_14029ca0;
  pcVar7 = acStack_30;
  do {
    pcVar8 = pcVar7;
    uVar9 = (uint)((ulonglong)DAT_14029ca4 * (ulonglong)param_1 >> 0x23);
    cVar2 = (char)param_1 + (char)uVar9 * -10 + '0';
    *pcVar8 = cVar2;
    bVar1 = 9 < param_1;
    param_1 = uVar9;
    pcVar7 = pcVar8 + 1;
  } while (bVar1);
  iVar10 = 1;
  *(char *)(DAT_14029ca8 + 6) = cVar2;
  pcVar7 = (char *)(iVar4 + 7);
  do {
    if (pcVar8 <= acStack_30) {
      iVar10 = iVar10 + 6;
      goto LAB_14029c32;
    }
    pcVar8 = pcVar8 + -1;
    iVar10 = iVar10 + 1;
    *pcVar7 = *pcVar8;
    pcVar7 = pcVar7 + 1;
  } while (iVar10 != 5);
  iVar10 = 0xb;
LAB_14029c32:
  iVar6 = DAT_14029cac;
  iVar5 = DAT_14029ca8;
  puVar13 = (ushort *)(DAT_14029cac + 0x2000);
  uVar11 = *puVar13;
  uVar12 = iVar10 + 1U & 0xffff;
  uVar9 = 0x2000 - uVar11 & 0xffff;
  if (uVar12 <= uVar9) {
    uVar9 = uVar12;
  }
  *(undefined1 *)(iVar4 + iVar10) = 10;
  FUN_140e5278((uint)uVar11 + iVar6,iVar5,uVar9);
  if (uVar9 < uVar12) {
    FUN_140e5278(iVar6,iVar4 + uVar9,uVar12 - uVar9);
  }
  piVar3 = DAT_14029ca0;
  uVar11 = (ushort)(uVar12 + *puVar13);
  if (0x1fff < (uVar12 + *puVar13 & 0xffff)) {
    uVar11 = uVar11 + 0xe000;
  }
  *puVar13 = uVar11;
  if (*piVar3 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

