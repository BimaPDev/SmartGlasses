/* FUN_2c5f670c @ 0x2c5f670c */

undefined4 FUN_2c5f670c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_2c5f5938(param_1,*(undefined4 *)(param_1 + 0x48));
    FUN_2c5f6a78(param_1 + 0x44);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != *(int *)(param_1 + 8)) {
    do {
      iVar1 = FUN_2c5f54d4(param_1,iVar1);
      *(int *)(param_1 + 0xc) = iVar1;
    } while (iVar1 != *(int *)(param_1 + 8));
  }
  FUN_2c5f54d4(param_1);
  if (DAT_2c5f6768 < *(uint *)(param_1 + 0x6c)) {
    *(uint *)(*(int *)(param_1 + 4) + 0x14) = *(uint *)(param_1 + 0x6c);
  }
  else {
    *(uint *)(*(int *)(param_1 + 4) + 0x14) = DAT_2c5f6768;
  }
  FUN_2c5f6a50(param_1 + 0x54);
  FUN_2c5f6a50(param_1 + 0x30);
  return *(undefined4 *)(param_1 + 8);
}

