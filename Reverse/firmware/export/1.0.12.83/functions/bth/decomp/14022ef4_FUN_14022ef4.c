/* FUN_14022ef4 @ 0x14022ef4 */

undefined4 FUN_14022ef4(uint *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  undefined1 uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  byte *pbVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  undefined1 *local_70;
  
  bVar29 = *(char *)(param_3 + 0xb) == '\x02';
  if (bVar29) {
    iVar6 = 4;
  }
  else {
    iVar6 = 6;
  }
  *(undefined1 *)(param_2 + 0x262) = 0;
  if (bVar29) {
    iVar19 = 8;
    iVar13 = 1;
    iVar7 = 3;
  }
  else {
    iVar19 = 1;
    iVar13 = 2;
    iVar7 = 5;
  }
  uVar20 = *(uint *)(DAT_140231f4 + iVar13 * 4);
  iVar27 = 0;
  local_70 = (undefined1 *)(param_2 + 600);
  do {
    while( true ) {
      uVar21 = param_1[1];
      uVar14 = iVar13 - uVar21;
      if ((int)uVar14 < 1) {
        uVar14 = 0;
        uVar8 = *param_1;
      }
      else {
        if (uVar14 == 0x20) {
          uVar14 = 0;
        }
        else {
          uVar14 = *param_1 << (uVar14 & 0xff);
        }
        uVar8 = FUN_1401c128(param_1 + 2);
        *param_1 = uVar8;
        uVar21 = param_1[1] + 0x20;
      }
      param_1[1] = uVar21 - iVar13;
      uVar14 = (uVar8 >> (uVar21 - iVar13 & 0xff) | uVar14) & uVar20;
      uVar21 = uVar14 & 0xff;
      *local_70 = (char)uVar14;
      if (uVar21 != 0) break;
LAB_14022f84:
      iVar27 = iVar27 + 0x4b;
      local_70 = local_70 + 1;
      if (iVar19 * 0x4b == iVar27) goto LAB_1402322e;
    }
    uVar8 = param_1[1];
    uVar14 = 1 - uVar8;
    if ((int)uVar14 < 1) {
      uVar23 = 0;
      uVar14 = *param_1;
    }
    else {
      if (uVar14 == 0x20) {
        uVar23 = 0;
      }
      else {
        uVar23 = *param_1 << (uVar14 & 0xff);
      }
      uVar14 = FUN_1401c128(param_1 + 2);
      *param_1 = uVar14;
      uVar8 = param_1[1] + 0x20;
    }
    iVar28 = DAT_140231f4;
    uVar8 = uVar8 - 1;
    uVar15 = *(uint *)(DAT_140231f4 + 4);
    uVar14 = (uVar23 | uVar14 >> (uVar8 & 0xff)) & uVar15;
    param_1[1] = uVar8;
    if (uVar21 == 0) goto LAB_14022f84;
    cVar4 = (char)uVar14 + '\x03';
    iVar24 = param_2 + iVar27;
    iVar9 = uVar21 * 0x19 + iVar24;
    uVar21 = *(uint *)(iVar28 + iVar6 * 4);
    uVar23 = *(uint *)(iVar28 + iVar7 * 4);
    iVar28 = iVar24;
    bVar1 = *(byte *)(param_3 + 0xf);
    while( true ) {
      uVar16 = iVar6 - uVar8;
      if ((int)uVar16 < 1) {
        uVar16 = 0;
        uVar10 = *param_1;
      }
      else {
        if (uVar16 == 0x20) {
          uVar16 = 0;
        }
        else {
          uVar16 = *param_1 << (uVar16 & 0xff);
        }
        uVar10 = FUN_1401c128(param_1 + 2);
        *param_1 = uVar10;
        uVar8 = param_1[1] + 0x20;
      }
      param_1[1] = uVar8 - iVar6;
      uVar8 = (uVar16 | uVar10 >> (uVar8 - iVar6 & 0xff)) & uVar21;
      if ((uint)bVar1 < (uVar8 & 0xff)) {
        bVar17 = 0;
      }
      else {
        bVar17 = bVar1 - (char)uVar8;
      }
      *(byte *)(iVar24 + 0x15) = bVar1;
      *(byte *)(iVar24 + 0x14) = bVar17;
      uVar16 = param_1[1];
      uVar8 = iVar7 - uVar16;
      if ((int)uVar8 < 1) {
        uVar10 = 0;
        uVar8 = *param_1;
      }
      else {
        if (uVar8 == 0x20) {
          uVar10 = 0;
        }
        else {
          uVar10 = *param_1 << (uVar8 & 0xff);
        }
        uVar8 = FUN_1401c128(param_1 + 2);
        *param_1 = uVar8;
        uVar16 = param_1[1] + 0x20;
      }
      param_1[1] = uVar16 - iVar7;
      uVar8 = (uVar8 >> (uVar16 - iVar7 & 0xff) | uVar10) & uVar23;
      uVar16 = uVar8 & 0xff;
      *(char *)(iVar24 + 0x18) = (char)uVar8;
      if (0x14 < uVar16) {
        return 0x400c;
      }
      if (uVar16 != 0) {
        uVar10 = param_1[1];
        uVar8 = 1 - uVar10;
        if ((int)uVar8 < 1) {
          uVar25 = 0;
          uVar8 = *param_1;
        }
        else {
          if (uVar8 == 0x20) {
            uVar25 = 0;
          }
          else {
            uVar25 = *param_1 << (uVar8 & 0xff);
          }
          uVar8 = FUN_1401c128(param_1 + 2);
          *param_1 = uVar8;
          uVar10 = param_1[1] + 0x20;
        }
        param_1[1] = uVar10 - 1;
        if (((uVar25 | uVar8 >> (uVar10 - 1 & 0xff)) & uVar15) == 0) {
          uVar18 = 1;
        }
        else {
          uVar18 = 0xff;
        }
        *(undefined1 *)(iVar24 + 0x16) = uVar18;
        uVar10 = param_1[1];
        uVar8 = 1 - uVar10;
        if ((int)uVar8 < 1) {
          uVar25 = 0;
          uVar8 = *param_1;
        }
        else {
          if (uVar8 == 0x20) {
            uVar25 = 0;
          }
          else {
            uVar25 = *param_1 << (uVar8 & 0xff);
          }
          uVar8 = FUN_1401c128(param_1 + 2);
          *param_1 = uVar8;
          uVar10 = param_1[1] + 0x20;
        }
        param_1[1] = uVar10 - 1;
        uVar8 = (uVar8 >> (uVar10 - 1 & 0xff) | uVar25) & uVar15 & 0xff;
        iVar22 = ((uVar14 & 0xff) + 1) - uVar8;
        bVar1 = *(byte *)(DAT_140231f8 + iVar22);
        bVar2 = *(byte *)(DAT_140231fc + iVar22);
        pbVar26 = (byte *)(iVar28 + -1);
        *(char *)(iVar24 + 0x17) = cVar4;
        cVar3 = cVar4;
        while( true ) {
          uVar25 = param_1[1];
          iVar22 = (int)cVar3 - uVar8;
          uVar10 = iVar22 - uVar25;
          if ((int)uVar10 < 1) {
            uVar10 = 0;
            uVar11 = *param_1;
          }
          else {
            if (uVar10 == 0x20) {
              uVar10 = 0;
            }
            else {
              uVar10 = *param_1 << (uVar10 & 0xff);
            }
            uVar11 = FUN_1401c128(param_1 + 2);
            *param_1 = uVar11;
            uVar25 = param_1[1] + 0x20;
          }
          uVar10 = (uVar11 >> (uVar25 - iVar22 & 0xff) | uVar10) &
                   *(uint *)(DAT_140231f4 + iVar22 * 4);
          bVar12 = (byte)uVar10;
          param_1[1] = uVar25 - iVar22;
          if ((bVar1 & uVar10) != 0) {
            bVar12 = bVar12 | bVar2;
          }
          pbVar26 = pbVar26 + 1;
          *pbVar26 = bVar12;
          if (pbVar26 == (byte *)(iVar28 + (uVar16 - 1 & 0xff))) break;
          cVar3 = *(char *)(iVar24 + 0x17);
        }
        *(undefined1 *)(param_2 + 0x262) = 4;
      }
      if (iVar9 == iVar24 + 0x19) break;
      iVar28 = iVar28 + 0x19;
      iVar24 = iVar24 + 0x19;
      uVar8 = param_1[1];
      bVar1 = bVar17;
    }
    iVar27 = iVar27 + 0x4b;
    local_70 = local_70 + 1;
  } while (iVar19 * 0x4b != iVar27);
LAB_1402322e:
  uVar5 = DAT_1402326c;
  *(undefined1 *)(param_2 + 0x261) = 1;
  FUN_140249e4(param_1[10],1,uVar5);
  return 0;
}

