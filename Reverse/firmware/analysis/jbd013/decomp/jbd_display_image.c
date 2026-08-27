/* FUN_2c497bb0 @ 0x2c497bb0 */

void FUN_2c497bb0(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  local_24 = *DAT_2c497cc4;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x285,DAT_2c497cd8,DAT_2c497cdc,DAT_2c497cd4);
  }
  uVar4 = DAT_2c497cc8 & param_2 << 10;
  FUN_2c4c01d0(0x21);
  FUN_2c4c01d0(0x4f);
  FUN_2c497518(0x62);
  FUN_2c497518(uVar4 >> 0x10);
  FUN_2c497518((uVar4 & 0xffff | param_1 & 0x3ff) >> 8);
  FUN_2c497518(param_1 & 0xff);
  FUN_2c497518(0xff);
  FUN_2c497484();
  if (param_1 == 0 && param_2 == 0) {
    FUN_2c4bf3bc(0x280,0x1e0);
  }
  else {
    FUN_2c4bf490(param_4);
  }
  pcVar3 = DAT_2c497ccc;
  FUN_2c4bf454(param_3 + param_1 + param_2 * 0x140);
  cVar1 = *pcVar3;
  uVar2 = DAT_2c497cd0;
  while (DAT_2c497cd0 = uVar2, cVar1 == '\0') {
    FUN_2c6444fc(2);
    uVar2 = DAT_2c497cd0;
    cVar1 = *pcVar3;
  }
  local_2c = 0x4000003;
  local_28 = 8;
  local_30 = uVar2;
  FUN_2c674138(&local_30);
  FUN_2c497518(0);
  FUN_2c4c0158(0x21);
  FUN_2c4c0158(0x4f);
  local_28 = 8;
  local_2c = 0x8000003;
  local_30 = uVar2;
  FUN_2c674138(&local_30);
  if (*DAT_2c497cc4 != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

