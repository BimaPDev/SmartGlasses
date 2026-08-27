/* FUN_140b706c @ 0x140b706c */

void FUN_140b706c(void)

{
  int iVar1;
  undefined4 in_r3;
  
  iVar1 = FUN_140b9444(1,0x200c,0x2000,in_r3,in_r3);
  if (iVar1 != 0) {
    *(int *)(iVar1 + (4U - iVar1 & 7)) = iVar1;
  }
  return;
}

