/* FUN_2c488880 @ 0x2c488880 */

void FUN_2c488880(undefined1 param_1)

{
  int iVar1;
  undefined1 auStack_170 [168];
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [36];
  undefined1 auStack_74 [36];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [36];
  undefined1 uStack_1c;
  undefined1 auStack_1b [3];
  undefined1 auStack_18 [4];
  int iStack_14;
  
  iStack_14 = *DAT_2c488944;
  FUN_2c674268(auStack_170,0,0x15c,0);
  iVar1 = FUN_2c4eab7c();
  (**(code **)(iVar1 + 100))(1,auStack_170,0xa8);
  iVar1 = FUN_2c4eab7c();
  (**(code **)(iVar1 + 100))(2,auStack_c8,0x30);
  iVar1 = FUN_2c4eab7c();
  (**(code **)(iVar1 + 100))(3,auStack_98,0x24);
  iVar1 = FUN_2c4eab7c();
  (**(code **)(iVar1 + 100))(4,auStack_74,0x24);
  iVar1 = FUN_2c4eab7c();
  (**(code **)(iVar1 + 0x6c))(auStack_50,0x10);
  iVar1 = FUN_2c4eab7c();
  (**(code **)(iVar1 + 0x74))(auStack_40,0x24);
  iVar1 = FUN_2c4eab7c();
  (**(code **)(iVar1 + 0x7c))(auStack_1b);
  iVar1 = FUN_2c4eab7c();
  (**(code **)(iVar1 + 0x84))(auStack_18);
  uStack_1c = param_1;
  FUN_2c49737c(0x29,auStack_170,0x15c);
  if (*DAT_2c488944 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

