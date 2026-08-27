/* FUN_14094ab4 @ 0x14094ab4 */

undefined4 FUN_14094ab4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x350);
  if (iVar2 != 0) {
    FUN_140755e4();
    uVar1 = FUN_14079a70(iVar2);
    FUN_1407561c();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x40,DAT_14094ae4);
}

