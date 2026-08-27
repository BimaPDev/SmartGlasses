/* FUN_140d2770 @ 0x140d2770 */

undefined4 * FUN_140d2770(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_140d2794;
  param_1[1] = (uint)(param_3 != 0);
  *param_1 = uVar1;
  param_1[2] = param_2;
  uVar1 = FUN_140c02e0();
  param_1[4] = uVar1;
  FUN_140d8e10(param_1,0);
  return param_1;
}

