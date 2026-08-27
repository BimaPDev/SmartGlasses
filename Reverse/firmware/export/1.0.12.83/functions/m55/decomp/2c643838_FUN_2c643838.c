/* FUN_2c643838 @ 0x2c643838 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c643838(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_2c674098(0,_LAB_2c643890);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c643894);
  }
  iVar2 = FUN_2c4c2564(0,0);
  puVar1 = _LAB_2c643898;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c64389c);
  }
  do {
    iVar2 = func_0x2c674718();
    if (iVar2 == 0) {
      uVar4 = func_0x2c645728();
      func_0x2c643834();
      func_0x2c64575c(uVar4);
    }
    uVar3 = FUN_2c673c88();
    if ((int)((*puVar1 ^ uVar3) << 1) < 0) {
      func_0x2c674258();
    }
    *puVar1 = uVar3;
    func_0x2c673988();
  } while( true );
}

