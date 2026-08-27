/* FUN_2c586214 @ 0x2c586214 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c586214(int param_1)

{
  int iVar1;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [4];
  int iStack_14;
  
  iStack_14 = *_LAB_2c58628c;
  iVar1 = FUN_2c5924e4();
  if (iVar1 == 0) {
    FUN_2c593ae0(param_1,_LAB_2c586290);
    puStack_2c = auStack_24;
    FUN_2c585ec4(&puStack_2c,_LAB_2c586294 + -7);
    func_0x2c592190(param_1,&puStack_2c);
    if (puStack_2c != auStack_24) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (*_LAB_2c58628c == iStack_14) {
      return;
    }
  }
  else {
    FUN_2c5924ec();
    if (*_LAB_2c58628c == iStack_14) {
      uStack_28 = DAT_2c5921fc;
      auStack_24[0] = *(undefined4 *)(param_1 + 0xc);
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c592204,0xc4,DAT_2c592200);
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

