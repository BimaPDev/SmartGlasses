/* FUN_2c4fc8a8 @ 0x2c4fc8a8 */

void FUN_2c4fc8a8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_3c [12];
  uint local_30 [3];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  local_1c = *DAT_2c4fc93c;
  uVar1 = FUN_2c4fd448();
  if ((param_1 == 4) || (param_1 == 2)) {
    local_30[1] = 0;
    local_30[0] = param_1 & 0xff;
    local_24 = DAT_2c4fc940;
    local_30[2] = param_2;
    local_20 = param_4;
    FUN_2c4f94ac(0x30,local_30,0x14);
    uVar1 = FUN_2c646854();
    *DAT_2c4fc944 = uVar1;
    FUN_2c644134(auStack_3c,0x200,0xffffffff);
    FUN_2c674668(param_3,local_24,param_4);
    if (*DAT_2c4fc93c == local_1c) {
      return;
    }
  }
  else if (*DAT_2c4fc93c == local_1c) {
    FUN_2c673d28(uVar1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

