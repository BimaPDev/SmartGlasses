/* FUN_140c4d04 @ 0x140c4d04 */

undefined4 * FUN_140c4d04(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_140c4d28;
  param_1[1] = (uint)(param_2 != 0);
  *param_1 = uVar1;
  uVar1 = FUN_140c02cc();
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_140c5038(param_1);
  return param_1;
}

