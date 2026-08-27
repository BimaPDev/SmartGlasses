/* FUN_14069108 @ 0x14069108 */

undefined2 FUN_14069108(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_14069158 + (param_1 + 0x22) * 4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14069160,0x508,DAT_1406915c);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 4);
  if (iVar1 != 0) {
    return *(undefined2 *)(iVar1 + 0xc);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_14069160,0x509,DAT_1406915c);
}

