/* FUN_2c4b4ef8 @ 0x2c4b4ef8 */

void FUN_2c4b4ef8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_2c4b4980(0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 1);
    puVar1[5] = param_1;
    FUN_2c64418c(puVar1 + 5,0,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x3f,DAT_2c4b4f4c,DAT_2c4b4f48,DAT_2c4b4f44,DAT_2c4b4f40);
}

