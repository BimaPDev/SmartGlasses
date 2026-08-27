/* FUN_140da8c8 @ 0x140da8c8 */

void FUN_140da8c8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_140da900;
  iVar2 = DAT_140da900;
  if (param_3 != 0) {
    iVar1 = DAT_140da8f8;
    iVar2 = param_3;
  }
  FUN_140dad74(*(undefined4 *)(*DAT_140da8f4 + 0xc),DAT_140da8fc,param_4,param_1,param_2,iVar1,iVar2
               ,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_140da8b8();
}

