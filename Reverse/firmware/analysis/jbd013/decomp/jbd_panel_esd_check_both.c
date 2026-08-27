/* FUN_2c49921c @ 0x2c49921c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c49921c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c673c88();
  iVar2 = FUN_2c498fe0(0);
  if ((iVar2 != 0) && (iVar2 = FUN_2c498fe0(1), iVar2 != 0)) {
    iVar2 = FUN_2c673c88();
    uVar3 = FUN_2c6741d8(iVar2 - iVar1);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x3f5,_LAB_2c49926c,_LAB_2c499268,_LAB_2c499264,uVar3);
  }
  return 0;
}

