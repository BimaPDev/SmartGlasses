/* FUN_100942d8 @ 0x100942d8 */

int FUN_100942d8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int iVar3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar5 = DAT_10094414;
  if (param_1 != 0) {
    iVar3 = 0;
    iVar2 = -1;
    do {
      iVar6 = DAT_10094414 + iVar3 * 8;
      bVar1 = *(byte *)(iVar6 + 6);
      if (-1 < (int)((uint)bVar1 << 0x1f)) {
        uVar4 = (uint)*(ushort *)(DAT_10094414 + 4 + iVar3 * 8);
        if (param_1 <= uVar4) {
          if (uVar4 == param_1) {
            iVar5 = *(int *)(DAT_10094414 + iVar3 * 8);
            *(byte *)(iVar6 + 6) = bVar1 | 1;
            return iVar5;
          }
          if ((iVar2 == -1) || (uVar4 < *(ushort *)(DAT_10094414 + iVar2 * 8 + 4))) {
            iVar2 = (int)(char)iVar3;
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x10);
    if (iVar2 != -1) {
      iVar5 = DAT_10094414 + iVar2 * 8;
      iVar2 = *(int *)(DAT_10094414 + iVar2 * 8);
      *(byte *)(iVar5 + 6) = *(byte *)(iVar5 + 6) | 1;
      return iVar2;
    }
    iVar2 = 0;
    do {
      iVar6 = DAT_10094414 + iVar2 * 8;
      iVar3 = (uint)*(byte *)(iVar6 + 6) << 0x1f;
      if (-1 < iVar3) {
        iVar3 = FUN_10094280(*(undefined4 *)(DAT_10094414 + iVar2 * 8),param_1,DAT_10094418,iVar3,
                             param_1);
        if (iVar3 == 0) {
          uVar7 = FUN_10094174(3,DAT_10094428,0x138,DAT_10094418,DAT_10094424,DAT_10094420,
                               DAT_1009441c,param_4);
          FUN_10119dc2(DAT_10094430,DAT_1009442c,DAT_10094428,0x138,uVar7);
          FUN_10119dc2(DAT_10094434);
          FUN_1011a1f0(DAT_10094428,0x138,extraout_r2,extraout_r3);
          return 0;
        }
        *(short *)(iVar6 + 4) = (short)param_1;
        *(byte *)(iVar6 + 6) = *(byte *)(iVar6 + 6) | 1;
        *(int *)(iVar5 + iVar2 * 8) = iVar3;
        return iVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x10);
    FUN_10094174(3,DAT_10094428,0x143,DAT_10094418,DAT_10094438,param_2,param_3,param_4);
    uVar7 = FUN_10094174(3,DAT_10094428,0x144,DAT_10094418,DAT_10094424,DAT_10094440,DAT_1009443c);
    FUN_10119dc2(DAT_10094430,DAT_1009442c,DAT_10094428,0x144,uVar7);
    FUN_10119dc2(DAT_10094434);
    FUN_1011a1f0(DAT_10094428,0x144,extraout_r2_00,extraout_r3_00);
  }
  return 0;
}

