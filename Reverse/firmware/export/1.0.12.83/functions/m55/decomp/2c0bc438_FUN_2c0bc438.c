/* FUN_2c0bc438 @ 0x2c0bc438 */

undefined8
FUN_2c0bc438(undefined4 param_1,undefined4 param_2,undefined2 *param_3,int param_4,
            undefined4 param_5)

{
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_lr;
  
  if (unaff_r6 == 0) {
    *(int *)(param_4 + 0x60) = param_4;
    return CONCAT44(param_2,param_3);
  }
  *param_3 = (short)param_3;
  *param_3 = (short)param_3;
  *(undefined2 *)((int)param_3 + unaff_r5 + param_4 + 0x38) =
       *(undefined2 *)((int)param_3 + unaff_r5 + param_4 + 0xe);
  return CONCAT44(param_5,unaff_lr);
}

