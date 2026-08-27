/* FUN_2c4e8b68 @ 0x2c4e8b68 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e8b68(void)

{
  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c4e8bb8;
  iVar1 = FUN_2c4e9354();
  (**(code **)(iVar1 + 0x54))(&uStack_14);
  iVar1 = FUN_2c4e9354();
  (**(code **)(iVar1 + 0x58))(_LAB_2c4e8bbc,uStack_14);
  iVar1 = FUN_2c4e9354();
  (**(code **)(iVar1 + 0x58))(_LAB_2c4e8bc0,uStack_10);
  if (*_LAB_2c4e8bb8 == iStack_c) {
    return _LAB_2c4e8bc4;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

