/* FUN_2c4aa970 @ 0x2c4aa970 */

undefined4 FUN_2c4aa970(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_2c4aa8e0(param_1,param_1 + 0x36,2);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_2c4aa73c(param_1,puVar1[1],*puVar1,*(undefined2 *)(param_1 + 0x1d4));
    *(undefined4 *)(param_1 + 0xb0) = *puVar1;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x4f0,DAT_2c4aa9cc,DAT_2c4aa9c8,DAT_2c4aa9c4,*(undefined1 *)(param_1 + 0xa0),DAT_2c4aa9c0)
  ;
}

