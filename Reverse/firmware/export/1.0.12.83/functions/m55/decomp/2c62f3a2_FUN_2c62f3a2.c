/* FUN_2c62f3a2 @ 0x2c62f3a2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c62f3a2(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_2c647174();
  *_LAB_2c62f414 = iVar2;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(0,0xc6,_LAB_2c62f42c,_LAB_2c62f428,_LAB_2c62f430);
  }
  uVar3 = FUN_2c6440f0(_LAB_2c62f418,0);
  uVar1 = _LAB_2c62f420;
  *_LAB_2c62f41c = uVar3;
  iVar2 = FUN_2c64418c(uVar1,1,0);
  if (iVar2 != 0) {
    iVar2 = FUN_2c6448b4(iVar2,0x10);
    if (iVar2 == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(0,0xd6,_LAB_2c62f42c,_LAB_2c62f428,_LAB_2c62f424);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(0,0xd0,_LAB_2c62f42c,_LAB_2c62f428,_LAB_2c62f434);
}

