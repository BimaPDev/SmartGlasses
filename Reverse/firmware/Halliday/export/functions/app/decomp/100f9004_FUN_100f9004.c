/* FUN_100f9004 @ 0x100f9004 */

void FUN_100f9004(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_100f9010;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  FUN_101188d0(uVar1);
  return;
}

