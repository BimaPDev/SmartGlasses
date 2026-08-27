/* FUN_140de9f4 @ 0x140de9f4 */

uint FUN_140de9f4(int param_1,byte param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    FUN_140dac50();
  }
  if (param_3 == DAT_140dea8c) {
    param_3 = *(int **)(param_1 + 4);
  }
  else if (param_3 == DAT_140dea90) {
    param_3 = *(int **)(param_1 + 8);
  }
  else if (param_3 == DAT_140dea94) {
    param_3 = *(int **)(param_1 + 0xc);
  }
  param_3[2] = param_3[6];
  uVar3 = (uint)*(ushort *)(param_3 + 3);
  iVar2 = uVar3 << 0x1c;
  if (((iVar2 < 0) && (uVar3 = 0, param_3[4] != 0)) ||
     (iVar2 = FUN_140df8b8(param_1,param_3,iVar2,uVar3,param_4), iVar2 == 0)) {
    uVar3 = (uint)param_2;
    iVar2 = *param_3 - param_3[4];
    if (param_3[5] <= iVar2) {
      iVar1 = FUN_140dab04(param_1,param_3);
      iVar2 = 0;
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    param_3[2] = param_3[2] + -1;
    pbVar4 = (byte *)*param_3;
    *param_3 = (int)(pbVar4 + 1);
    *pbVar4 = param_2;
    if (param_3[5] != iVar2 + 1) {
      if (-1 < (int)((uint)*(ushort *)(param_3 + 3) << 0x1f)) {
        return uVar3;
      }
      if (uVar3 != 10) {
        return uVar3;
      }
    }
    iVar2 = FUN_140dab04(param_1,param_3);
    if (iVar2 == 0) {
      return uVar3;
    }
  }
  return 0xffffffff;
}

