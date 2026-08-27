/* FUN_2c50233c @ 0x2c50233c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50233c(void)

{
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined4 uStack_24;
  int iStack_c;
  
  iStack_c = *_LAB_2c5023a4;
  FUN_2c674268(auStack_50,0,0x44,0);
  uStack_3c = _LAB_2c5023ac;
  uStack_38 = _LAB_2c5023a8;
  uStack_4c = FUN_2c5e2e8c(_LAB_2c5023b0);
  uStack_34 = 0x1035;
  uStack_24 = _LAB_2c5023b4;
  uStack_28 = 1;
  uStack_30 = 0x4013;
  uStack_2c = 0x4045;
  FUN_2c5e8f4c(auStack_50);
  *_LAB_2c5023b8 = 1;
  if (*_LAB_2c5023a4 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

