/* FUN_2c606bce @ 0x2c606bce */

void FUN_2c606bce(int param_1)

{
  int iVar1;
  
  *DAT_2c606c00 = *DAT_2c606c00 + 1;
  iVar1 = lv_mem_alloc(0x1c);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 != 0) {
    FUN_2c62c3b0(iVar1,0x1c);
    *(byte *)(*(int *)(param_1 + 8) + 0x19) = *(byte *)(*(int *)(param_1 + 8) + 0x19) | 0xf;
    *(byte *)(*(int *)(param_1 + 8) + 0x18) = *(byte *)(*(int *)(param_1 + 8) + 0x18) | 3;
  }
  return;
}

