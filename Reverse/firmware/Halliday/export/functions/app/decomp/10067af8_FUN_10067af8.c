/* FUN_10067af8 @ 0x10067af8 */

void FUN_10067af8(ushort *param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  iVar1 = DAT_10067b44;
  iVar2 = *(int *)(DAT_10067b44 + 0x18);
  if (iVar2 << 0x1b < 0) {
    uVar3 = *(ushort *)(DAT_10067b44 + 0x10) - 1;
    *param_1 = 0;
  }
  else {
    if ((int)((uint)*(ushort *)(DAT_10067b44 + 0x10) << 0x1f) < 0) goto LAB_10067b0c;
    *param_1 = *param_1 & 0xfffe;
    uVar3 = param_1[2] | 1;
  }
  param_1[2] = uVar3;
LAB_10067b0c:
  if (iVar2 << 0x1a < 0) {
    uVar3 = *(ushort *)(iVar1 + 0x12) - 1;
    param_1[1] = 0;
  }
  else {
    if ((int)((uint)*(ushort *)(iVar1 + 0x12) << 0x1f) < 0) {
      return;
    }
    param_1[1] = param_1[1] & 0xfffe;
    uVar3 = param_1[3] | 1;
  }
  param_1[3] = uVar3;
  return;
}

