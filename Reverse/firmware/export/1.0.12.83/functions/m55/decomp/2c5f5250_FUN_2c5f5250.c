/* FUN_2c5f5250 @ 0x2c5f5250 */

undefined4 *
FUN_2c5f5250(undefined4 *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)*param_1)(1,0x4c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    *(undefined2 *)(puVar1 + 0xd) = param_2;
    *(undefined2 *)((int)puVar1 + 0x36) = 1;
    puVar1[9] = param_3;
    puVar1[0x12] = 0;
    puVar1[10] = param_4;
    puVar1[0xb] = param_3;
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5f52a0,0x5c,DAT_2c5f529c,DAT_2c5f5298);
}

