/* FUN_2c5ee84c @ 0x2c5ee84c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5ee84c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = _LAB_2c5ee8a8;
  puVar1 = _LAB_2c5ee8a4;
  FUN_2c644044(*_LAB_2c5ee8a4,0xffffffff);
  FUN_2c5efec0(*(undefined4 *)(iVar2 + 0x2d0));
  iVar3 = FUN_2c5efa10();
  if (iVar3 == 0) {
    uVar4 = func_0x2c5efee8(*(undefined4 *)(iVar2 + 0x2d0));
    FUN_2c644080(*puVar1);
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5ee8b4,0x6ec,_LAB_2c5ee8ac,_LAB_2c5ee8b0,_LAB_2c5ee8ac);
}

