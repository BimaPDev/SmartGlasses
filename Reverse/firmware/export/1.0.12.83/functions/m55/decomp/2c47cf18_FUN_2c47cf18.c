/* FUN_2c47cf18 @ 0x2c47cf18 */

void FUN_2c47cf18(undefined4 param_1,undefined4 param_2,undefined1 param_3,byte param_4,
                 undefined1 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  ushort uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined2 local_46;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint local_30;
  int local_2c;
  
  piVar2 = DAT_2c47d064;
  local_2c = *DAT_2c47d03c;
  if (*DAT_2c47d040 != '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x43,DAT_2c47d05c,DAT_2c47d060,DAT_2c47d058,DAT_2c47d048,param_2);
  }
  uVar3 = FUN_2c485790(*DAT_2c47d064);
  if (200 < uVar3) {
    if ((code *)*DAT_2c47d044 != (code *)0x0) {
      (*(code *)*DAT_2c47d044)(0);
      *DAT_2c47d044 = 0;
    }
    if (800 < uVar3) {
      FUN_2c6741e8(0x711,DAT_2c47d04c,DAT_2c47d048);
      FUN_2c47af88(2,0,0);
      if (*DAT_2c47d03c == local_2c) {
        FUN_2c484e14(DAT_2c47d050,1);
        return;
      }
      goto LAB_2c47d038;
    }
  }
  puVar4 = (undefined4 *)FUN_2c47245c(3,0x10);
  if (puVar4 != (undefined4 *)0x0) {
    local_46 = 0;
    local_40 = 0;
    local_34 = 0;
    local_44 = (uint)CONCAT11(3,param_3);
    local_30 = (uint)param_4;
    local_3c = param_1;
    uStack_38 = param_2;
    uVar5 = FUN_2c47ce30(&local_44,&local_46);
    puVar1 = DAT_2c47d054;
    *puVar4 = uVar5;
    uVar5 = *puVar1;
    puVar4[2] = param_6;
    *(undefined1 *)(puVar4 + 3) = param_5;
    *(undefined2 *)(puVar4 + 1) = local_46;
    FUN_2c644044(uVar5,0xffffffff);
    if (*piVar2 != 0) {
      FUN_2c4857c8(*piVar2,puVar4);
    }
    FUN_2c644080(*puVar1);
    FUN_2c47af88(2,0,0);
  }
  if (*DAT_2c47d03c == local_2c) {
    return;
  }
LAB_2c47d038:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

