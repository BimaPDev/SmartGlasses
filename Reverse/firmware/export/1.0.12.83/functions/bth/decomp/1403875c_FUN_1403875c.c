/* FUN_1403875c @ 0x1403875c */

void FUN_1403875c(void)

{
  int iVar1;
  
  iVar1 = DAT_14038784;
  *(uint *)(DAT_14038784 + 0x24) = *(uint *)(DAT_14038784 + 0x24) & 0xffffffdf;
  *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 0x40000;
  FUN_1402e558(10);
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x80080;
  return;
}

