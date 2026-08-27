/* FUN_2c51be40 @ 0x2c51be40 */

void FUN_2c51be40(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined1 local_32;
  undefined2 local_30;
  undefined1 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined1 local_28;
  int local_24;
  
  local_24 = *DAT_2c51bfb8;
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  local_2c = 4;
  local_36 = 0;
  local_2a = 0x82;
  local_2e = 1;
  local_28 = 0x33;
  local_38 = 0xffff;
  local_34 = 0x101;
  local_32 = 0x99;
  local_30 = 0xc;
  uVar2 = FUN_2c4feda4(uVar1,&local_38,0,0);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  FUN_2c6072bc(uVar2,2,0,0x3e);
  uVar3 = *DAT_2c51bfbc;
  FUN_2c606e20(*(undefined4 *)(param_1 + 0xc),uVar3,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0xc),0x180,0x164);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = FUN_2c5e2e80(DAT_2c51bfc0);
  FUN_2c606e38(uVar4,uVar2,0);
  FUN_2c606e44(*(undefined4 *)(param_1 + 0xc),8,0);
  FUN_2c606d9c(*(undefined4 *)(param_1 + 0xc),1,0);
  FUN_2c606d90(*(undefined4 *)(param_1 + 0xc),0x4c,0);
  FUN_2c606d84(*(undefined4 *)(param_1 + 0xc),uVar3,0);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_2c606d18(uVar2,0x10,0);
  FUN_2c606d24(uVar2,0x10,0);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_2c606d30(uVar2,0x18,0);
  FUN_2c606d3c(uVar2,0x18,0);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0xc),0x10,0);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0xc),1);
  uVar1 = FUN_2c637344(uVar1);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_2c607048(uVar1,0x27d1);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x10),2,0,0x1ba);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x10),uVar3,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x10),2,0);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_2c5e2e80(DAT_2c51bfc4);
  FUN_2c606e38(uVar2,uVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = registry_lookup(DAT_2c51bfc8);
  FUN_2c638730(uVar2,uVar1);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x10),1);
  if (*DAT_2c51bfb8 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

