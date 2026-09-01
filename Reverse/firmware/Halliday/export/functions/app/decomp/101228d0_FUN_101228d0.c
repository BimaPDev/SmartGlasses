/* FUN_101228d0 @ 0x101228d0 */

int FUN_101228d0(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_2 < 2) || (*(uint *)(param_1 + 0x34) <= param_2)) goto LAB_101228f0;
  uVar2 = (uint)*param_1;
  bVar1 = (byte)param_3;
  if (uVar2 == 2) {
    iVar3 = FUN_10122662(param_1,*(int *)(param_1 + 0x40) + (param_2 >> 8));
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = (param_2 & 0xff) * 2;
    param_1[iVar3 + 0x50] = bVar1;
    param_1[iVar3 + 0x51] = (byte)(param_3 >> 8);
LAB_10122994:
    iVar3 = 0;
    param_1[3] = 1;
  }
  else {
    if (uVar2 < 3) {
      if (uVar2 == 1) {
        uVar2 = param_2 + (param_2 >> 1);
        iVar3 = FUN_10122662(param_1,*(int *)(param_1 + 0x40) + (uVar2 >> 9));
        if (iVar3 != 0) {
          return iVar3;
        }
        if ((param_2 & 1) != 0) {
          bVar1 = (byte)(param_3 << 4) | param_1[(uVar2 & 0x1ff) + 0x50] & 0xf;
        }
        param_1[(uVar2 & 0x1ff) + 0x50] = bVar1;
        param_1[3] = 1;
        iVar3 = FUN_10122662(param_1,*(int *)(param_1 + 0x40) + (uVar2 + 1 >> 9));
        if (iVar3 != 0) {
          return iVar3;
        }
        uVar2 = uVar2 + 1 & 0x1ff;
        if ((param_2 & 1) == 0) {
          bVar1 = (byte)((param_3 << 0x14) >> 0x1c) | param_1[uVar2 + 0x50] & 0xf0;
        }
        else {
          bVar1 = (byte)((param_3 << 0x14) >> 0x18);
        }
        param_1[uVar2 + 0x50] = bVar1;
        goto LAB_10122994;
      }
    }
    else if (uVar2 - 3 < 2) {
      iVar3 = FUN_10122662(param_1,*(int *)(param_1 + 0x40) + (param_2 >> 7));
      if (iVar3 != 0) {
        return iVar3;
      }
      if (*param_1 != 4) {
        uVar2 = FUN_1012227a(param_1 + (param_2 & 0x7f) * 4 + 0x50);
        param_3 = param_3 & 0xfffffff | uVar2 & 0xf0000000;
      }
      FUN_101222b6(param_1 + (param_2 & 0x7f) * 4 + 0x50,param_3);
      goto LAB_10122994;
    }
LAB_101228f0:
    iVar3 = 2;
  }
  return iVar3;
}

