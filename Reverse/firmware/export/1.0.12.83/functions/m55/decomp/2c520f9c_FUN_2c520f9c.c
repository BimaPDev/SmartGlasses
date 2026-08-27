/* FUN_2c520f9c @ 0x2c520f9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c520f9c(undefined4 param_1)

{
  undefined1 auStack_60 [12];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_c;
  
  iStack_c = *_LAB_2c520ff8;
  FUN_2c674268(auStack_60,0,0x50,0);
  uStack_50 = registry_lookup(0x1001);
  uStack_48 = _LAB_2c520ffc;
  uStack_54 = FUN_2c5e2e8c(_LAB_2c521000);
  uStack_4c = registry_lookup(param_1);
  FUN_2c5e8f34(auStack_60);
  if (*_LAB_2c520ff8 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

