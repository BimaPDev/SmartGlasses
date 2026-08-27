/* FUN_2c5ee8b8 @ 0x2c5ee8b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5ee8b8(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = _LAB_2c5ee914;
  puVar1 = _LAB_2c5ee910;
  FUN_2c644044(*_LAB_2c5ee910,0xffffffff);
  FUN_2c5efec0(*(undefined4 *)(iVar2 + 0x2d0));
  iVar3 = FUN_2c5efa10();
  if (iVar3 == 0) {
    uVar4 = func_0x2c5eff00(*(undefined4 *)(iVar2 + 0x2d0));
    FUN_2c644080(*puVar1);
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5ee920,0x6fb,_LAB_2c5ee918,_LAB_2c5ee91c,_LAB_2c5ee918);
}

