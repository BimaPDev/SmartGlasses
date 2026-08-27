/* FUN_2c4caf68 @ 0x2c4caf68 */

int FUN_2c4caf68(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  
  local_14 = *DAT_2c4caff4;
  local_18 = FUN_2c4d271c(param_1,1,(uint)(param_2 != 0),0);
  iVar1 = 0;
  if (local_18 != 0) {
    FUN_2c4d3af8(local_18,3,1);
    iVar1 = FUN_2c4cf154(param_1);
    if (iVar1 == 0) {
      FUN_2c4d3c14(&local_18);
    }
    else {
      *(uint *)(iVar1 + 0xc) = (uint)(param_2 != 0);
      *(int *)(iVar1 + 0x14) = local_18;
      FUN_2c4d70b0(iVar1 + 0x1c4,0,0);
      FUN_2c4d27d8(local_18,DAT_2c4caff8,iVar1);
      FUN_2c4d27ec(local_18,DAT_2c4caffc,iVar1);
      FUN_2c4d2800(local_18,DAT_2c4cb000,iVar1);
    }
  }
  if (*DAT_2c4caff4 == local_14) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

