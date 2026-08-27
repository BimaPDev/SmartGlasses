/* FUN_2c6076c4 @ 0x2c6076c4 */

void FUN_2c6076c4(undefined4 param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  int local_1c;
  
  local_1c = *DAT_2c6077cc;
  local_2c = *param_2;
  local_2a = param_2[1];
  local_26 = param_2[3];
  local_24 = param_2[2];
  local_28 = local_2c;
  local_22 = local_2a;
  local_20 = local_24;
  local_1e = local_26;
  FUN_2c607654(param_1,&local_2c);
  FUN_2c607654(param_1,&local_28,param_3,param_4);
  FUN_2c607654(param_1,&local_24,param_3,param_4);
  FUN_2c607654(param_1,&local_20,param_3,param_4);
  sVar2 = local_20;
  sVar1 = local_24;
  if (local_20 < local_24) {
    sVar2 = local_24;
    sVar1 = local_20;
  }
  if (local_28 <= sVar1) {
    sVar1 = local_28;
  }
  if (sVar2 < local_28) {
    sVar2 = local_28;
  }
  if (local_2c <= sVar1) {
    sVar1 = local_2c;
  }
  if (sVar2 < local_2c) {
    sVar2 = local_2c;
  }
  *param_2 = sVar1;
  sVar3 = local_1e;
  sVar1 = local_22;
  if (local_1e < local_22) {
    sVar3 = local_22;
    sVar1 = local_1e;
  }
  param_2[2] = sVar2;
  if (local_26 <= sVar1) {
    sVar1 = local_26;
  }
  if (sVar3 < local_26) {
    sVar3 = local_26;
  }
  if (local_2a <= sVar1) {
    sVar1 = local_2a;
  }
  if (sVar3 < local_2a) {
    sVar3 = local_2a;
  }
  param_2[1] = sVar1;
  param_2[3] = sVar3;
  FUN_2c62a66c(param_2,5);
  if (*DAT_2c6077cc == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

