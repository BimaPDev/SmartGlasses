/* FUN_2c490450 @ 0x2c490450 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c490450(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x130,_LAB_2c4904b4,_LAB_2c4904b0,_LAB_2c4904ac,_LAB_2c4904a8);
  }
  param_3 = param_3 * param_2;
  iVar1 = *param_4;
  iVar2 = param_4[1];
  if (iVar1 == iVar2) {
    if (param_3 != 0) {
      return 0;
    }
  }
  else if (iVar2 < param_3 + iVar1) {
    param_3 = iVar2 - iVar1;
  }
  FUN_2c674668(param_1,param_4[2] + iVar1,param_3);
  *param_4 = *param_4 + param_3;
  return param_3;
}

