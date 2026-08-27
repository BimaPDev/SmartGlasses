/* FUN_2c5bd474 @ 0x2c5bd474 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c5bd474(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  FUN_2c620f0c(0x1f42,_LAB_2c5bd4bc);
  FUN_2c620f0c(0xfa8,_LAB_2c5bd4c0,param_1);
  FUN_2c620f0c(0xfa9,_LAB_2c5bd4c4,param_1);
  FUN_2c620f0c(0xfaa,_LAB_2c5bd4c8,param_1);
  uVar1 = _LAB_2c5bd4cc;
  FUN_2c628c58();
  puVar2 = (undefined4 *)FUN_2c62c968(DAT_2c620f38);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_2c62c3b0(puVar2,0x14);
    puVar2[2] = param_1;
    *(undefined1 *)(puVar2 + 4) = 0;
    *puVar2 = 0xfab;
    puVar2[1] = uVar1;
  }
  return puVar2;
}

