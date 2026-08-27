/* FUN_1408dba0 @ 0x1408dba0 */

void FUN_1408dba0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_14075258(param_4);
  iVar2 = FUN_1408b254(param_2,*(undefined2 *)(iVar1 + 2),1);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_1408dc58,param_1,*(undefined2 *)(iVar2 + 0x12),
                 *(undefined2 *)(iVar2 + 0x14));
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_1408dc64,*(undefined1 *)(param_2 + 0x11),*(undefined2 *)(iVar1 + 2));
}

