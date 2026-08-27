/* FUN_1400db68 @ 0x1400db68 */

undefined4 FUN_1400db68(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  param_1[0xb] = 0xf;
  iVar2 = DAT_1400dc88;
  bVar1 = *(byte *)(DAT_1400dc88 + (*param_2 ^ 0xf));
  param_1[0xb] = bVar1;
  if ((param_1[7] & 3) == 0) {
    param_1[1] = *param_2 >> 6;
    uVar4 = (*param_2 & 0x3f) >> 4;
    if (uVar4 == 2) {
      param_1[4] = 0xc;
    }
    else if (uVar4 == 3) {
      param_1[4] = 0x10;
    }
    else {
      if (uVar4 == 1) {
        bVar3 = 8;
      }
      else {
        bVar3 = 4;
      }
      param_1[4] = bVar3;
    }
    uVar4 = (*param_2 & 0xf) >> 2;
    if (uVar4 - 1 < 3) {
      bVar3 = 2;
    }
    else {
      bVar3 = 1;
    }
    param_1[2] = (byte)(((uint)*param_2 << 0x1c) >> 0x1e);
    param_1[6] = bVar3;
    param_1[3] = (byte)(((uint)*param_2 << 0x1e) >> 0x1f);
    if ((*param_2 & 1) == 0) {
      iVar8 = 4;
    }
    else {
      iVar8 = 8;
    }
    param_1[5] = (byte)iVar8;
    bVar3 = *(byte *)(iVar2 + (uint)(bVar1 ^ param_2[1]));
    param_1[0xb] = bVar3;
    *param_1 = param_2[1];
    bVar1 = param_2[2];
    param_1[8] = 0x18;
    param_1[9] = 0;
    param_1[10] = bVar1;
    if (uVar4 == 3) {
      uVar9 = 0x19;
      uVar4 = 0;
      do {
        uVar5 = uVar9 - 0x18 & 0xff;
        param_1[uVar4 + 0xc] = (byte)((int)(uint)param_2[3] >> (7 - uVar4 & 0xff)) & 1;
        uVar7 = uVar9 + 1;
        *(short *)(param_1 + 8) = (short)uVar9;
        uVar9 = uVar7 & 0xffff;
        uVar4 = uVar5;
      } while ((int)uVar5 < iVar8 + -1);
      param_1[uVar5 + 0xc] = 0;
      *(short *)(param_1 + 8) = (short)uVar7;
      if (uVar9 == 0x20) {
        param_1[0xb] = *(byte *)(iVar2 + (uint)(bVar3 ^ param_2[3]));
        return 4;
      }
      if (uVar9 != 0x1c) {
        return 0;
      }
    }
  }
  else {
    if ((param_1[7] & 1) == 0) {
      if (*param_2 != 0) {
        return 0;
      }
      uVar6 = 0x312;
    }
    else {
      if (*param_2 != 0) {
        return 0;
      }
      uVar6 = 0x1a;
    }
    *(undefined4 *)param_1 = uVar6;
    param_1[4] = 0xf;
    param_1[5] = 8;
    param_1[6] = 1;
    param_1[0xb] = *(byte *)(iVar2 + (uint)(bVar1 ^ *param_2));
    if (param_2[1] != 0) {
      return 0;
    }
    bVar1 = param_2[2];
    param_1[8] = 0x18;
    param_1[9] = 0;
    param_1[10] = bVar1;
  }
  return 3;
}

