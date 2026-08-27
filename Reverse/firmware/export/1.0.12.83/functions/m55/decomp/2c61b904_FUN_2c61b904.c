/* FUN_2c61b904 @ 0x2c61b904 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c61b904(undefined4 param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  char acStack_41 [17];
  char cStack_30;
  char acStack_2f [19];
  int iStack_1c;
  
  uVar3 = _LAB_2c61b948;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0x68) = uVar3;
  uVar3 = _LAB_2c61b94c;
  *(undefined4 *)(param_2 + 0x70) = 1;
  *(undefined4 *)(param_2 + 0x6c) = uVar3;
  *(ushort *)(param_2 + 0x74) = *(ushort *)(param_2 + 0x74) & 0xf800 | 0x405;
  func_0x2c633560(param_2);
  func_0x2c633550(param_2,1);
  iStack_1c = *_LAB_2c61b8f8;
  FUN_2c62c3b0(&cStack_30,0x12);
  iVar8 = *(int *)(param_2 + 100);
  if (*(int *)(param_2 + 0x6c) < 0) {
    iVar9 = 0;
    pcVar11 = acStack_2f;
    if (iVar8 < 0) {
      cStack_30 = '-';
    }
    else {
      cStack_30 = '+';
    }
  }
  else {
    iVar9 = 1;
    pcVar11 = &cStack_30;
  }
  if (iVar8 < 0) {
    iVar8 = -iVar8;
  }
  FUN_2c62dbd4(acStack_41 + 1,0xe,_LAB_2c61b8fc,iVar8);
  iVar8 = FUN_2c66c4ec(acStack_41 + 1);
  bVar2 = *(byte *)(param_2 + 0x74);
  uVar12 = bVar2 & 0xf;
  if (0 < (int)(uVar12 - iVar8)) {
    pcVar4 = acStack_41 + iVar8 + 2;
    pcVar6 = acStack_41 + uVar12 + 1;
    do {
      pcVar4 = pcVar4 + -1;
      *pcVar6 = *pcVar4;
      pcVar6 = pcVar6 + -1;
    } while (pcVar4 != acStack_41 + 1);
    pcVar4 = acStack_41 + 1;
    do {
      pcVar6 = pcVar4 + 1;
      *pcVar4 = '0';
      pcVar4 = pcVar6;
    } while (pcVar6 != acStack_41 + (uVar12 - iVar8) + 1);
  }
  if ((bVar2 & 0xf0) == 0) {
    uVar10 = uVar12;
    if ((bVar2 & 0xf) == 0) goto LAB_2c61b85a;
LAB_2c61b840:
    iVar8 = 0;
    pcVar4 = acStack_41 + 1;
    pcVar6 = pcVar11;
    do {
      pcVar11 = pcVar6;
      if (*pcVar4 == '\0') break;
      iVar8 = iVar8 + 1;
      pcVar11 = pcVar6 + 1;
      *pcVar6 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar11;
    } while (iVar8 < (int)uVar10);
    if ((bVar2 & 0xf0) == 0) goto LAB_2c61b85a;
  }
  else {
    uVar10 = (uint)(bVar2 >> 4);
    if (uVar10 != 0) goto LAB_2c61b840;
    iVar8 = 0;
  }
  *pcVar11 = '.';
  if (iVar8 < (int)uVar12) {
    pcVar4 = acStack_41 + iVar8;
    pcVar6 = pcVar11 + 1;
    do {
      pcVar4 = pcVar4 + 1;
      if (*pcVar4 == '\0') break;
      pcVar7 = pcVar6 + 1;
      *pcVar6 = *pcVar4;
      pcVar6 = pcVar7;
    } while (pcVar7 != pcVar11 + ((uVar12 + 1) - iVar8));
  }
LAB_2c61b85a:
  func_0x2c633974(param_2,&cStack_30);
  uVar12 = *(uint *)(param_2 + 0x70);
  uVar5 = *(byte *)(param_2 + 0x74) & 0xf;
  if (9 < (int)uVar12) {
    do {
      uVar5 = uVar5 - 1 & 0xff;
      bVar1 = 99 < (int)uVar12;
      uVar12 = (uint)((ulonglong)_LAB_2c61b900 * (ulonglong)uVar12 >> 0x23);
    } while (bVar1);
  }
  if (uVar10 < uVar5) {
    uVar5 = uVar5 + 1 & 0xff;
  }
  FUN_2c63339c(param_2,uVar5 - iVar9 & 0xff);
  if (*_LAB_2c61b8f8 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

