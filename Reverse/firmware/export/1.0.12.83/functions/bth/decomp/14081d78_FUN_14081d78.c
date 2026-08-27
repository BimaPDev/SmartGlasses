/* FUN_14081d78 @ 0x14081d78 */

void FUN_14081d78(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_140dd3a4(param_2), iVar1 != 0)) {
    if (*(byte *)(param_1 + 0xec) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14081dc8,*(undefined1 *)(param_1 + 0xc),DAT_14081dc4,
                   *(byte *)(param_1 + 0xec));
    }
    FUN_1407edac(param_1,DAT_14081dc0,param_2,iVar1,1,0xff);
  }
  return;
}

