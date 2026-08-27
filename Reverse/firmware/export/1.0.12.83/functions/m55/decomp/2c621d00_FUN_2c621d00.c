/* FUN_2c621d00 @ 0x2c621d00 */

void FUN_2c621d00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x4c);
      FUN_2c62bea8(*(undefined4 *)(iVar2 + iVar1 * 4));
      *(undefined4 *)(iVar2 + iVar1 * 4) = 0;
      iVar2 = *(int *)(param_1 + 0x50);
      FUN_2c62bea8(*(undefined4 *)(iVar2 + iVar1 * 4));
      *(undefined4 *)(iVar2 + iVar1 * 4) = 0;
      iVar2 = *(int *)(param_1 + 0x54);
      FUN_2c62bea8(*(undefined4 *)(iVar2 + iVar1 * 4));
      *(undefined4 *)(iVar2 + iVar1 * 4) = 0;
      iVar2 = *(int *)(param_1 + 0x58);
      FUN_2c62bea8(*(undefined4 *)(iVar2 + iVar1 * 4));
      *(undefined4 *)(iVar2 + iVar1 * 4) = 0;
      iVar1 = iVar1 + 1;
    } while (*(int *)(param_1 + 0x48) != iVar1);
  }
  FUN_2c62bea8(*(undefined4 *)(param_1 + 0x4c));
  FUN_2c62bea8(*(undefined4 *)(param_1 + 0x50));
  FUN_2c62bea8(*(undefined4 *)(param_1 + 0x54));
  FUN_2c62bea8(*(undefined4 *)(param_1 + 0x58),extraout_r1,extraout_r2,param_4);
  return;
}

