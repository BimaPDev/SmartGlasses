/* FUN_2c4ebf7c @ 0x2c4ebf7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ebf7c(void)

{
  int iVar1;
  int iStack_18;
  code *pcStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c4ebff0;
  uStack_10 = 0;
  iStack_18 = 0;
  pcStack_14 = (code *)0x0;
  iVar1 = FUN_2c645190(*_LAB_2c4ebfec,&iStack_18,0);
  if (iVar1 == 0) {
    if (iStack_18 == 0) {
      if (pcStack_14 != (code *)0x0) {
        (*pcStack_14)(uStack_10);
      }
    }
    else {
      iVar1 = lv_mem_alloc(0xc);
      if (iVar1 != 0) {
        FUN_2c62c0d8(iVar1,&iStack_18,0xc);
        iVar1 = FUN_2c62bdd8(_LAB_2c4ebff4,iStack_18,iVar1);
        if (iVar1 != 0) {
          FUN_2c62be70(iVar1,1);
        }
      }
    }
  }
  if (*_LAB_2c4ebff0 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

