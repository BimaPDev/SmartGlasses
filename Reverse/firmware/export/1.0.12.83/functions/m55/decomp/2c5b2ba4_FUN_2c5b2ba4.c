/* FUN_2c5b2ba4 @ 0x2c5b2ba4 */

void FUN_2c5b2ba4(void)

{
  undefined1 auStack_50 [4];
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  int local_c;
  
  local_c = *DAT_2c5b2c08;
  FUN_2c674268(auStack_50,0,0x44,0);
  local_3c = DAT_2c5b2c10;
  uStack_38 = DAT_2c5b2c0c;
  local_4c = FUN_2c5e2e8c(DAT_2c5b2c14);
  local_28 = 1;
  local_24 = DAT_2c5b2c18;
  local_2c = 0x4045;
  local_34 = 0x4012;
  uStack_30 = 0x4013;
  FUN_2c5e8f4c(auStack_50);
  if (*DAT_2c5b2c08 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

