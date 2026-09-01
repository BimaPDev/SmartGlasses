/* FUN_1011c4a2 @ 0x1011c4a2 */

undefined4 FUN_1011c4a2(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1011a9aa(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_1011aa14();
  *(undefined4 *)(param_1 + 8) = uVar1;
  return 0;
}

