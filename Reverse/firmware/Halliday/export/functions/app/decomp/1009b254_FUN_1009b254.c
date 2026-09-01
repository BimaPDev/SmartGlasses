/* FUN_1009b254 @ 0x1009b254 */

void FUN_1009b254(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  pbVar4 = DAT_1009b2d8;
  uVar3 = (uint)*DAT_1009b2d8;
  if (2 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_1009b2e4,0x159,DAT_1009b2e0,DAT_1009b2dc);
  }
  if ((uVar3 != 0) && ((int)((uint)DAT_1009b2d8[2] << 0x1e) < 0)) {
    piVar6 = (int *)param_1[1];
    iVar7 = (piVar6[2] + 1) - *piVar6;
    uVar2 = (uint)DAT_1009b2d8[3] * (iVar7 * (param_2[1] - piVar6[1]) + (*param_2 - *piVar6)) +
            *param_1;
    puVar1 = (uint *)(DAT_1009b2d8 + 0x38);
    uVar5 = (uint)DAT_1009b2d8[3] *
            (iVar7 * (param_2[3] - param_2[1]) + ((param_2[2] + 1) - *param_2)) + uVar2;
    if (*(uint *)(DAT_1009b2d8 + 0x34) < *puVar1) {
      if (uVar2 < *(uint *)(DAT_1009b2d8 + 0x34)) {
        *(uint *)(DAT_1009b2d8 + 0x34) = uVar2;
      }
      if (uVar5 <= *puVar1) goto LAB_1009b2c6;
    }
    else {
      *(uint *)(DAT_1009b2d8 + 0x34) = uVar2;
    }
    *(uint *)(pbVar4 + 0x38) = uVar5;
  }
LAB_1009b2c6:
  pbVar4 = pbVar4 + uVar3 * 0x10 + 4;
  FUN_1012a8da(pbVar4,pbVar4,param_2,param_4);
  return;
}

