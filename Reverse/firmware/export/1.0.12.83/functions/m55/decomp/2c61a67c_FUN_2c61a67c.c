/* FUN_2c61a67c @ 0x2c61a67c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c61a67c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    puVar2 = (undefined4 *)FUN_2c62c968(param_1 + 0x30);
    lv_style_init_or_reset(puVar2 + 2);
    uVar1 = _LAB_2c61a6c0;
    puVar2[1] = param_1;
    *puVar2 = uVar1;
    *(byte *)(puVar2 + 4) = *(byte *)(puVar2 + 4) | 1;
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 8;
    FUN_2c607df0(param_1);
    FUN_2c607588(param_1);
    return puVar2;
  }
  return (undefined4 *)0x0;
}

