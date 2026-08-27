/* FUN_2c4a1470 @ 0x2c4a1470 */

void FUN_2c4a1470(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_2c674268(param_1 + 0x1c,0,0x20);
  puVar2 = (undefined1 *)(param_1 + 8);
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 2;
    puVar2[0xb] = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined1 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x3f6,DAT_2c4a14b8,DAT_2c4a14b4,DAT_2c4a14b0);
}

