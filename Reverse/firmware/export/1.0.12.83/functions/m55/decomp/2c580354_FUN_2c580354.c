/* FUN_2c580354 @ 0x2c580354 */

undefined4 * FUN_2c580354(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar3 = (undefined4 *)param_1[5];
  *param_1 = DAT_2c58042c;
  if (puVar1 != puVar3) {
    do {
      puVar2 = puVar1 + 1;
      puVar1 = (undefined4 *)*puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = DAT_2c580430;
        if ((undefined4 *)puVar1[0x33] != puVar1 + 0x35) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((undefined4 *)puVar1[0x2d] != puVar1 + 0x2f) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((undefined4 *)puVar1[0x27] != puVar1 + 0x29) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((undefined4 *)puVar1[0x21] != puVar1 + 0x23) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((undefined4 *)puVar1[0x1b] != puVar1 + 0x1d) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((undefined4 *)puVar1[0x15] != puVar1 + 0x17) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((undefined4 *)puVar1[0xf] != puVar1 + 0x11) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((undefined4 *)puVar1[8] == puVar1 + 10) {
          if ((undefined4 *)puVar1[1] == puVar1 + 3) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar1);
          }
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      puVar1 = puVar2;
    } while (puVar3 != puVar2);
    puVar3 = (undefined4 *)param_1[4];
  }
  if (puVar3 == (undefined4 *)0x0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,puVar3);
}

