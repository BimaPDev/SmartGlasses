/* FUN_10087078 @ 0x10087078 */

undefined4 FUN_10087078(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  uint uVar4;
  undefined4 extraout_r3;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 != 0) {
    uVar4 = *(byte *)(iVar5 + 0x22) & 0x3f;
    for (iVar6 = 0; iVar6 < (int)uVar4; iVar6 = iVar6 + 1) {
      iVar7 = *(int *)(iVar5 + 0xc);
      if ((param_2 == 0) || (*(int *)(iVar7 + iVar6 * 0xc) == param_2)) {
        for (; iVar6 < (int)(uVar4 - 1); iVar6 = iVar6 + 1) {
          puVar8 = (undefined4 *)(iVar7 + iVar6 * 0xc);
          puVar2 = (undefined4 *)(iVar6 * 0xc + iVar7 + 0xc);
          uVar1 = puVar2[1];
          uVar3 = puVar2[2];
          *puVar8 = *puVar2;
          puVar8[1] = uVar1;
          puVar8[2] = uVar3;
        }
        uVar4 = uVar4 + 0x3f & 0x3f;
        *(byte *)(iVar5 + 0x22) = *(byte *)(iVar5 + 0x22) & 0xc0 | (byte)uVar4;
        uVar1 = FUN_10094280(iVar7,uVar4 * 0xc,DAT_10087134);
        iVar6 = *(int *)(param_1 + 8);
        *(undefined4 *)(iVar5 + 0xc) = uVar1;
        if (*(int *)(iVar6 + 0xc) == 0) {
          uVar9 = FUN_10094174(3,DAT_10087144,0xc3,DAT_10087134,DAT_10087140,DAT_1008713c,
                               DAT_10087138);
          FUN_10119dc2(DAT_1008714c,DAT_10087148,DAT_10087144,0xc3,uVar9);
          FUN_10119dc2(DAT_10087150);
          FUN_1011a1f0(DAT_10087144,0xc3,extraout_r2,extraout_r3);
        }
        return 1;
      }
    }
  }
  return 0;
}

