/* FUN_140c58a0 @ 0x140c58a0 */

undefined4 * FUN_140c58a0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_140c58bc;
  param_1[1] = (uint)(param_2 != 0);
  *param_1 = uVar1;
  uVar1 = FUN_140c02cc();
  param_1[2] = uVar1;
  return param_1;
}

