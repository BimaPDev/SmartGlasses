/* FUN_2c4e8930 @ 0x2c4e8930 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e8930(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = func_0x2c4efeec(*param_2);
  if ((uVar1 & 0xff) < 5) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xbe,_LAB_2c4e8a0c,_LAB_2c4e8a08,_LAB_2c4e8a04,uVar1);
  }
  iVar2 = FUN_2c4e861c();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xbe,_LAB_2c4e8a0c,_LAB_2c4e8a08,_LAB_2c4e8a04,uVar1);
  }
  return _LAB_2c4e8a1c;
}

