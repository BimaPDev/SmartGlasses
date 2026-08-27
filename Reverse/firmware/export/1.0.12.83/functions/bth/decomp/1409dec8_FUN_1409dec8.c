/* FUN_1409dec8 @ 0x1409dec8 */

void FUN_1409dec8(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_1409df24;
  if (1 < *(int *)(param_1 + 8) - 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1409df30);
  }
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 < 6) {
    FUN_1402a6e8(4,0xca,DAT_1409df2c,DAT_1409df28,DAT_1409df20,*(int *)(param_1 + 8),
                 *(undefined1 *)(param_1 + 6),bVar1);
    FUN_1409de74(*puVar2);
    FUN_1409e894(*puVar2,param_1);
    FUN_1409de74(*puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_1409df34,bVar1);
}

