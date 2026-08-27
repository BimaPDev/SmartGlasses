/* FUN_2c4f9958 @ 0x2c4f9958 */

void FUN_2c4f9958(undefined4 param_1,int param_2)

{
  undefined4 extraout_r1;
  int iVar1;
  int local_40;
  int local_3c;
  int local_38 [6];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  param_2 = param_2 * 8;
  local_14 = *DAT_2c4f99dc;
  local_20 = 0x800;
  iVar1 = param_2;
  if (0x1e < param_2) {
    iVar1 = 0x1f;
  }
  local_18 = 0;
  local_1c = 0x4000;
  local_38[4] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_40 = 0;
  local_3c = 0;
  local_38[0] = param_2;
  local_38[5] = param_1;
  local_40 = FUN_2c4f94ec(local_38,iVar1);
  if (iVar1 + local_3c == 0) {
    local_40 = local_40 << 1;
    local_3c = 0;
  }
  else {
    local_3c = iVar1 + local_3c + -1;
  }
  iVar1 = FUN_2c4f96c0(&local_40);
  FUN_2c4f9684(&local_40);
  if ((*DAT_2c4f99dc ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar1 + ((uint)(param_2 - local_38[0]) >> 3),extraout_r1,*DAT_2c4f99dc ^ local_14,0
                );
}

