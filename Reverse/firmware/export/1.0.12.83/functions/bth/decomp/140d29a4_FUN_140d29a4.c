/* FUN_140d29a4 @ 0x140d29a4 */

undefined4 * FUN_140d29a4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_140d29c0;
  param_1[1] = (uint)(param_2 != 0);
  *param_1 = uVar1;
  uVar1 = FUN_140c02cc();
  param_1[2] = uVar1;
  return param_1;
}

