/* FUN_14094f84 @ 0x14094f84 */

void FUN_14094f84(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_14094fd4;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  FUN_140755e4();
  iVar2 = FUN_140e5558(puVar1,param_1);
  if (iVar2 == 0) {
    FUN_140e59c8(puVar1,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_14094fdc,DAT_14094fd8,(undefined4 *)*puVar1,*(undefined4 *)*puVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_14094fe0,DAT_14094fd8);
}

