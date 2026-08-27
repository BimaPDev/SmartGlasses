/* FUN_140a509c @ 0x140a509c */

void FUN_140a509c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 != 1) {
    return;
  }
  iVar1 = FUN_1402d20c(0,DAT_140a5478,DAT_140a5474,0,param_4);
  if (iVar1 == 0) {
    iVar1 = FUN_1402d238();
    if (iVar1 == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140a5480,iVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140a547c,iVar1);
}

