/* FUN_1010bbe8 @ 0x1010bbe8 */

bool FUN_1010bbe8(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uStack_1c;
  uint local_18;
  uint uStack_14;
  
  uStack_1c = param_2;
  local_18 = param_3;
  uStack_14 = param_4;
  FUN_1010b7e8(*(undefined2 *)(param_1 + 0xe),&local_18,&uStack_14,&uStack_1c,param_1);
  uVar3 = FUN_1013b044(*(undefined2 *)(param_1 + 0xe));
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 != 0) {
    return (bool)7;
  }
  if (*(char *)(param_1 + 0xac) == '\0') {
    uVar2 = (local_18 << 3) / uStack_14 - 8;
    if (*(char *)(param_1 + 0xc) == '\x01') {
      if (((uVar2 < 0x19) && ((int)((DAT_1010bcdc >> (uVar2 & 0xff)) << 0x1f) < 0)) &&
         (uStack_14 = (local_18 << 2) / uStack_14,
         *(uint *)(param_1 + 8) != uStack_14 * (*(uint *)(param_1 + 8) / uStack_14))) {
        return true;
      }
      if (iVar1 - 0x427U < 6) {
        if (*(int *)(param_1 + 8) != (*(int *)(param_1 + 8) / 0xc) * 0xc) {
          return true;
        }
      }
      else if ((iVar1 - 0x42dU < 4) && ((*(uint *)(param_1 + 8) & 7) != 0)) {
        return true;
      }
    }
    else {
      if (((uVar2 < 0x19) && ((int)((DAT_1010bcdc >> (uVar2 & 0xff)) << 0x1f) < 0)) &&
         (*(uint *)(param_1 + 8) !=
          (local_18 / uStack_14) * (*(uint *)(param_1 + 8) / (local_18 / uStack_14)))) {
        return true;
      }
      if (iVar1 - 0x427U < 6) {
        if (*(int *)(param_1 + 8) != (*(int *)(param_1 + 8) / 3) * 3) {
          return true;
        }
      }
      else if ((iVar1 - 0x42dU < 4) && (*(int *)(param_1 + 8) << 0x1f < 0)) {
        return true;
      }
    }
    if (((uVar2 < 0x19) && ((int)((DAT_1010bcdc >> (uVar2 & 0xff)) << 0x1f) < 0)) &&
       ((*(uint *)(param_1 + 0x18) & 3) != 0)) {
      return true;
    }
    if (5 < iVar1 - 0x427U) {
      return false;
    }
    return (*(uint *)(param_1 + 0x18) & 0x3f) != 0;
  }
  return false;
}

