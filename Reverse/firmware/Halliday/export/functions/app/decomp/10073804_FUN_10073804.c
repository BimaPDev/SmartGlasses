/* FUN_10073804 @ 0x10073804 */

int FUN_10073804(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_10072c84(0xffffffff,0xffffffff,param_3,param_4,param_1);
  iVar1 = FUN_10073004(DAT_10073854,param_1,param_2,param_3);
  if (iVar1 < 0) {
    iVar1 = FUN_10073004(DAT_10073858,param_1,param_2);
    if (iVar1 < 0) {
      iVar1 = FUN_10073004(DAT_1007385c,param_1,param_2,param_3);
    }
  }
  FUN_10072c78();
  return iVar1;
}

