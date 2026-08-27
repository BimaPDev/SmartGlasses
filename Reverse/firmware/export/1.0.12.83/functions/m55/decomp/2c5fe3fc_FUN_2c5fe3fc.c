/* FUN_2c5fe3fc @ 0x2c5fe3fc */

void FUN_2c5fe3fc(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*DAT_2c5fe45c;
  if (uVar2 == 1) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x9e,DAT_2c5fe470,DAT_2c5fe46c,DAT_2c5fe478);
  }
  uVar1 = DAT_2c5fe474;
  if (uVar2 < 3) {
    uVar1 = *(undefined4 *)(DAT_2c5fe460 + uVar2 * 4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xa4,DAT_2c5fe470,DAT_2c5fe46c,DAT_2c5fe468,uVar1,DAT_2c5fe464);
}

