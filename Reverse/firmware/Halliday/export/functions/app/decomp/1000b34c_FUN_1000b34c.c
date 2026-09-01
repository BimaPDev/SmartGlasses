/* FUN_1000b34c @ 0x1000b34c */

void FUN_1000b34c(undefined4 *param_1,short param_2)

{
  undefined2 uVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  bool bVar10;
  undefined4 *puVar11;
  
  piVar2 = DAT_1000b3cc;
  iVar5 = *DAT_1000b3c8;
  uVar3 = 0;
  puVar11 = param_1;
  do {
    uVar9 = uVar3;
    iVar6 = *piVar2;
    if (*(ushort *)(iVar6 + 0x16) <= uVar9) goto LAB_1000b3b2;
    iVar8 = (uint)uVar9 * 0x1c;
    iVar6 = FUN_10132c82(*(int *)(iVar6 + 0x1c) + iVar8 + 4,*param_1,*(ushort *)(iVar6 + 0x16),iVar6
                         ,puVar11);
    uVar3 = uVar9 + 1;
  } while (iVar6 != 0);
  iVar7 = *piVar2;
  iVar6 = *(int *)(iVar7 + 0x1c);
  uVar1 = *(undefined2 *)(iVar7 + 2);
  *(short *)(iVar6 + iVar8) = param_2;
  *(undefined2 *)(iVar6 + iVar8 + 2) = uVar1;
  uVar4 = (uint)*(ushort *)(iVar7 + 0x18);
  bVar10 = uVar4 != 0xffff;
  if (bVar10) {
    uVar4 = uVar4 * 0x1c + iVar6;
    param_2 = param_2 + -2;
  }
  if (bVar10) {
    *(short *)(uVar4 + 2) = param_2;
  }
  *(ushort *)(iVar7 + 0x18) = uVar9;
LAB_1000b3b2:
  if (*DAT_1000b3c8 != iVar5) {
    FUN_1013cdc0();
  }
  return;
}

