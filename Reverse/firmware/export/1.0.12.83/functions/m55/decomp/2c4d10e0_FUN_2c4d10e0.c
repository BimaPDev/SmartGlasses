/* FUN_2c4d10e0 @ 0x2c4d10e0 */

undefined4 FUN_2c4d10e0(uint *param_1,undefined1 *param_2,int param_3,int param_4,short param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  byte bVar9;
  undefined4 uVar10;
  byte *pbVar11;
  
  bVar9 = *(byte *)(param_4 + 0xc);
  *param_2 = 0;
  if (param_1[1] == 0) {
    uVar2 = FUN_2c4d74d4(param_1 + 2);
    *param_1 = uVar2;
    uVar2 = uVar2 >> 0x1f;
    param_1[1] = 0x1f;
  }
  else {
    uVar2 = param_1[1] - 1;
    param_1[1] = uVar2;
    uVar2 = *param_1 >> (uVar2 & 0xff) & 1;
  }
  *param_2 = (char)uVar2;
  if (uVar2 == 0) {
    return 0;
  }
  if (*(char *)(param_4 + 0xb) != '\x02') {
    uVar2 = param_1[1];
    uVar8 = 2 - uVar2;
    if ((int)uVar8 < 1) {
      uVar8 = *param_1;
      bVar7 = 0;
    }
    else {
      if (uVar8 == 0x20) {
        bVar7 = 0;
      }
      else {
        bVar7 = (byte)(*param_1 << (uVar8 & 0xff));
      }
      uVar8 = FUN_2c4d74d4(param_1 + 2);
      *param_1 = uVar8;
      uVar2 = param_1[1] + 0x20;
    }
    param_1[1] = uVar2 - 2;
    iVar1 = DAT_2c4d1298;
    param_2[1] = ((byte)(uVar8 >> (uVar2 - 2 & 0xff)) | bVar7) &
                 (byte)*(undefined4 *)(DAT_2c4d1298 + 8);
    uVar2 = param_1[1];
    uVar8 = 6 - uVar2;
    if ((int)uVar8 < 1) {
      uVar3 = *param_1;
      uVar8 = 0;
    }
    else {
      if (uVar8 == 0x20) {
        uVar8 = 0;
      }
      else {
        uVar8 = *param_1 << (uVar8 & 0xff);
      }
      uVar3 = FUN_2c4d74d4(param_1 + 2);
      *param_1 = uVar3;
      uVar2 = param_1[1] + 0x20;
    }
    uVar4 = *(uint *)(iVar1 + 0x18);
    param_1[1] = uVar2 - 6;
    uVar4 = (uVar3 >> (uVar2 - 6 & 0xff) | uVar8) & uVar4;
    uVar2 = uVar4 & 0xff;
    param_2[2] = (char)uVar4;
    if (uVar2 < bVar9) {
      iVar6 = (int)*(short *)(param_3 + uVar2 * 2);
      pbVar11 = param_2 + 2;
      uVar10 = *(undefined4 *)(iVar1 + 0x10);
      uVar5 = *(undefined4 *)(iVar1 + 0x14);
      do {
        uVar8 = param_1[1];
        uVar2 = 5 - uVar8;
        if ((int)uVar2 < 1) {
          uVar2 = *param_1;
          bVar9 = 0;
        }
        else {
          if (uVar2 == 0x20) {
            bVar9 = 0;
          }
          else {
            bVar9 = (byte)(*param_1 << (uVar2 & 0xff));
          }
          uVar2 = FUN_2c4d74d4(param_1 + 2);
          *param_1 = uVar2;
          uVar8 = param_1[1] + 0x20;
        }
        param_1[1] = uVar8 - 5;
        pbVar11[1] = ((byte)(uVar2 >> (uVar8 - 5 & 0xff)) | bVar9) & (byte)uVar5;
        uVar8 = param_1[1];
        uVar2 = 4 - uVar8;
        if ((int)uVar2 < 1) {
          uVar2 = *param_1;
          bVar9 = 0;
        }
        else {
          if (uVar2 == 0x20) {
            bVar9 = 0;
          }
          else {
            bVar9 = (byte)(*param_1 << (uVar2 & 0xff));
          }
          uVar2 = FUN_2c4d74d4(param_1 + 2);
          *param_1 = uVar2;
          uVar8 = param_1[1] + 0x20;
        }
        param_1[1] = uVar8 - 4;
        pbVar11[5] = ((byte)(uVar2 >> (uVar8 - 4 & 0xff)) | bVar9) & (byte)uVar10;
        pbVar11 = pbVar11 + 1;
        iVar6 = iVar6 + (uint)*pbVar11;
      } while ((int)(pbVar11 + (-2 - (int)param_2)) <= (int)(uint)(byte)param_2[1]);
      if (iVar6 < param_5) {
        return 0;
      }
    }
  }
  return 0x4004;
}

