/* FUN_2c4d10bc @ 0x2c4d10bc */

void FUN_2c4d10bc(void)

{
  int iVar1;
  undefined4 in_r3;
  
  iVar1 = FUN_2c4dc50c(1,0x100c,0x1000,in_r3,in_r3);
  if (iVar1 != 0) {
    *(int *)(iVar1 + (4U - iVar1 & 7)) = iVar1;
  }
  return;
}

