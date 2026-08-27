/* FUN_2c60251c @ 0x2c60251c */

uint FUN_2c60251c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar9 = 0;
  if (iVar2 != 0) {
    uVar9 = *(byte *)(iVar2 + 0x1a) & 0x3f;
    if ((*(byte *)(iVar2 + 0x1a) & 0x3f) == 0) {
      return uVar9;
    }
    iVar10 = 0;
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar7 = 0;
    while (iVar1 = iVar10 * 4, iVar10 = iVar10 + 3, *(int *)(iVar4 + iVar1) != param_2) {
      uVar7 = uVar7 + 1;
      if (uVar7 == uVar9) {
        return 0;
      }
    }
    if ((int)uVar7 < (int)(uVar9 - 1)) {
      iVar10 = uVar7 * 0xc;
      while( true ) {
        puVar8 = (undefined4 *)(iVar4 + iVar10);
        uVar7 = uVar7 + 1;
        puVar5 = (undefined4 *)(iVar4 + iVar10 + 0xc);
        uVar3 = puVar5[1];
        uVar6 = puVar5[2];
        *puVar8 = *puVar5;
        puVar8[1] = uVar3;
        puVar8[2] = uVar6;
        iVar2 = *(int *)(param_1 + 8);
        uVar9 = *(byte *)(iVar2 + 0x1a) & 0x3f;
        if ((int)(uVar9 - 1) <= (int)uVar7) break;
        iVar4 = *(int *)(iVar2 + 0xc);
        iVar10 = iVar10 + 0xc;
      }
    }
    *(byte *)(iVar2 + 0x1a) = *(byte *)(iVar2 + 0x1a) & 0xc0 | (char)uVar9 + 0x3fU & 0x3f;
    iVar2 = *(int *)(param_1 + 8);
    uVar3 = FUN_2c62bebc(*(undefined4 *)(iVar2 + 0xc),(*(byte *)(iVar2 + 0x1a) & 0x3f) * 0xc);
    uVar9 = 1;
    *(undefined4 *)(iVar2 + 0xc) = uVar3;
  }
  return uVar9;
}

