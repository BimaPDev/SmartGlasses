/* FUN_2c48b9e4 @ 0x2c48b9e4 */

undefined4 FUN_2c48b9e4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_2c4a99c8();
    FUN_2c648600(DAT_2c48ba20,*param_1,*(undefined2 *)(param_1 + 2),param_1[1],
                 *(undefined2 *)((int)param_1 + 10));
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x4e0,DAT_2c48ba2c,DAT_2c48ba28,DAT_2c48ba24);
}

