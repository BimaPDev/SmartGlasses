/* FUN_140c4b90 @ 0x140c4b90 */

int FUN_140c4b90(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return DAT_140c4bb0;
  }
  if (param_1 != 0) {
    iVar2 = param_2 - param_1 >> 2;
    iVar1 = FUN_140c464c(iVar2,0,param_3,param_4);
    FUN_140c45be(iVar1 + 0xc,param_1,param_2);
    FUN_140c4634(iVar1,iVar2);
    return iVar1 + 0xc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140cb800(DAT_140c4bac);
}

