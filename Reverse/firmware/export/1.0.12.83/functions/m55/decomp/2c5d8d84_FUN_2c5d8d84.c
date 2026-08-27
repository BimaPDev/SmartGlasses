/* FUN_2c5d8d84 @ 0x2c5d8d84 */

void FUN_2c5d8d84(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  int local_14;
  
  local_14 = *DAT_2c5d8f14;
  FUN_2c606d84(*(undefined4 *)(param_1 + 4),0xff00ff00,0,0);
  FUN_2c606d90(*(undefined4 *)(param_1 + 4),0x5c,0);
  FUN_2c606d9c(*(undefined4 *)(param_1 + 4),2,0);
  uVar1 = FUN_2c636670(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_2c607048(uVar1,(int)*(short *)(param_1 + 0x40));
  FUN_2c606e08(*(undefined4 *)(param_1 + 8),0xff00ff00,0x20000);
  FUN_2c606e14(*(undefined4 *)(param_1 + 8),0xff,0x20000);
  FUN_2c606df0(*(undefined4 *)(param_1 + 8),0);
  FUN_2c606df0(*(undefined4 *)(param_1 + 8),3,0x20000);
  FUN_2c606dfc(*(undefined4 *)(param_1 + 8),1,0x20000);
  FUN_2c6371ec(*(undefined4 *)(param_1 + 8),0x10e);
  FUN_2c6371f4(*(undefined4 *)(param_1 + 8),0);
  FUN_2c63703c(*(undefined4 *)(param_1 + 8),0,100);
  FUN_2c6371d4(*(undefined4 *)(param_1 + 8),0,0x168);
  FUN_2c603a04(*(undefined4 *)(param_1 + 8),0,0x30000);
  FUN_2c606abc(*(undefined4 *)(param_1 + 8),2);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 8),9,0);
  uVar2 = FUN_2c637344(*(undefined4 *)(param_1 + 4));
  uVar1 = DAT_2c5d8f18;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  FUN_2c638730(uVar2,uVar1);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x10),1);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x10),0xff00ff00,0);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_2c5e2e80(DAT_2c5d8f1c);
  FUN_2c606e38(uVar2,uVar1,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x10),0x27d1);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x10),2,0,10);
  uVar2 = FUN_2c6313f4(*(undefined4 *)(param_1 + 4));
  uVar1 = DAT_2c5d8f20;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar1 = FUN_2c5e2e8c(uVar1);
  FUN_2c63140c(uVar2,uVar1);
  FUN_2c606dd8(*(undefined4 *)(param_1 + 0xc),0x19,0);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0xc),9,0);
  FUN_2c602454(*(undefined4 *)(param_1 + 4),DAT_2c5d8f28,*DAT_2c5d8f24,0);
  local_18 = FUN_2c620f3c(param_2,*(undefined4 *)(param_1 + 4),0);
  puVar3 = *(undefined4 **)(param_1 + 0x38);
  if (puVar3 == *(undefined4 **)(param_1 + 0x3c)) {
    FUN_2c5d8c2c(param_1 + 0x34,puVar3,&local_18);
  }
  else {
    *puVar3 = local_18;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
  }
  if (*DAT_2c5d8f14 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

