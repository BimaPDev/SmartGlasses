/* FUN_2c4f1384 @ 0x2c4f1384 */

int FUN_2c4f1384(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,uint *param_6,
                uint *param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_2c [2];
  
  if (param_4 == 0) {
    *param_6 = 0xffffffff;
    *param_7 = 0;
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x68);
  uVar6 = param_4 - 1;
  uVar9 = *(int *)(iVar7 + 0x1c) - 8;
  local_2c[0] = param_3;
  if (uVar6 < uVar9) {
    if (param_5 < uVar9) goto LAB_2c4f1460;
    uVar6 = 0;
LAB_2c4f13d2:
    iVar5 = FUN_2c672b18(param_5 / uVar9 - 1);
    uVar8 = (param_5 + (iVar5 + 2) * -4) / uVar9;
    iVar5 = FUN_2c672b18(uVar8);
    param_5 = (param_5 + iVar5 * -4) - uVar9 * uVar8;
  }
  else {
    iVar5 = FUN_2c672b18(uVar6 / uVar9 - 1);
    uVar6 = (uVar6 + (iVar5 + 2) * -4) / uVar9;
    if (uVar9 <= param_5) goto LAB_2c4f13d2;
    uVar8 = 0;
  }
  if (uVar8 < uVar6) {
    while( true ) {
      bVar2 = (byte)uVar6;
      bVar3 = (byte)(uVar6 >> 8);
      bVar4 = (byte)(uVar6 >> 0x10);
      bVar1 = (byte)(uVar6 >> 0x18);
      uVar10 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                        << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                     bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                       0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                               bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                             bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                           bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                       (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                        << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                     bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8
                       | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1
                                          ) << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
      uVar9 = 0x1f - LZCOUNT(uVar6 - uVar8);
      if (uVar10 <= uVar9) {
        uVar9 = uVar10;
      }
      if ((*(uint *)(iVar7 + 0x20) <= local_2c[0]) || (*(uint *)(iVar7 + 0x1c) < uVar9 * 4 + 4)) {
        return -0x54;
      }
      iVar7 = FUN_2c4f0eb4(param_1,0,param_2,4,local_2c[0],uVar9 * 4,local_2c,4);
      if (iVar7 != 0) {
        return iVar7;
      }
      uVar6 = uVar6 - (1 << (uVar9 & 0xff));
      if (uVar6 <= uVar8) break;
      iVar7 = *(int *)(param_1 + 0x68);
    }
  }
LAB_2c4f1460:
  *param_6 = local_2c[0];
  *param_7 = param_5;
  return 0;
}

