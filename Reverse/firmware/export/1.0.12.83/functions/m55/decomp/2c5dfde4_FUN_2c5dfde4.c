/* FUN_2c5dfde4 @ 0x2c5dfde4 */

void FUN_2c5dfde4(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x28);
  if (bVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5dfe84,0x2d3,DAT_2c5dfe80,DAT_2c5dfe8c,*(undefined4 *)(param_2 + 0xc),
                 *(undefined1 *)(param_1 + 0x54));
  }
  if (bVar1 < 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5dfe84,0x2e8,DAT_2c5dfe80,DAT_2c5dfe7c,*(undefined4 *)(param_2 + 0xc),bVar1
                );
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5dfe84,0x2de,DAT_2c5dfe80,DAT_2c5dfe88,*(undefined4 *)(param_2 + 0xc),bVar1,
               *(undefined1 *)(param_1 + 0x54));
}

