/* FUN_2c6523d4 @ 0x2c6523d4 */

int FUN_2c6523d4(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((char)param_1[7] == '\x01') {
    if (param_2 != param_3) {
      FUN_2c674668(param_4,param_2,param_3 - param_2,param_4,param_1,param_2,param_3);
    }
    return param_3;
  }
  if ((char)param_1[7] == '\0') {
    FUN_2c651b36();
  }
                    /* WARNING: Could not recover jumptable at 0x2c652410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_2,param_3,param_4);
  return iVar1;
}

