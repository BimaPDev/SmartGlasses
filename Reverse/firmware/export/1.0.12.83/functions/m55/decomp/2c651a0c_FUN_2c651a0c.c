/* FUN_2c651a0c @ 0x2c651a0c */

int FUN_2c651a0c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return DAT_2c651a2c;
  }
  if (param_1 != 0) {
    iVar2 = param_2 - param_1 >> 2;
    iVar1 = FUN_2c6514c8(iVar2,0,param_3,param_4);
    FUN_2c65143a(iVar1 + 0xc,param_1,param_2);
    FUN_2c6514b0(iVar1,iVar2);
    return iVar1 + 0xc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c658674(DAT_2c651a28);
}

