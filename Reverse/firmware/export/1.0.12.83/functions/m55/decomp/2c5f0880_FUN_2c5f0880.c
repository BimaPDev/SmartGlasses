/* FUN_2c5f0880 @ 0x2c5f0880 */

void FUN_2c5f0880(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  local_24 = *DAT_2c5f0a20;
  uVar3 = FUN_2c5f0544();
  sVar1 = FUN_2c5f110c();
  sVar1 = sVar1 - *(short *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x40) == '\0') {
    sVar2 = FUN_2c5f056c(uVar3);
  }
  else {
    sVar2 = 0;
  }
  for (; sVar2 = sVar2 + (short)(param_3 << 4), sVar1 <= sVar2;
      sVar2 = sVar2 - sVar1 * (sVar2 / sVar1)) {
  }
  iVar8 = (int)(short)(sVar1 - sVar2);
  uVar4 = FUN_2c66c4ec(param_2);
  uVar5 = FUN_2c5e2e58(DAT_2c5f0a24);
  iVar6 = FUN_2c62b85c(param_2,uVar4,uVar5,0,0);
  if (iVar8 < iVar6) {
    iVar6 = FUN_2c5f05e8(param_2,iVar8);
    local_2c = FUN_2c62c45c(iVar6 + 1);
    iVar7 = FUN_2c66c4ec(param_2);
    local_28 = FUN_2c62c45c((iVar7 + 1) - iVar6);
    iVar6 = FUN_2c5f05b4(param_2,iVar6,&local_2c,&local_28);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5f0a30,0x120,DAT_2c5f0a2c,DAT_2c5f0a28);
    }
    uVar3 = FUN_2c637344(uVar3);
    lv_obj_add_flag_invalidate(uVar3,1);
    FUN_2c6070bc(uVar3,iVar8);
    FUN_2c606e20(uVar3,0xff00ff00,0);
    FUN_2c638730(uVar3,local_2c);
    if (*(char *)(param_1 + 0x40) != '\0') {
      lv_obj_add_flag_invalidate(uVar3,0x800000);
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    FUN_2c608c7c(uVar3);
    FUN_2c62bea8(local_2c);
    FUN_2c5f0880(param_1,local_28,param_3);
    FUN_2c62bea8(local_28);
  }
  else {
    uVar3 = FUN_2c637344(uVar3);
    lv_obj_add_flag_invalidate(uVar3,1);
    FUN_2c6070bc(uVar3,iVar6);
    FUN_2c606e20(uVar3,0xff00ff00,0);
    FUN_2c638730(uVar3,param_2);
    if (*(char *)(param_1 + 0x40) != '\0') {
      lv_obj_add_flag_invalidate(uVar3,0x800000);
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
  }
  if (*DAT_2c5f0a20 != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

