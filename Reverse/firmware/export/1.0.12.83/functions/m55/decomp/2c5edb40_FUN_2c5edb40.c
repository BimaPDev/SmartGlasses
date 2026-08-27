/* FUN_2c5edb40 @ 0x2c5edb40 */

undefined4 FUN_2c5edb40(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_2c5edb80;
  FUN_2c644044(*DAT_2c5edb80,0xffffffff);
  if (*DAT_2c5edb84 != 0) {
    uVar2 = *(undefined4 *)(DAT_2c5edb88 + 0x3ac);
    FUN_2c644080(*puVar1);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5edb94,0x20f,DAT_2c5edb8c,DAT_2c5edb90,DAT_2c5edb8c);
}

