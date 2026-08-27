/* FUN_140c5558 @ 0x140c5558 */

int FUN_140c5558(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((char)param_1[7] == '\x01') {
    if (param_2 != param_3) {
      FUN_140e5278(param_4,param_2,param_3 - param_2,param_4,param_1,param_2,param_3);
    }
    return param_3;
  }
  if ((char)param_1[7] == '\0') {
    FUN_140c4cba();
  }
                    /* WARNING: Could not recover jumptable at 0x140c5594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_2,param_3,param_4);
  return iVar1;
}

