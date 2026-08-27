/* FUN_2c5efdc4 @ 0x2c5efdc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c5efdc4(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_2c5fee3c(param_1,0x14);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[4] = param_1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5efe04,0x20c,_LAB_2c5efdfc,_LAB_2c5efe00,_LAB_2c5efdfc);
}

