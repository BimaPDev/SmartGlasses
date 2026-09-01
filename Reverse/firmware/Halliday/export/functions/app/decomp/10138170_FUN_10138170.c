/* FUN_10138170 @ 0x10138170 */

undefined4 FUN_10138170(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)((int)param_1 + 0x49);
  if (uVar2 == 0) {
    return 0;
  }
  iVar1 = *param_1;
  if (uVar2 == 1) {
    if (-1 < (int)((uint)*(byte *)(iVar1 + 0xa1) << 0x1f)) {
      return 0;
    }
  }
  else if (uVar2 - 2 < 3) goto LAB_101381a0;
  if ((int)((uint)*(byte *)(iVar1 + 0xa1) << 0x1f) < 0) {
    *(undefined1 *)((int)param_1 + 0x49) = 2;
  }
LAB_101381a0:
  iVar1 = FUN_101336aa(iVar1,*(undefined1 *)((int)param_1 + 0x49));
  if (iVar1 != 0) {
    return 1;
  }
  if (*(byte *)((int)param_1 + 0x49) <= *(byte *)(*param_1 + 9)) {
    return 0;
  }
  return 2;
}

