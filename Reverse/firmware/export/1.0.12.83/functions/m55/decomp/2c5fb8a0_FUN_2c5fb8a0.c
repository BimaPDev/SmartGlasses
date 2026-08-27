/* FUN_2c5fb8a0 @ 0x2c5fb8a0 */

undefined4 * FUN_2c5fb8a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)*param_1;
    puVar1 = (undefined4 *)(*(code *)*puVar2)(1,0x18);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5fb8ec,0x16,DAT_2c5fb8e8,DAT_2c5fb8e4);
    }
    puVar1[5] = param_1;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 2;
    *puVar1 = puVar2;
    puVar1[1] = param_1;
  }
  return puVar1;
}

