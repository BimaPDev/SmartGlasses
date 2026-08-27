/* FUN_2c620f0c @ 0x2c620f0c */

undefined4 * FUN_2c620f0c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  FUN_2c628c58();
  puVar1 = (undefined4 *)FUN_2c62c968(DAT_2c620f38);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_2c62c3b0(puVar1,0x14);
    puVar1[2] = param_3;
    *(undefined1 *)(puVar1 + 4) = 0;
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  return puVar1;
}

