/* FUN_2c6259f4 @ 0x2c6259f4 */

void FUN_2c6259f4(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar7 = (uint)*(ushort *)(param_1 + 0x1c);
  iVar10 = uVar7 * *(ushort *)(param_1 + 0x64a) + (uint)*(ushort *)(param_1 + 0x648);
  uVar3 = (uint)*(ushort *)(param_1 + 0x64e);
  if (uVar3 != 0) {
    iVar9 = 0;
    uVar8 = (uint)*(ushort *)(param_1 + 0x64c);
    do {
      if (uVar8 != 0) {
        puVar2 = (undefined1 *)(param_2 + iVar10 * 4);
        iVar11 = 0;
        do {
          iVar4 = *(int *)(param_1 + 0x658) + iVar11;
          iVar5 = *(int *)(param_1 + 0x30);
          iVar11 = iVar11 + 1;
          uVar3 = (uint)*(byte *)(uVar7 * ((uint)*(ushort *)(param_1 + 0x64a) + iVar9) + iVar4 +
                                 (uint)*(ushort *)(param_1 + 0x648));
          iVar4 = uVar3 * 3;
          iVar6 = iVar5 + iVar4 + 4;
          if ((*(int *)(param_1 + 0x2c) == 0) || (*(byte *)(param_1 + 0x26) != uVar3)) {
            *puVar2 = *(undefined1 *)(iVar6 + 2);
            puVar2[1] = *(undefined1 *)(iVar6 + 1);
            uVar1 = *(undefined1 *)(iVar5 + iVar4 + 4);
            puVar2[3] = 0xff;
            puVar2[2] = uVar1;
            uVar8 = (uint)*(ushort *)(param_1 + 0x64c);
            uVar7 = (uint)*(ushort *)(param_1 + 0x1c);
          }
          puVar2 = puVar2 + 4;
        } while (iVar11 < (int)uVar8);
        uVar3 = (uint)*(ushort *)(param_1 + 0x64e);
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + uVar7;
    } while (iVar9 < (int)uVar3);
  }
  return;
}

