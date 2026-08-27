/* FUN_2c49b23c @ 0x2c49b23c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49b23c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_2c674658();
  iVar2 = func_0x2c4c1a1c();
  uVar3 = (uint)(iVar1 == 0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x380,_LAB_2c49b2bc,_LAB_2c49b2b8,_LAB_2c49b2b4,*_LAB_2c49b2a4,*_LAB_2c49b2b0,uVar3,
          *_LAB_2c49b2a8);
  }
  if (*_LAB_2c49b2a4 == '\0') {
    if (*_LAB_2c49b2a8 != uVar3) {
      *_LAB_2c49b2a8 = uVar3;
      func_0x2c4c1664(0x80);
      *_LAB_2c49b2ac = *_LAB_2c49b2ac + 1;
      return;
    }
  }
  else {
    *_LAB_2c49b2a4 = '\0';
  }
  return;
}

