/* FUN_2c61bc7c @ 0x2c61bc7c */

void FUN_2c61bc7c(undefined4 param_1,int param_2,undefined4 param_3,byte param_4)

{
  uint uVar1;
  char in_ZR;
  
  if (in_ZR == '\0') {
    if (*(short *)(param_2 + 0x28) == 0) goto LAB_2c61bcca;
    uVar1 = 0;
    do {
      FUN_2c62bea8(*(undefined4 *)(*(int *)(param_2 + 0x24) + uVar1 * 4));
      *(undefined4 *)(*(int *)(param_2 + 0x24) + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(param_2 + 0x28));
    param_4 = *(byte *)(param_2 + 0x2c);
  }
  if (((param_4 & 3) != 0) && (*(short *)(param_2 + 0x28) != 0)) {
    uVar1 = 0;
    do {
      FUN_2c62bea8(*(undefined4 *)(*(int *)(param_2 + 0x24) + uVar1 * 8));
      *(undefined4 *)(*(int *)(param_2 + 0x24) + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(param_2 + 0x28));
  }
LAB_2c61bcca:
  FUN_2c62bea8(*(undefined4 *)(param_2 + 0x24));
  *(undefined4 *)(param_2 + 0x24) = 0;
  return;
}

