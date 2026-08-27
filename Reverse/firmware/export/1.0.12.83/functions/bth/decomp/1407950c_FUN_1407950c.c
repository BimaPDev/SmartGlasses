/* FUN_1407950c @ 0x1407950c */

undefined4 FUN_1407950c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  
  iVar2 = FUN_14074b88(param_1 + 8);
  if ((iVar2 != 0) || (iVar2 = FUN_14074b48(param_1 + 8), iVar2 == 0)) {
    return 1;
  }
  if (*(char *)(iVar2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14079700,DAT_140796fc,iVar2);
  }
  uVar3 = FUN_1408e4e0(*(undefined4 *)(param_1 + 0x1c));
  if ((int)uVar3 < 5) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    FUN_14074b0c(iVar2);
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14079704,DAT_140796fc,1);
  }
  bVar8 = *(byte *)(iVar2 + 8);
  uVar12 = bVar8 & 0xc;
  if ((bVar8 & 0xc) == 0) {
    uVar9 = *(int *)(iVar2 + 0x14) + 3;
    if (uVar3 < uVar9) {
      iVar6 = (*(int *)(iVar2 + 0x14) + 4) - uVar3;
      iVar10 = iVar6 / (int)(uVar3 - 1);
      iVar5 = (uVar3 - 1) * iVar10;
      iVar7 = iVar6 - iVar5;
      if (iVar6 != iVar5 && -1 < iVar7) {
        iVar10 = iVar10 + 2;
      }
      bVar8 = (byte)iVar10;
      if (iVar7 < 1) {
        bVar8 = bVar8 + 1;
      }
      pbVar4 = (byte *)FUN_140759b8(uVar3 & 0xffff);
      if (pbVar4 == (byte *)0x0) {
LAB_14079686:
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_14079710,DAT_14079708,uVar3);
      }
      FUN_140e5658(pbVar4,0,uVar3);
      iVar5 = 4;
      *(byte *)(iVar2 + 8) = *(byte *)(iVar2 + 8) & 0xf3 | 4;
      pbVar4[1] = bVar8;
      *pbVar4 = *(byte *)(iVar2 + 8);
      *(undefined2 *)(pbVar4 + 2) = *(undefined2 *)(iVar2 + 9);
    }
    else {
      pbVar4 = (byte *)FUN_140759b8(uVar9 & 0xffff);
      uVar3 = uVar9;
      if (pbVar4 == (byte *)0x0) goto LAB_14079686;
      FUN_140e5658(pbVar4,uVar12,uVar9);
      *(byte *)(iVar2 + 8) = *(byte *)(iVar2 + 8) & 0xf3;
      uVar1 = *(undefined2 *)(iVar2 + 8);
      iVar5 = 3;
      pbVar4[2] = *(byte *)(iVar2 + 10);
      *(undefined2 *)pbVar4 = uVar1;
    }
  }
  else {
    if ((uVar12 != 4) && (uVar12 != 8)) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_1407970c,DAT_14079708,(bVar8 & 0xf) >> 2);
    }
    uVar12 = (*(int *)(iVar2 + 0x14) + 1) - *(int *)(iVar2 + 0x18);
    if (uVar3 < uVar12) {
      cVar11 = '\x02';
    }
    else {
      cVar11 = '\x03';
      uVar3 = uVar12;
    }
    pbVar4 = (byte *)FUN_140759b8(uVar3 & 0xffff);
    if (pbVar4 == (byte *)0x0) goto LAB_14079686;
    FUN_140e5658(pbVar4,0,uVar3);
    bVar8 = *(byte *)(iVar2 + 8) & 0xf3 | cVar11 << 2;
    *(byte *)(iVar2 + 8) = bVar8;
    iVar5 = 1;
    *pbVar4 = bVar8;
  }
  iVar6 = *(int *)(iVar2 + 0x18);
  if (*(int *)(iVar2 + 0x14) == iVar6) {
    iVar7 = uVar3 - iVar5;
  }
  else {
    iVar7 = uVar3 - iVar5;
    FUN_140e5278(pbVar4 + iVar5,*(int *)(iVar2 + 0x10) + iVar6,iVar7);
    iVar6 = *(int *)(iVar2 + 0x18);
  }
  *(int *)(iVar2 + 0x18) = iVar7 + iVar6;
  iVar5 = FUN_1408e628(*(undefined4 *)(param_1 + 0x1c),pbVar4,uVar3,iVar2);
  if (iVar5 == 0) {
    FUN_14075b28(pbVar4);
    *(char *)(iVar2 + 0xd) = *(char *)(iVar2 + 0xd) + '\x01';
    *(undefined1 *)(param_1 + 0x20) = 1;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x44,DAT_14079714,DAT_14079708,iVar5,*(undefined4 *)(param_1 + 0x1c),uVar3);
}

