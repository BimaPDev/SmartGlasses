/* FUN_2c623904 @ 0x2c623904 */

void FUN_2c623904(int *param_1,uint *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  local_1c = *DAT_2c62399c;
  if (*(code **)(param_6 + 0xc) == (code *)0x0) {
    local_24 = *param_2;
    local_28 = *param_1;
    local_20 = local_24;
    if ((param_3 != 0) && (uVar2 = param_3 + local_24, local_24 < uVar2)) {
      uVar3 = uVar2 + (local_24 >> 1);
      iVar1 = FUN_2c62bebc(local_28,uVar3,uVar2,0);
      if (iVar1 != 0) {
        local_28 = iVar1;
        local_20 = uVar3;
      }
      local_24 = *param_2;
    }
    lVar5 = FUN_2c6237e4(&local_28,param_4,param_5,param_6);
    *param_1 = local_28;
    *param_2 = local_24;
  }
  else {
    uVar4 = (**(code **)(param_6 + 0xc))(param_1,param_2,param_4,param_5,param_6);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    lVar5 = (ulonglong)uVar2 << 0x20;
    if ((int)uVar4 != 0) {
      if (*(uint *)(param_6 + 8) == 0) {
        lVar5 = CONCAT44(uVar2,0x6e);
      }
      else if (*(uint *)(param_6 + 8) < *param_2) {
        lVar5 = CONCAT44(uVar2,0x6d);
      }
      else {
        lVar5 = CONCAT44(uVar2,0x6e);
      }
    }
  }
  if ((*DAT_2c62399c ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),*DAT_2c62399c ^ local_1c,0);
}

