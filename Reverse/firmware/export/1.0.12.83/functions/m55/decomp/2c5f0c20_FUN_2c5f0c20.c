/* FUN_2c5f0c20 @ 0x2c5f0c20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5f0c20(int param_1,int param_2,undefined1 param_3,int param_4)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  if (param_2 == 0) {
    uStack_20 = _LAB_2c5f0c7c;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5f0c84,0x6b,_LAB_2c5f0c80);
  }
  *(undefined1 *)(param_1 + 0x30) = param_3;
  if (param_4 != 1) {
    uVar7 = FUN_2c6041d4(param_1);
    FUN_2c606d30(uVar7,0x10,0);
  }
  FUN_2c6070bc(param_1,0x2064);
  *(int *)(param_1 + 0x2c) = param_4;
  FUN_2c608c7c(param_1);
  iStack_24 = *DAT_2c5f0a20;
  uVar7 = FUN_2c5f0544();
  sVar1 = FUN_2c5f110c();
  sVar1 = sVar1 - *(short *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x40) == '\0') {
    sVar2 = FUN_2c5f056c(uVar7);
  }
  else {
    sVar2 = 0;
  }
  for (; sVar2 = sVar2 + (short)(param_4 << 4), sVar1 <= sVar2;
      sVar2 = sVar2 - sVar1 * (sVar2 / sVar1)) {
  }
  iVar8 = (int)(short)(sVar1 - sVar2);
  uVar3 = FUN_2c66c4ec(param_2);
  uVar4 = FUN_2c5e2e58(DAT_2c5f0a24);
  iVar5 = FUN_2c62b85c(param_2,uVar3,uVar4,0,0);
  if (iVar8 < iVar5) {
    iVar5 = FUN_2c5f05e8(param_2,iVar8);
    uStack_2c = FUN_2c62c45c(iVar5 + 1);
    iVar6 = FUN_2c66c4ec(param_2);
    uStack_28 = FUN_2c62c45c((iVar6 + 1) - iVar5);
    iVar5 = FUN_2c5f05b4(param_2,iVar5,&uStack_2c,&uStack_28);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5f0a30,0x120,DAT_2c5f0a2c,DAT_2c5f0a28);
    }
    uVar7 = FUN_2c637344(uVar7);
    lv_obj_add_flag_invalidate(uVar7,1);
    FUN_2c6070bc(uVar7,iVar8);
    FUN_2c606e20(uVar7,0xff00ff00,0);
    FUN_2c638730(uVar7,uStack_2c);
    if (*(char *)(param_1 + 0x40) != '\0') {
      lv_obj_add_flag_invalidate(uVar7,0x800000);
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    FUN_2c608c7c(uVar7);
    FUN_2c62bea8(uStack_2c);
    FUN_2c5f0880(param_1,uStack_28,param_4);
    FUN_2c62bea8(uStack_28);
  }
  else {
    uVar7 = FUN_2c637344(uVar7);
    lv_obj_add_flag_invalidate(uVar7,1);
    FUN_2c6070bc(uVar7,iVar5);
    FUN_2c606e20(uVar7,0xff00ff00,0);
    FUN_2c638730(uVar7,param_2);
    if (*(char *)(param_1 + 0x40) != '\0') {
      lv_obj_add_flag_invalidate(uVar7,0x800000);
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
  }
  if (*DAT_2c5f0a20 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

