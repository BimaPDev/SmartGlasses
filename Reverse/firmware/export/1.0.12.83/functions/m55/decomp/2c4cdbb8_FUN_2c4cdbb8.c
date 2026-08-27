/* FUN_2c4cdbb8 @ 0x2c4cdbb8 */

undefined4 FUN_2c4cdbb8(uint *param_1,undefined1 *param_2,int param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  param_2[9] = 0;
  iVar9 = DAT_2c4cdde8;
  if ((param_4 & 0x10) == 0) {
    uVar6 = param_1[1];
    if ((param_4 & 0x4300) == 0) {
      if (0 < (int)(1 - uVar6)) {
        uVar6 = FUN_2c4d74d4(param_1 + 2);
        *param_1 = uVar6;
        uVar6 = param_1[1] + 0x20;
      }
      uVar6 = uVar6 - 1;
      param_1[1] = uVar6;
    }
    uVar11 = 2 - uVar6;
    if ((int)uVar11 < 1) {
      uVar11 = *param_1;
      bVar8 = 0;
    }
    else {
      if (uVar11 == 0x20) {
        bVar8 = 0;
      }
      else {
        bVar8 = (byte)(*param_1 << (uVar11 & 0xff));
      }
      uVar11 = FUN_2c4d74d4(param_1 + 2);
      *param_1 = uVar11;
      uVar6 = param_1[1] + 0x20;
    }
    param_1[1] = uVar6 - 2;
    iVar9 = DAT_2c4cdde8;
    param_2[0xb] = ((byte)(uVar11 >> (uVar6 - 2 & 0xff)) | bVar8) &
                   (byte)*(undefined4 *)(DAT_2c4cdde8 + 8);
    uVar2 = param_1[1];
    uVar11 = 1 - uVar2;
    uVar6 = 0;
    if ((int)uVar11 < 1) {
      uVar11 = *param_1;
    }
    else {
      if (uVar11 != 0x20) {
        uVar6 = *param_1 << (uVar11 & 0xff);
      }
      uVar11 = FUN_2c4d74d4(param_1 + 2);
      *param_1 = uVar11;
      uVar2 = param_1[1] + 0x20;
    }
    uVar3 = *(uint *)(iVar9 + 4);
    param_1[1] = uVar2 - 1;
    uVar3 = (uVar11 >> (uVar2 - 1 & 0xff) | uVar6) & uVar3;
    param_2[10] = (char)uVar3;
    if (((int)(param_4 << 0x1a) < 0) && ((uVar3 & 0xff) != 0)) {
      param_2[10] = 2;
      cVar1 = param_2[0xb];
    }
    else {
      cVar1 = param_2[0xb];
    }
    if ((param_4 & 0x30) == 0) {
      if (cVar1 == '\x02') {
        iVar12 = 4;
        iVar10 = 4;
        uVar5 = *(undefined1 *)(param_3 + 9);
        goto LAB_2c4cdbe0;
      }
    }
    else if (cVar1 != '\0') {
      param_2[0xb] = 0;
      return 0x4002;
    }
  }
  else {
    param_2[0xb] = 0;
    param_2[10] = 0;
  }
  iVar12 = 6;
  uVar5 = *(undefined1 *)(param_3 + 8);
  iVar10 = 6;
LAB_2c4cdbe0:
  param_2[0xf] = uVar5;
  uVar6 = param_1[1];
  uVar11 = iVar10 - uVar6;
  if ((int)uVar11 < 1) {
    uVar2 = *param_1;
    uVar11 = 0;
  }
  else {
    if (uVar11 == 0x20) {
      uVar11 = 0;
    }
    else {
      uVar11 = *param_1 << (uVar11 & 0xff);
    }
    uVar2 = FUN_2c4d74d4(param_1 + 2);
    *param_1 = uVar2;
    uVar6 = param_1[1] + 0x20;
  }
  uVar3 = *(uint *)(iVar9 + iVar12 * 4);
  param_1[1] = uVar6 - iVar12;
  uVar3 = (uVar2 >> (uVar6 - iVar12 & 0xff) | uVar11) & uVar3;
  param_2[0xc] = (char)uVar3;
  if ((uint)(byte)param_2[0xf] < (uVar3 & 0xff)) {
    return 0x4002;
  }
  if (param_2[0xb] == '\x02') {
    uVar11 = param_1[1];
    uVar6 = 7 - uVar11;
    if ((int)uVar6 < 1) {
      uVar6 = *param_1;
      uVar2 = 0;
    }
    else {
      if (uVar6 == 0x20) {
        uVar2 = 0;
      }
      else {
        uVar2 = *param_1 << (uVar6 & 0xff);
      }
      uVar6 = FUN_2c4d74d4(param_1 + 2);
      *param_1 = uVar6;
      uVar11 = param_1[1] + 0x20;
    }
    uVar3 = *(uint *)(iVar9 + 0x1c);
    uVar4 = 0;
    param_1[1] = uVar11 - 7;
    puVar7 = param_2 + -1;
    uVar3 = (uVar6 >> (uVar11 - 7 & 0xff) | uVar2) & uVar3;
    param_2[0xe] = (char)uVar3;
    do {
      while( true ) {
        iVar9 = 5 - (int)puVar7;
        uVar6 = uVar4 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = 1;
        if ((1 << ((uint)(param_2 + iVar9) & 0xff) & uVar3) != 0) break;
        uVar4 = uVar6 & 0xff;
        param_2[8] = (char)uVar6;
        if (param_2 + 6 == puVar7) goto LAB_2c4cddd0;
      }
      param_2[uVar4] = param_2[uVar4] + '\x01';
    } while (param_2 + 6 != puVar7);
LAB_2c4cddd0:
    param_2[7] = 1;
    param_2[8] = (char)uVar4 + '\x01';
  }
  else {
    if ((param_4 & 0x4398) == 0) {
      uVar2 = param_1[1];
      uVar11 = 1 - uVar2;
      uVar6 = 0;
      if ((int)uVar11 < 1) {
        uVar11 = *param_1;
      }
      else {
        if (uVar11 != 0x20) {
          uVar6 = *param_1 << (uVar11 & 0xff);
        }
        uVar11 = FUN_2c4d74d4(param_1 + 2);
        *param_1 = uVar11;
        uVar2 = param_1[1] + 0x20;
      }
      uVar3 = *(uint *)(iVar9 + 4);
      param_1[1] = uVar2 - 1;
      if (((uVar11 >> (uVar2 - 1 & 0xff) | uVar6) & uVar3 & 0xff) != 0) {
        return 0x4007;
      }
    }
    param_2[8] = 1;
    *param_2 = 1;
  }
  param_2[9] = 1;
  return 0;
}

