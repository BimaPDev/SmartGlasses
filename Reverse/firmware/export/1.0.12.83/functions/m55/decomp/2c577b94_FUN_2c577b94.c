/* FUN_2c577b94 @ 0x2c577b94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c577b94(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_1[9];
  *param_1 = _LAB_2c577c34;
  if (puVar1 == (undefined4 *)0x0) {
    *param_1 = _LAB_2c577c40;
    if ((undefined4 *)param_1[3] != param_1 + 5) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,param_1);
  }
  *puVar1 = _LAB_2c577c38;
  if ((undefined4 *)puVar1[0xd] != puVar1 + 0xf) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar1[7] != puVar1 + 9) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puVar2 = (undefined4 *)puVar1[4];
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = _LAB_2c577c3c;
    if ((undefined4 *)puVar2[7] != puVar2 + 9) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puVar2[4] != 0) {
      FUN_2c58d410(puVar2 + 4);
    }
    if (puVar2[3] != 0) {
      FUN_2c58d410(puVar2 + 3);
    }
    if (puVar2[2] != 0) {
      FUN_2c58d410(puVar2 + 2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,puVar1);
}

