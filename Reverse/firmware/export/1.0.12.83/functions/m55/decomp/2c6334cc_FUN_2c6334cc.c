/* FUN_2c6334cc @ 0x2c6334cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c6334cc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_20;
  undefined2 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  *(undefined4 *)(param_2 + 0x44) = 1;
  *(undefined2 *)(param_2 + 0x3c) = 0x5dc;
  *(undefined2 *)(param_2 + 0x40) = 0;
  *(byte *)(param_2 + 0x54) = *(byte *)(param_2 + 0x54) & 0xfc | 3;
  *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) & 0xf1;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  uStack_10 = param_4;
  uVar2 = FUN_2c637344(param_2);
  *(undefined4 *)(param_2 + 0x24) = uVar2;
  FUN_2c6070bc(uVar2,0x2064);
  FUN_2c638730(*(undefined4 *)(param_2 + 0x24),_LAB_2c633548);
  FUN_2c602454(*(undefined4 *)(param_2 + 0x24),_LAB_2c63354c,0,0);
  lv_obj_add_flag_invalidate(param_2,0x400);
  FUN_2c63339c(param_2,0);
  iStack_14 = *DAT_2c632f14;
  iVar1 = FUN_2c6033b4(param_2,0x70000,100,0);
  if (iVar1 == 0) {
    FUN_2c62e838(param_2,DAT_2c632f18);
    *(byte *)(param_2 + 0x54) = *(byte *)(param_2 + 0x54) | 1;
  }
  else {
    FUN_2c62e7b4(&iStack_58);
    uStack_54 = DAT_2c632f18;
    uStack_30 = 0;
    uStack_3c = DAT_2c632f1c;
    uStack_18 = 0xffff;
    uStack_38 = 1;
    uStack_34 = 1;
    iStack_58 = param_2;
    iStack_2c = iVar1;
    iStack_20 = iVar1;
    FUN_2c62e8ec(&iStack_58);
  }
  if (*DAT_2c632f14 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

