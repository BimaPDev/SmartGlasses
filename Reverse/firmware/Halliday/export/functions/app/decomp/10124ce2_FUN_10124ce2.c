/* FUN_10124ce2 @ 0x10124ce2 */

undefined4 FUN_10124ce2(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  }
  return uVar1;
}

