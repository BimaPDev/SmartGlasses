/* FUN_2c4dcffc @ 0x2c4dcffc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4dcffc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iStack_18;
  int iStack_14;
  
  param_2 = param_2 * param_3;
  iStack_14 = *_LAB_2c4dd07c;
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,param_2);
  iStack_18 = iVar1;
  if (iVar1 == 0) {
    FUN_2c4e34f4(0x96f1,0x26,1);
    FUN_2c4e0504(_LAB_2c4dd084,0,0,0,_LAB_2c4dd08c,0x26,_LAB_2c4dd088,0x1300,_LAB_2c4dd080,param_2);
    (**(code **)(*param_1 + 0x10))(param_1,&iStack_18);
  }
  else {
    FUN_2c674268(iVar1,0,param_2);
    iVar1 = iStack_18;
  }
  if (*_LAB_2c4dd07c != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar1;
}

