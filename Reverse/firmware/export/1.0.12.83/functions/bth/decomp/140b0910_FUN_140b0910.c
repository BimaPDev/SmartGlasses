/* FUN_140b0910 @ 0x140b0910 */

void FUN_140b0910(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_14095e18();
  if ((iVar1 != 0) && (iVar1 = FUN_140959dc(), iVar1 == 2)) {
    FUN_1402a6e8(4,0xfd,DAT_140b0960,LAB_140b095c,DAT_140b0958);
    FUN_14096cb8(param_1);
    iVar1 = FUN_140959e4();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x710,DAT_140b0964);
    }
  }
  return;
}

