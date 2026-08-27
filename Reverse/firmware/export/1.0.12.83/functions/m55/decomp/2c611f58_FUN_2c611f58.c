/* FUN_2c611f58 @ 0x2c611f58 */

void FUN_2c611f58(short *param_1,short param_2,short param_3,int param_4,short param_5,
                 undefined4 param_6,char param_7)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  int local_24;
  
  local_24 = *DAT_2c61209c;
  if ((param_4 == 0) && (param_5 == 0x100)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = param_2 + -1;
    param_1[3] = param_3 + -1;
  }
  else {
    local_34 = 0;
    local_32 = 0;
    local_2e = 0;
    local_2c = 0;
    local_30 = param_2;
    local_2a = param_3;
    local_28 = param_2;
    local_26 = param_3;
    FUN_2c62ab04(&local_34,param_4);
    FUN_2c62ab04(&local_30,param_4,param_5,param_6);
    FUN_2c62ab04(&local_2c,param_4,param_5,param_6);
    FUN_2c62ab04(&local_28,param_4,param_5,param_6);
    sVar1 = local_28;
    if (local_2c <= local_28) {
      sVar1 = local_2c;
    }
    sVar2 = local_2c;
    if (local_2c < local_28) {
      sVar2 = local_28;
    }
    if (local_30 <= sVar1) {
      sVar1 = local_30;
    }
    if (sVar2 < local_30) {
      sVar2 = local_30;
    }
    sVar3 = local_26;
    if (local_2a <= local_26) {
      sVar3 = local_2a;
    }
    sVar4 = local_2a;
    if (local_2a < local_26) {
      sVar4 = local_26;
    }
    if (local_2e <= sVar3) {
      sVar3 = local_2e;
    }
    if (sVar4 < local_2e) {
      sVar4 = local_2e;
    }
    if (local_34 <= sVar1) {
      sVar1 = local_34;
    }
    if (sVar2 < local_34) {
      sVar2 = local_34;
    }
    *param_1 = sVar1 + -2;
    param_1[2] = sVar2 + 2;
    if (local_32 <= sVar3) {
      sVar3 = local_32;
    }
    if (sVar4 < local_32) {
      sVar4 = local_32;
    }
    param_1[1] = sVar3 + -2;
    param_1[3] = sVar4 + 2;
    if (param_7 == '\x01') {
      param_1[1] = 0;
      param_1[3] = param_3 + -1;
    }
    else if (param_7 == '\x02') {
      *param_1 = 0;
      param_1[2] = param_2 + -1;
    }
  }
  if (*DAT_2c61209c == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

