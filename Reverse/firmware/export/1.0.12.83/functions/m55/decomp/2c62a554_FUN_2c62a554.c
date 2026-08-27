/* FUN_2c62a554 @ 0x2c62a554 */

void FUN_2c62a554(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_2c62c3b0(param_1,0x20);
  uVar2 = DAT_2c62a570;
  uVar1 = DAT_2c62a56c;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  return;
}

