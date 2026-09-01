/* FUN_10138b22 @ 0x10138b22 */

void FUN_10138b22(int param_1)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) | 0x40;
  uVar1 = thunk_FUN_10115958();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}

