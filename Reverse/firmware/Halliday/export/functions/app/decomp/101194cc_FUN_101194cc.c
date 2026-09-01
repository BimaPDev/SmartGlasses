/* FUN_101194cc @ 0x101194cc */

void FUN_101194cc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_10119374(param_1,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_101194f4,0x140,0,DAT_101194f0);
  }
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = 1;
  return;
}

