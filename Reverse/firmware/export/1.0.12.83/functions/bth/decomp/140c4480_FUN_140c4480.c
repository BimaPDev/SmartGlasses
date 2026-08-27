/* FUN_140c4480 @ 0x140c4480 */

int FUN_140c4480(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == param_2) {
    return DAT_140c44a0;
  }
  if (param_1 != 0) {
    iVar1 = FUN_140c3ee8(param_2 - param_1,0,param_3,param_4);
    FUN_140c3e44(iVar1 + 0xc,param_1,param_2);
    FUN_140c3ed0(iVar1,param_2 - param_1);
    return iVar1 + 0xc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140cb800(DAT_140c449c);
}

