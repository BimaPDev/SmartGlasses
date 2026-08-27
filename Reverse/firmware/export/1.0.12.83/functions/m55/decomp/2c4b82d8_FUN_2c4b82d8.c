/* FUN_2c4b82d8 @ 0x2c4b82d8 */

void FUN_2c4b82d8(void)

{
  int iVar1;
  
  iVar1 = DAT_2c4b833c;
  FUN_2c4b6bbc(0);
  *(uint *)(iVar1 + 0xb0) = *(uint *)(iVar1 + 0xb0) & 0xfffffff9;
  *(uint *)(iVar1 + 0xbc) = *(uint *)(iVar1 + 0xbc) & 0xfffffffe;
  *(uint *)(iVar1 + 0xb4) = *(uint *)(iVar1 + 0xb4) & 0xffdfffff;
  *(uint *)(iVar1 + 0x788) = *(uint *)(iVar1 + 0x788) & 0xffdfffff;
  *(uint *)(iVar1 + 0x79c) = *(uint *)(iVar1 + 0x79c) & 0xffdfffff;
  *(uint *)(iVar1 + 0x1b8) = *(uint *)(iVar1 + 0x1b8) & 0xfff7ffff;
  FUN_2c673b08(2);
  *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xffff7fff;
  return;
}

