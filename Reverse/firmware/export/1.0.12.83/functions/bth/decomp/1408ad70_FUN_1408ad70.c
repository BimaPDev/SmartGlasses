/* FUN_1408ad70 @ 0x1408ad70 */

undefined1 FUN_1408ad70(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0xff;
  }
  if (((*(int *)(param_1 + -0xc) != 0) && (iVar1 = FUN_1408a798(), iVar1 != 0)) &&
     (*(int *)(param_1 + -0xc) != 0)) {
    return *(undefined1 *)(*(int *)(param_1 + -0xc) + 0x11);
  }
  return 0xff;
}

