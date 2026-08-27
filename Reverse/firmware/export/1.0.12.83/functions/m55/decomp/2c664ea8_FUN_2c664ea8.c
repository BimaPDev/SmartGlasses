/* FUN_2c664ea8 @ 0x2c664ea8 */

undefined4
FUN_2c664ea8(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,int param_7,int *param_8)

{
  int iVar1;
  
  if ((param_5 == param_7) && (iVar1 = FUN_2c6650f4(param_1,param_6), iVar1 != 0)) {
    *(undefined1 *)((int)param_8 + 5) = param_3;
  }
  else {
    iVar1 = FUN_2c6650f4(param_1,param_4);
    if (iVar1 != 0) {
      *param_8 = param_5;
      *(undefined1 *)(param_8 + 1) = param_3;
      *(undefined1 *)((int)param_8 + 6) = 1;
    }
  }
  return 0;
}

