/* FUN_2c5f0ce8 @ 0x2c5f0ce8 */

void FUN_2c5f0ce8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [4];
  int local_24;
  int local_1c;
  
  iVar3 = param_2;
  if (param_2 == 0) {
    iVar3 = DAT_2c5f0d80;
  }
  local_1c = *DAT_2c5f0d84;
  uVar1 = FUN_2c637344(param_1,param_2,0);
  lv_obj_add_flag_invalidate(uVar1,1);
  iVar2 = FUN_2c66c4ec(iVar3);
  local_24 = iVar2 + 3;
  iVar2 = -(iVar2 + 10U & 0xfffffff8);
  FUN_2c62c3b0(auStack_28 + iVar2);
  FUN_2c66b450(auStack_28 + iVar2,local_24,DAT_2c5f0d88,iVar3);
  FUN_2c6388dc(uVar1,0);
  FUN_2c606e20(uVar1,0xff00ff00,0);
  FUN_2c638730(uVar1,auStack_28 + iVar2);
  uVar1 = FUN_2c6074f4(uVar1);
  FUN_2c6070bc(param_1,uVar1);
  if (*DAT_2c5f0d84 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

