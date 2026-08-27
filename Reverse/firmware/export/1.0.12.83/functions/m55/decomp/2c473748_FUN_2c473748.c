/* FUN_2c473748 @ 0x2c473748 */

undefined4
FUN_2c473748(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,int param_6,byte param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  int iStack_28;
  int local_24;
  
  local_24 = *DAT_2c4737e0;
  if ((param_8 == (undefined4 *)0x0 || param_6 == 0) || (param_4 == 0)) {
    uVar1 = 0;
  }
  else {
    local_4c = *DAT_2c4737e4;
    uStack_48 = DAT_2c4737e4[1];
    uStack_44 = DAT_2c4737e4[2];
    local_34 = param_5;
    iStack_28 = param_6;
    local_40 = param_1;
    local_3c = param_2;
    uStack_38 = param_3;
    local_30 = param_4;
    local_2c = (uint)param_7;
    uVar1 = FUN_2c47713c(&local_4c);
    *param_8 = uVar1;
    uVar1 = FUN_2c47245c(7);
    FUN_2c47716c(&local_4c,uVar1);
  }
  if (*DAT_2c4737e0 == local_24) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

