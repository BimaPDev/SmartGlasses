/* FUN_1008f810 @ 0x1008f810 */

uint FUN_1008f810(undefined2 *param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  iVar1 = (int)(param_2 * (uint)*(byte *)(param_1 + 1)) >> 8;
  if (iVar1 < param_3) {
    iVar6 = *(byte *)(param_1 + 4) - 1;
    if (param_3 < (int)(param_2 * (uint)*(byte *)(param_1 + iVar6 * 2 + 1)) >> 8) {
      if ((1 < *(byte *)(param_1 + 4)) &&
         (iVar6 = (int)((uint)*(byte *)(param_1 + 3) * param_2) >> 8, param_3 <= iVar6)) {
        uVar4 = FUN_1012848e(*param_1);
        uVar5 = FUN_1012848e(param_1[2]);
        iVar6 = iVar6 - iVar1;
        if (iVar6 != 0) {
          uVar7 = ((param_3 - iVar1) * 0xff) / iVar6;
          uVar8 = uVar7 & 0xff;
          uVar7 = ~uVar7 & 0xff;
          return (uVar8 * (uVar5 & 0xff) + uVar7 * (uVar4 & 0xff)) * 0x8081 >> 0x17 & 0xff |
                 ((uVar8 * ((uVar5 & 0xffff) >> 8) + uVar7 * ((uVar4 & 0xffff) >> 8)) * 0x8081 >>
                  0x17 & 0xff) << 8 |
                 ((uVar8 * ((uVar5 & 0xffffff) >> 0x10) + ((uVar4 & 0xffffff) >> 0x10) * uVar7) *
                  0x8081 >> 0x17 & 0xff) << 0x10 | 0xff000000;
        }
      }
      uVar9 = FUN_10094174(3,DAT_1008f910,0x148,DAT_1008f914,DAT_1008f90c,DAT_1008f908);
      FUN_10119dc2(DAT_1008f91c,DAT_1008f918,DAT_1008f910,0x148,uVar9);
      FUN_10119dc2(DAT_1008f920);
      FUN_1011a1f0(DAT_1008f910,0x148,extraout_r2,extraout_r3);
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x1008f880);
      (*pcVar2)();
    }
    uVar3 = param_1[iVar6 * 2];
  }
  else {
    uVar3 = *param_1;
  }
  uVar4 = FUN_1012848e(uVar3);
  return uVar4;
}

