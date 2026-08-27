/* FUN_2c6512fc @ 0x2c6512fc */

int FUN_2c6512fc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == param_2) {
    return DAT_2c65131c;
  }
  if (param_1 != 0) {
    iVar1 = FUN_2c650d64(param_2 - param_1,0,param_3,param_4);
    FUN_2c650cc0(iVar1 + 0xc,param_1,param_2);
    FUN_2c650d4c(iVar1,param_2 - param_1);
    return iVar1 + 0xc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c658674(DAT_2c651318);
}

