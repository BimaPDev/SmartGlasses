/* FUN_140c96fc @ 0x140c96fc */

undefined4 * FUN_140c96fc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_140c9718;
  param_1[1] = (uint)(param_2 != 0);
  *param_1 = uVar1;
  uVar1 = FUN_140c02cc();
  param_1[2] = uVar1;
  return param_1;
}

