/* FUN_100bbbfc @ 0x100bbbfc */

void FUN_100bbbfc(void)

{
  uint uVar1;
  undefined4 in_r3;
  
  FUN_10136844(0);
  FUN_1013684e(0);
  FUN_10136892();
  FUN_101368aa(1);
  uVar1 = DAT_100bbc3c;
  *DAT_100bbc38 = 1;
  FUN_100a5b78(uVar1 | ((int)PTR_DAT_100bbc44 - (int)PTR_DAT_100bbc40) * 0x20 & 0xff00U,
               PTR_s_bt_manager_halt_phone_100bbc48,PTR_s_BMC_halt_phone_100bbc4c,in_r3);
  return;
}

