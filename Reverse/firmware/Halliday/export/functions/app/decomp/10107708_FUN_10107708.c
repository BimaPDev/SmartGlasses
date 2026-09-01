/* FUN_10107708 @ 0x10107708 */

undefined4 FUN_10107708(int param_1,uint param_2,uint param_3,undefined2 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  
  if ((*(ushort *)(param_1 + 0x74) <= param_2) || (*(ushort *)(param_1 + 0x50) <= param_3)) {
    if (*(char *)(param_1 + 0x235) == '\0') {
      return 1;
    }
    *(undefined4 *)(param_1 + 0xc) = 0x86;
    return 1;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x58) + param_3 * 8 + 4);
  iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + param_2 * 8 + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 0x58) + param_3 * 8) -
          *(int *)(*(int *)(param_1 + 0x7c) + param_2 * 8);
  local_1c = iVar3 - iVar1;
  local_20 = iVar2;
  if (iVar2 == 0) {
    if (local_1c == 0) {
      local_20 = 0x4000;
    }
    else if (((int)((uint)*(byte *)(param_1 + 0x174) << 0x1f) < 0) &&
            (local_20 = iVar1 - iVar3, local_1c = iVar2, local_20 == 0)) {
      return 0;
    }
  }
  else if ((int)((uint)*(byte *)(param_1 + 0x174) << 0x1f) < 0) {
    local_20 = iVar1 - iVar3;
    local_1c = iVar2;
  }
  FUN_100f8860(&local_20);
  if (local_20 < 0) {
    local_20 = local_20 + 3;
  }
  if (local_1c < 0) {
    local_1c = local_1c + 3;
  }
  *param_4 = (short)(local_20 >> 2);
  param_4[1] = (short)(local_1c >> 2);
  return 0;
}

