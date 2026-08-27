/* FUN_2c00ac24 @ 0x2c00ac24 */

void FUN_2c00ac24(uint param_1)

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
  
  iVar4 = DAT_2c00acf4;
  local_24 = *DAT_2c00acec;
  pcVar7 = acStack_30;
  do {
    pcVar8 = pcVar7;
    uVar9 = (uint)((ulonglong)DAT_2c00acf0 * (ulonglong)param_1 >> 0x23);
    cVar2 = (char)param_1 + (char)uVar9 * -10 + '0';
    *pcVar8 = cVar2;
    bVar1 = 9 < param_1;
    param_1 = uVar9;
    pcVar7 = pcVar8 + 1;
  } while (bVar1);
  iVar10 = 1;
  pcVar7 = (char *)(DAT_2c00acf4 + 7);
  *(char *)(DAT_2c00acf4 + 6) = cVar2;
  do {
    if (pcVar8 <= acStack_30) {
      iVar10 = iVar10 + 6;
      goto LAB_2c00ac7e;
    }
    iVar10 = iVar10 + 1;
    pcVar8 = pcVar8 + -1;
    *pcVar7 = *pcVar8;
    pcVar7 = pcVar7 + 1;
  } while (iVar10 != 5);
  iVar10 = 0xb;
LAB_2c00ac7e:
  iVar6 = DAT_2c00acf8;
  iVar5 = DAT_2c00acf4;
  puVar13 = (ushort *)(DAT_2c00acf8 + 0x1000);
  uVar12 = iVar10 + 1U & 0xffff;
  *(undefined1 *)(iVar4 + iVar10) = 10;
  uVar9 = 0x1000 - *puVar13 & 0xffff;
  if (uVar12 <= uVar9) {
    uVar9 = uVar12;
  }
  FUN_2c00395c((uint)*puVar13 + iVar6,iVar5,uVar9);
  if (uVar9 < uVar12) {
    FUN_2c00395c(iVar6,iVar4 + uVar9,uVar12 - uVar9);
  }
  piVar3 = DAT_2c00acec;
  uVar11 = (ushort)(uVar12 + *puVar13);
  if (0xfff < (uVar12 + *puVar13 & 0xffff)) {
    uVar11 = uVar11 - 0x1000;
  }
  *puVar13 = uVar11;
  if (*piVar3 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

