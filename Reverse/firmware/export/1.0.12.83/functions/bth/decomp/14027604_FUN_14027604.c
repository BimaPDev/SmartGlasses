/* FUN_14027604 @ 0x14027604 */

undefined4 FUN_14027604(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  bool bVar10;
  
  if ((int)((uint)(byte)param_1[1] << 0x1d) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14027808);
  }
  uVar4 = FUN_140e5178();
  bVar10 = uVar4 < *param_1 << 1;
  if (bVar10) {
    uVar8 = 2;
  }
  else {
    uVar8 = 1;
  }
  *(undefined1 *)(param_2 + 4) = uVar8;
  uVar5 = *param_1;
  if (bVar10) {
    uVar4 = uVar4 << 1;
  }
  if (uVar4 >> 1 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140277f8,uVar5,uVar4 >> 1,uVar8,param_4);
  }
  lVar2 = (ulonglong)DAT_140277e4 * (ulonglong)(uVar4 >> 9);
  uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
  if (uVar5 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1402780c,uVar5,uVar7,(int)lVar2,param_4);
  }
  uVar7 = (uint)*(byte *)((int)param_1 + 7);
  uVar9 = uVar7 - 4;
  if (0x1c < uVar9) {
LAB_140277aa:
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140277f0,uVar7,uVar7,uVar9,param_4);
  }
  uVar9 = (uint)(byte)param_1[2];
  if (0x1c < uVar9 - 4) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140277fc,uVar9,uVar7,uVar9,param_4);
  }
  if ((param_1[1] & 0x40) == 0) {
    uVar7 = (uint)*(byte *)((int)param_1 + 9);
    if (0x20 < uVar7) goto LAB_14027778;
  }
  else {
    if (uVar7 == 0x20) goto LAB_140277aa;
    uVar7 = (uint)*(byte *)((int)param_1 + 9);
    if ((uVar9 == 0x20) || (0x1f < uVar7)) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140277ec,uVar9,uVar7,uVar9,param_4);
    }
  }
  if ((uVar7 == 0) || (uVar9 < uVar7)) {
    bVar1 = *(byte *)((int)param_1 + 6);
    if (3 < bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140277f4,bVar1,uVar7,bVar1,param_4);
    }
    uVar5 = ((uVar5 - 1) + uVar4) / uVar5;
    uVar4 = uVar5 + 0xff;
    uVar7 = (uVar4 & 0xffffff) >> 8;
    if (uVar7 < 2) {
      uVar7 = 2;
    }
    else {
      if ((int)((uVar4 >> 8) << 0x1f) < 0) {
        uVar7 = uVar7 + 1 & 0xffff;
      }
      if (0xfd < uVar7) {
        uVar7 = 0xfe;
      }
    }
    uVar9 = ((uVar5 - 1) + uVar7) / uVar7 & 0xffff;
    uVar4 = 0;
    uVar5 = uVar7;
    if (uVar9 != 0) {
      uVar4 = uVar9 - 1 & 0xffff;
      if (0xfe < uVar4) {
        uVar4 = 0xff;
      }
      uVar5 = (uVar4 + 1 & 0xffff) * uVar7;
    }
    uVar5 = uVar5 - 1;
    *(char *)((int)param_2 + 0xe) = (char)uVar5;
    if (uVar5 != (uVar5 & 0xff)) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14027800,uVar5,uVar5,uVar4,param_4);
    }
    if (uVar5 < *(byte *)((int)param_1 + 10)) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14027804);
    }
    *(byte *)((int)param_2 + 0xf) = *(byte *)((int)param_1 + 10);
    uVar4 = ((byte)param_1[1] & 1) << 7 | ((byte)param_1[1] & 2) << 5 |
            (*(byte *)((int)param_1 + 7) - 1) * 0x10000 & 0x1f0000 | uVar4 << 8;
    *param_2 = uVar4;
    bVar1 = (byte)param_1[1];
    uVar6 = (*(byte *)((int)param_1 + 6) & 0xf) << 7 | (bVar1 & 0x20) << 6 | bVar1 & 4;
    if ((bVar1 & 0x80) == 0) {
      uVar6 = uVar6 | 2;
    }
    *(ushort *)(param_2 + 2) = uVar6;
    *(char *)((int)param_2 + 10) = (char)uVar7;
    *(byte *)((int)param_2 + 0xb) = (byte)(((uint)(byte)param_1[1] << 0x1b) >> 0x1e);
    cVar3 = ((byte)param_1[1] & 0x40) << 1;
    *(char *)(param_2 + 3) = cVar3;
    if (*(byte *)((int)param_1 + 9) != 0) {
      param_2[1] = uVar4 & 0xffe0ffff | (*(byte *)((int)param_1 + 9) - 1) * 0x10000 & 0x1f0000;
      *(byte *)((int)param_2 + 0xd) = (char)param_1[2] - 1U & 0x1f | 0x60;
      return 0;
    }
    param_2[1] = uVar4 & 0xffe0ffff | ((byte)param_1[2] - 1) * 0x10000 & 0x1f0000;
    *(char *)((int)param_2 + 0xd) = cVar3;
    return 0;
  }
LAB_14027778:
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140277e8,uVar7,uVar7,uVar9,param_4);
}

