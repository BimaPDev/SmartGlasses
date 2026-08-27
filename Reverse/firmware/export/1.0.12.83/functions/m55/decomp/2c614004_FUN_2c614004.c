/* FUN_2c614004 @ 0x2c614004 */

void FUN_2c614004(undefined4 *param_1,int param_2,int param_3,int param_4,short param_5,byte param_6
                 )

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = (int)param_5;
  FUN_2c62c3b0(param_1,0x2c,param_3,param_4,param_4);
  if ((param_3 == iVar5) && (param_6 == 3)) {
    param_3 = (int)(short)((short)param_3 + -1);
    iVar5 = (int)(short)(param_5 + -1);
  }
  iVar3 = param_3;
  iVar7 = param_2;
  if (iVar5 < param_3) {
    iVar3 = iVar5;
    iVar5 = param_3;
    iVar7 = param_4;
    param_4 = param_2;
  }
  uVar4 = param_4 - iVar7;
  *(short *)((int)param_1 + 0xe) = (short)iVar5;
  uVar6 = iVar5 - iVar3;
  *(short *)(param_1 + 2) = (short)iVar7;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfc | param_6 & 3;
  *(short *)((int)param_1 + 10) = (short)iVar3;
  *(short *)(param_1 + 3) = (short)param_4;
  *(short *)((int)param_1 + 0x12) = (short)iVar7;
  *(short *)(param_1 + 5) = (short)iVar3;
  bVar1 = (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) <
          (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | bVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = DAT_2c614154;
  if ((int)((uint)bVar1 << 0x1f) < 0) {
    if (uVar4 == 0) {
      iVar5 = 0;
      iVar3 = 0;
    }
    else {
      iVar3 = uVar6 * (0x100000 / (int)uVar4);
      iVar5 = iVar3 >> 10;
      iVar3 = iVar3 >> 0xc;
      param_1[7] = iVar5;
    }
    if (uVar6 == 0) goto LAB_2c614106;
    param_1[8] = iVar5;
    param_1[6] = (int)((0x100000 / (int)uVar6) * uVar4) >> 10;
    bVar2 = *(byte *)(param_1 + 4);
    if ((bVar2 & 3) != 0) goto LAB_2c6140c2;
LAB_2c614110:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfd;
  }
  else {
    if (uVar6 == 0) {
      iVar5 = 0;
      iVar3 = 0;
    }
    else {
      iVar3 = uVar4 * (0x100000 / (int)uVar6);
      iVar5 = iVar3 >> 10;
      iVar3 = iVar3 >> 0xc;
      param_1[6] = iVar5;
    }
    if (uVar4 != 0) {
      param_1[7] = (int)((0x100000 / (int)uVar4) * uVar6) >> 10;
    }
LAB_2c614106:
    bVar2 = *(byte *)(param_1 + 4);
    param_1[8] = iVar5;
    if ((bVar2 & 3) == 0) goto LAB_2c614110;
LAB_2c6140c2:
    if ((bVar2 & 3) != 1) {
      if ((bVar2 & 3) == 2) {
        if (0 < iVar5) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
          goto LAB_2c6140da;
        }
        goto LAB_2c614110;
      }
      if (0 < iVar5) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfd;
        goto LAB_2c6140da;
      }
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  }
  if (iVar5 < 0) {
    param_1[9] = -iVar3;
    return;
  }
LAB_2c6140da:
  param_1[9] = iVar3;
  return;
}

