/* FUN_2c4ce4e0 @ 0x2c4ce4e0 */

undefined4 FUN_2c4ce4e0(uint *param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  byte bVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  byte *pbVar29;
  int iVar30;
  int iVar31;
  bool bVar32;
  undefined1 *local_70;
  
  cVar1 = *(char *)(param_3 + 0xb);
  *(undefined1 *)(param_2 + 0x262) = 0;
  bVar32 = cVar1 == '\x02';
  iVar30 = 0;
  if (bVar32) {
    iVar18 = 8;
    iVar13 = 4;
    iVar12 = iVar13;
  }
  else {
    iVar18 = 1;
    iVar12 = 6;
    iVar13 = 5;
  }
  if (bVar32) {
    iVar13 = 3;
    iVar19 = 1;
  }
  else {
    iVar19 = 2;
  }
  uVar20 = *(uint *)(DAT_2c4ce83c + iVar19 * 4);
  local_70 = (undefined1 *)(param_2 + 600);
  do {
    while( true ) {
      uVar21 = param_1[1];
      uVar14 = iVar19 - uVar21;
      if ((int)uVar14 < 1) {
        uVar7 = *param_1;
        uVar14 = 0;
      }
      else {
        if (uVar14 == 0x20) {
          uVar14 = 0;
        }
        else {
          uVar14 = *param_1 << (uVar14 & 0xff);
        }
        uVar7 = FUN_2c4d74d4(param_1 + 2);
        *param_1 = uVar7;
        uVar21 = param_1[1] + 0x20;
      }
      param_1[1] = uVar21 - iVar19;
      uVar14 = (uVar7 >> (uVar21 - iVar19 & 0xff) | uVar14) & uVar20;
      uVar21 = uVar14 & 0xff;
      *local_70 = (char)uVar14;
      if (uVar21 != 0) break;
LAB_2c4ce56e:
      iVar30 = iVar30 + 0x4b;
      local_70 = local_70 + 1;
      if (iVar18 * 0x4b == iVar30) goto LAB_2c4ce810;
    }
    uVar7 = param_1[1];
    uVar14 = 1 - uVar7;
    if ((int)uVar14 < 1) {
      uVar14 = *param_1;
      uVar24 = 0;
    }
    else {
      if (uVar14 == 0x20) {
        uVar24 = 0;
      }
      else {
        uVar24 = *param_1 << (uVar14 & 0xff);
      }
      uVar14 = FUN_2c4d74d4(param_1 + 2);
      *param_1 = uVar14;
      uVar7 = param_1[1] + 0x20;
    }
    iVar31 = DAT_2c4ce83c;
    uVar7 = uVar7 - 1;
    uVar15 = *(uint *)(DAT_2c4ce83c + 4);
    param_1[1] = uVar7;
    uVar14 = (uVar24 | uVar14 >> (uVar7 & 0xff)) & uVar15;
    bVar23 = *(byte *)(param_3 + 0xf);
    if (uVar21 == 0) goto LAB_2c4ce56e;
    cVar1 = (char)uVar14 + '\x03';
    iVar25 = param_2 + iVar30;
    iVar8 = uVar21 * 0x19 + iVar25;
    uVar21 = *(uint *)(iVar31 + iVar12 * 4);
    uVar24 = *(uint *)(iVar31 + iVar13 * 4);
    iVar31 = iVar25;
    while( true ) {
      uVar16 = iVar12 - uVar7;
      if ((int)uVar16 < 1) {
        uVar9 = *param_1;
        uVar16 = 0;
      }
      else {
        if (uVar16 == 0x20) {
          uVar16 = 0;
        }
        else {
          uVar16 = *param_1 << (uVar16 & 0xff);
        }
        uVar9 = FUN_2c4d74d4(param_1 + 2);
        *param_1 = uVar9;
        uVar7 = param_1[1] + 0x20;
      }
      param_1[1] = uVar7 - iVar12;
      *(byte *)(iVar25 + 0x15) = bVar23;
      uVar7 = (uVar16 | uVar9 >> (uVar7 - iVar12 & 0xff)) & uVar21;
      if ((uint)bVar23 < (uVar7 & 0xff)) {
        bVar23 = 0;
      }
      else {
        bVar23 = bVar23 - (char)uVar7;
      }
      *(byte *)(iVar25 + 0x14) = bVar23;
      uVar16 = param_1[1];
      uVar7 = iVar13 - uVar16;
      if ((int)uVar7 < 1) {
        uVar7 = *param_1;
        uVar9 = 0;
      }
      else {
        if (uVar7 == 0x20) {
          uVar9 = 0;
        }
        else {
          uVar9 = *param_1 << (uVar7 & 0xff);
        }
        uVar7 = FUN_2c4d74d4(param_1 + 2);
        *param_1 = uVar7;
        uVar16 = param_1[1] + 0x20;
      }
      param_1[1] = uVar16 - iVar13;
      uVar7 = (uVar7 >> (uVar16 - iVar13 & 0xff) | uVar9) & uVar24;
      uVar16 = uVar7 & 0xff;
      *(char *)(iVar25 + 0x18) = (char)uVar7;
      if (0x14 < uVar16) {
        return 0x400c;
      }
      if (uVar16 != 0) {
        uVar9 = param_1[1];
        uVar7 = 1 - uVar9;
        if ((int)uVar7 < 1) {
          uVar7 = *param_1;
          uVar26 = 0;
        }
        else {
          if (uVar7 == 0x20) {
            uVar26 = 0;
          }
          else {
            uVar26 = *param_1 << (uVar7 & 0xff);
          }
          uVar7 = FUN_2c4d74d4(param_1 + 2);
          *param_1 = uVar7;
          uVar9 = param_1[1] + 0x20;
        }
        param_1[1] = uVar9 - 1;
        if (((uVar26 | uVar7 >> (uVar9 - 1 & 0xff)) & uVar15) == 0) {
          uVar17 = 1;
        }
        else {
          uVar17 = 0xff;
        }
        *(undefined1 *)(iVar25 + 0x16) = uVar17;
        uVar9 = param_1[1];
        uVar7 = 1 - uVar9;
        if ((int)uVar7 < 1) {
          uVar7 = *param_1;
          uVar26 = 0;
        }
        else {
          if (uVar7 == 0x20) {
            uVar26 = 0;
          }
          else {
            uVar26 = *param_1 << (uVar7 & 0xff);
          }
          uVar7 = FUN_2c4d74d4(param_1 + 2);
          *param_1 = uVar7;
          uVar9 = param_1[1] + 0x20;
        }
        iVar28 = DAT_2c4ce840;
        pbVar29 = (byte *)(iVar31 + -1);
        param_1[1] = uVar9 - 1;
        iVar5 = DAT_2c4ce844;
        uVar7 = (uVar7 >> (uVar9 - 1 & 0xff) | uVar26) & uVar15 & 0xff;
        *(char *)(iVar25 + 0x17) = cVar1;
        iVar22 = ((uVar14 & 0xff) + 1) - uVar7;
        bVar2 = *(byte *)(iVar28 + iVar22);
        bVar3 = *(byte *)(iVar5 + iVar22);
        cVar4 = cVar1;
        while( true ) {
          iVar28 = (int)cVar4 - uVar7;
          uVar26 = param_1[1];
          uVar9 = iVar28 - uVar26;
          if ((int)uVar9 < 1) {
            uVar10 = *param_1;
            uVar9 = 0;
          }
          else {
            if (uVar9 == 0x20) {
              uVar9 = 0;
            }
            else {
              uVar9 = *param_1 << (uVar9 & 0xff);
            }
            uVar10 = FUN_2c4d74d4(param_1 + 2);
            *param_1 = uVar10;
            uVar26 = param_1[1] + 0x20;
          }
          uVar27 = *(uint *)(DAT_2c4ce83c + iVar28 * 4);
          param_1[1] = uVar26 - iVar28;
          uVar27 = (uVar10 >> (uVar26 - iVar28 & 0xff) | uVar9) & uVar27;
          bVar11 = (byte)uVar27;
          if ((bVar2 & uVar27) != 0) {
            bVar11 = bVar11 | bVar3;
          }
          pbVar29 = pbVar29 + 1;
          *pbVar29 = bVar11;
          if (pbVar29 == (byte *)(iVar31 + (uVar16 - 1 & 0xff))) break;
          cVar4 = *(char *)(iVar25 + 0x17);
        }
        *(undefined1 *)(param_2 + 0x262) = 4;
      }
      if (iVar8 == iVar25 + 0x19) break;
      iVar31 = iVar31 + 0x19;
      iVar25 = iVar25 + 0x19;
      uVar7 = param_1[1];
    }
    iVar30 = iVar30 + 0x4b;
    local_70 = local_70 + 1;
  } while (iVar18 * 0x4b != iVar30);
LAB_2c4ce810:
  uVar6 = DAT_2c4ce848;
  *(undefined1 *)(param_2 + 0x261) = 1;
  FUN_2c4cb8c8(param_1[10],1,uVar6);
  return 0;
}

