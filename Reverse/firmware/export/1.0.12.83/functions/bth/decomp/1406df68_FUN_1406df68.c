/* FUN_1406df68 @ 0x1406df68 */

void FUN_1406df68(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_1406df9c + (param_1 + 6) * 4);
  if (iVar1 != 0) {
    FUN_140587d4(iVar1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_1406dfa4,0x1a2,DAT_1406dfa0);
}

