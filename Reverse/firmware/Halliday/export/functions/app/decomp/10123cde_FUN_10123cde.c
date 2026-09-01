/* FUN_10123cde @ 0x10123cde */

uint FUN_10123cde(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int local_14;
  
  local_14 = param_2;
  uVar1 = FUN_101225c6(param_1,&local_14,param_3,param_4,param_1);
  uVar3 = uVar1;
  if ((uVar1 == 0) && (uVar1 = (uint)*(byte *)(param_1 + 0x31), uVar3 = uVar1, uVar1 == 0)) {
    if (-1 < (int)((uint)*(byte *)(param_1 + 0x30) << 0x1e)) {
      FUN_10122b7a(local_14,7);
      return 7;
    }
    uVar3 = *(uint *)(param_1 + 0x3c);
    bVar4 = *(uint *)(param_1 + 0x14) <= uVar3;
    if (uVar3 == *(uint *)(param_1 + 0x14)) {
      bVar4 = *(uint *)(param_1 + 0x10) <= *(uint *)(param_1 + 0x38);
    }
    if (!bVar4) {
      if (*(uint *)(param_1 + 0x38) == 0 && uVar3 == 0) {
        uVar2 = FUN_101229d4(param_1,*(undefined4 *)(param_1 + 8),0);
        *(undefined4 *)(param_1 + 8) = 0;
      }
      else {
        uVar3 = FUN_1012270e(param_1,*(undefined4 *)(param_1 + 0x40));
        if (uVar3 == 0xffffffff) {
          uVar2 = 1;
        }
        else if (uVar3 == 1) {
          uVar2 = 2;
        }
        else {
          uVar2 = 0;
          if (uVar3 < *(uint *)(local_14 + 0x34)) {
            uVar2 = FUN_101229d4(param_1,uVar3,*(undefined4 *)(param_1 + 0x40));
          }
        }
      }
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x3c);
      *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 0x40;
      if (uVar2 != 0) {
        *(char *)(param_1 + 0x31) = (char)uVar2;
        FUN_10122b7a(local_14,uVar2);
        return uVar2;
      }
    }
    uVar3 = 0;
  }
  FUN_10122b7a(local_14,uVar3);
  return uVar1;
}

