/* FUN_1408e504 @ 0x1408e504 */

int FUN_1408e504(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1407522c(param_1 + 9U & 0xffff,param_3,param_4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = param_2;
    FUN_140754ec(iVar1,9);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_1408e53c,param_1);
}

