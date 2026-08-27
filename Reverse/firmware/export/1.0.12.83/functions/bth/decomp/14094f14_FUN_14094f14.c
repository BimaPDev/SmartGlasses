/* FUN_14094f14 @ 0x14094f14 */

void FUN_14094f14(void)

{
  int iVar1;
  
  iVar1 = DAT_14094f5c;
  *(int *)DAT_14094f5c = DAT_14094f5c;
  *(int *)(iVar1 + 4) = iVar1;
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_14094f68,DAT_14094f64,iVar1,iVar1);
}

