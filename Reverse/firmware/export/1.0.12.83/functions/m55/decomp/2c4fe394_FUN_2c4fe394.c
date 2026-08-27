/* FUN_2c4fe394 @ 0x2c4fe394 */

void FUN_2c4fe394(int param_1)

{
  if (*(code **)(param_1 + 0x10c) == (code *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x2c4fe3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10c))
              (*(undefined4 *)(param_1 + 0x124),
               (int)((uint)*(ushort *)(*(int *)(param_1 + 0x48) + 0x18) << 0x10) >> 0x14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c4fe3e4,0x56c,DAT_2c4fe3e0,DAT_2c4fe3dc,DAT_2c4fe3d8);
}

