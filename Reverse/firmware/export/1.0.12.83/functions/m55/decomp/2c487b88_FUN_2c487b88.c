/* FUN_2c487b88 @ 0x2c487b88 */

void FUN_2c487b88(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_2c487c34;
  uVar1 = DAT_2c487c30;
  if (((param_1 != 0) && (param_2 != 0)) && (*DAT_2c487c2c == '\0')) {
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    *(undefined1 *)(param_1 + param_2) = 10;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x23b,DAT_2c487c44,DAT_2c487c3c,uVar2,uVar1);
  }
  return;
}

