/* FUN_1013d094 @ 0x1013d094 */

uint FUN_1013d094(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = param_3[2] + -1;
  param_3[2] = iVar4;
  if ((-1 < iVar4) || ((param_3[6] <= iVar4 && (param_2 != 10)))) {
    puVar3 = (undefined1 *)*param_3;
    *param_3 = (int)(puVar3 + 1);
    *puVar3 = (char)param_2;
    return param_2;
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    FUN_101191b4();
  }
  if (param_3 == DAT_10118e84) {
    param_3 = *(int **)(param_1 + 4);
  }
  else if (param_3 == DAT_10118e88) {
    param_3 = *(int **)(param_1 + 8);
  }
  else if (param_3 == DAT_10118e8c) {
    param_3 = *(int **)(param_1 + 0xc);
  }
  param_3[2] = param_3[6];
  uVar2 = (uint)*(ushort *)(param_3 + 3);
  iVar1 = uVar2 << 0x1c;
  if (((iVar1 < 0) && (uVar2 = 0, param_3[4] != 0)) ||
     (iVar4 = FUN_10118eb4(param_1,param_3,iVar1,uVar2,iVar4), iVar4 == 0)) {
    uVar2 = param_2 & 0xff;
    iVar4 = *param_3 - param_3[4];
    if (param_3[5] <= iVar4) {
      iVar1 = FUN_101190b8(param_1,param_3);
      iVar4 = 0;
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    param_3[2] = param_3[2] + -1;
    puVar3 = (undefined1 *)*param_3;
    *param_3 = (int)(puVar3 + 1);
    *puVar3 = (char)param_2;
    if (param_3[5] != iVar4 + 1) {
      if (-1 < (int)((uint)*(ushort *)(param_3 + 3) << 0x1f)) {
        return uVar2;
      }
      if (uVar2 != 10) {
        return uVar2;
      }
    }
    iVar4 = FUN_101190b8(param_1,param_3);
    if (iVar4 == 0) {
      return uVar2;
    }
  }
  return 0xffffffff;
}

