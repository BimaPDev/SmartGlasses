/* FUN_2c573ca0 @ 0x2c573ca0 */

undefined4 * FUN_2c573ca0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar3 = (undefined4 *)param_1[5];
  *param_1 = DAT_2c573d40;
  if (puVar1 != puVar3) {
    do {
      puVar2 = puVar1 + 1;
      puVar1 = (undefined4 *)*puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = DAT_2c573d44;
        if ((undefined4 *)puVar1[0x24] != puVar1 + 0x26) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((undefined4 *)puVar1[0x1e] != puVar1 + 0x20) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((undefined4 *)puVar1[0x13] != puVar1 + 0x15) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((undefined4 *)puVar1[0xd] == puVar1 + 0xf) {
          if ((undefined4 *)puVar1[7] != puVar1 + 9) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
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

