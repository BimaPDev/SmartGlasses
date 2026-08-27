/* FUN_2c520ea0 @ 0x2c520ea0 */

void FUN_2c520ea0(undefined1 *param_1)

{
  int *piVar1;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  undefined4 local_44;
  undefined4 uStack_40;
  int local_3c;
  undefined4 local_38;
  int iStack_34;
  undefined1 local_30;
  undefined4 local_2c;
  int local_14;
  
  local_14 = *DAT_2c520f00;
  FUN_2c674268(auStack_58,0,0x44,0);
  local_44 = DAT_2c520f08;
  uStack_40 = DAT_2c520f04;
  local_54 = FUN_2c5e2e8c(DAT_2c520f0c);
  local_3c = DAT_2c520f10;
  iStack_34 = DAT_2c520f10 + 2;
  local_30 = 1;
  local_38 = DAT_2c520f14;
  local_2c = DAT_2c520f18;
  FUN_2c5e8f4c(auStack_58);
  piVar1 = DAT_2c520f00;
  *param_1 = 1;
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

