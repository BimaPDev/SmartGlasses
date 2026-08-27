/* FUN_2c606bc8 @ 0x2c606bc8 */

void FUN_2c606bc8(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    return;
  }
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

