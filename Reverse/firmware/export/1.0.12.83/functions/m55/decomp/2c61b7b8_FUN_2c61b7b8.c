/* FUN_2c61b7b8 @ 0x2c61b7b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c61b7b8(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  char acStack_41 [17];
  char cStack_30;
  char acStack_2f [19];
  int iStack_1c;
  
  iStack_1c = *_LAB_2c61b8f8;
  FUN_2c62c3b0(&cStack_30,0x12,param_3,0);
  iVar7 = *(int *)(param_1 + 100);
  if (*(int *)(param_1 + 0x6c) < 0) {
    iVar8 = 0;
    pcVar10 = acStack_2f;
    if (iVar7 < 0) {
      cStack_30 = '-';
    }
    else {
      cStack_30 = '+';
    }
  }
  else {
    iVar8 = 1;
    pcVar10 = &cStack_30;
  }
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  FUN_2c62dbd4(acStack_41 + 1,0xe,_LAB_2c61b8fc,iVar7);
  iVar7 = FUN_2c66c4ec(acStack_41 + 1);
  bVar2 = *(byte *)(param_1 + 0x74);
  uVar11 = bVar2 & 0xf;
  if (0 < (int)(uVar11 - iVar7)) {
    pcVar3 = acStack_41 + iVar7 + 2;
    pcVar5 = acStack_41 + uVar11 + 1;
    do {
      pcVar3 = pcVar3 + -1;
      *pcVar5 = *pcVar3;
      pcVar5 = pcVar5 + -1;
    } while (pcVar3 != acStack_41 + 1);
    pcVar3 = acStack_41 + 1;
    do {
      pcVar5 = pcVar3 + 1;
      *pcVar3 = '0';
      pcVar3 = pcVar5;
    } while (pcVar5 != acStack_41 + (uVar11 - iVar7) + 1);
  }
  if ((bVar2 & 0xf0) == 0) {
    uVar9 = uVar11;
    if ((bVar2 & 0xf) == 0) goto LAB_2c61b85a;
LAB_2c61b840:
    iVar7 = 0;
    pcVar3 = acStack_41 + 1;
    pcVar5 = pcVar10;
    do {
      pcVar10 = pcVar5;
      if (*pcVar3 == '\0') break;
      iVar7 = iVar7 + 1;
      pcVar10 = pcVar5 + 1;
      *pcVar5 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar10;
    } while (iVar7 < (int)uVar9);
    if ((bVar2 & 0xf0) == 0) goto LAB_2c61b85a;
  }
  else {
    uVar9 = (uint)(bVar2 >> 4);
    if (uVar9 != 0) goto LAB_2c61b840;
    iVar7 = 0;
  }
  *pcVar10 = '.';
  if (iVar7 < (int)uVar11) {
    pcVar3 = acStack_41 + iVar7;
    pcVar5 = pcVar10 + 1;
    do {
      pcVar3 = pcVar3 + 1;
      if (*pcVar3 == '\0') break;
      pcVar6 = pcVar5 + 1;
      *pcVar5 = *pcVar3;
      pcVar5 = pcVar6;
    } while (pcVar6 != pcVar10 + ((uVar11 + 1) - iVar7));
  }
LAB_2c61b85a:
  func_0x2c633974(param_1,&cStack_30);
  uVar11 = *(uint *)(param_1 + 0x70);
  uVar4 = *(byte *)(param_1 + 0x74) & 0xf;
  if (9 < (int)uVar11) {
    do {
      uVar4 = uVar4 - 1 & 0xff;
      bVar1 = 99 < (int)uVar11;
      uVar11 = (uint)((ulonglong)_LAB_2c61b900 * (ulonglong)uVar11 >> 0x23);
    } while (bVar1);
  }
  if (uVar9 < uVar4) {
    uVar4 = uVar4 + 1 & 0xff;
  }
  FUN_2c63339c(param_1,uVar4 - iVar8 & 0xff);
  if (*_LAB_2c61b8f8 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

