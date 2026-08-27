/* FUN_140755e4 @ 0x140755e4 */

void FUN_140755e4(void)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_lr;
  int iVar12;
  
  uVar10 = DAT_14075618;
  pbVar3 = DAT_14075610;
  bVar1 = *DAT_14075610;
  *(undefined4 *)(DAT_14075614 + (uint)bVar1 * 4) = unaff_lr;
  uVar11 = bVar1 + 1;
  lVar2 = (ulonglong)uVar10 * (ulonglong)uVar11;
  *pbVar3 = (char)uVar11 + (char)(uint)((ulonglong)lVar2 >> 0x24) * -0x14;
  piVar4 = DAT_140a20bc;
  if (*DAT_140a20bc != 0) {
    uVar5 = FUN_140e5998((int)lVar2);
    uVar6 = FUN_140e5788(*piVar4);
    iVar7 = FUN_140e5848();
    iVar8 = FUN_140e5148(*piVar4,8000);
    iVar9 = FUN_140e5848();
    uVar10 = FUN_140e5548(iVar9 - iVar7);
    if ((10 < uVar10) || (iVar8 != 0)) {
      iVar12 = iVar8;
      FUN_1402a6e8(4,0x80,DAT_140a20c8,DAT_140a20c4,DAT_140a20c0,uVar10,iVar8);
      iVar9 = FUN_140e5498(uVar5);
      iVar7 = DAT_140a20cc;
      if (iVar9 == 0) {
        iVar9 = DAT_140a20cc;
      }
      FUN_1402a6e8(4,0x82,DAT_140a20c8,DAT_140a20c4,DAT_140a20d0,iVar9,iVar12);
      iVar9 = FUN_140e5498(uVar6);
      if (iVar9 == 0) {
        iVar9 = iVar7;
      }
      FUN_1402a6e8(4,0x84,DAT_140a20c8,DAT_140a20c4,DAT_140a20d4,iVar9,iVar12);
      if (iVar8 != 0) {
        iVar9 = FUN_140e5498(uVar5);
        if (iVar9 == 0) {
          iVar9 = iVar7;
        }
        FUN_1402a6e8(4,0x8a,DAT_140a20c8,DAT_140a20c4,DAT_140a20d8,iVar9);
        iVar9 = FUN_140e5498(uVar6);
        if (iVar9 != 0) {
          iVar7 = iVar9;
        }
        FUN_1402a6e8(4,0x8c,DAT_140a20c8,DAT_140a20c4,DAT_140a20dc,iVar7);
        FUN_1407557c();
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140a20e0,iVar8);
      }
    }
  }
  return;
}

