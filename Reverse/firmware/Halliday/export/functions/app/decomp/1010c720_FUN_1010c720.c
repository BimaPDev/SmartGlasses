/* FUN_1010c720 @ 0x1010c720 */

int FUN_1010c720(int param_1)

{
  int iVar1;
  int iVar2;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  iVar2 = DAT_1010c7c8;
  if (param_1 != 0) {
    iVar1 = FUN_1011ea30(*(undefined4 *)(DAT_1010c7c8 + 0x720),param_1,0xbc);
    if (iVar1 == 0) {
      iVar1 = FUN_1010b660(iVar2);
      if ((iVar1 == 0) && (iVar1 = FUN_1010b62c(iVar2,0), iVar1 != 0)) {
        return iVar1;
      }
      FUN_1011ea48(*(undefined4 *)(iVar2 + 0x720),0,0xbc);
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
      local_1c = *(int *)(*(int *)(param_1 + 0xb4) + 0x10);
      iVar2 = FUN_10062a28(3,&local_1c);
      if (iVar2 != 0) {
        return iVar2;
      }
      FUN_10139762(*(undefined4 *)(param_1 + 0xb4));
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      local_18 = *(undefined4 *)(param_1 + 0x4c);
      iVar2 = FUN_10062a28(3,&local_18);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      local_14[0] = *(undefined4 *)(param_1 + 0x50);
      iVar2 = FUN_10062a28(3,local_14);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    local_1c = *(int *)(param_1 + 0x10);
    if (local_1c != 0) {
      iVar2 = FUN_10062a28(3,&local_1c);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      return 0;
    }
  }
  return 1;
}

