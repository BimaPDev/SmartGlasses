/* FUN_2c5d94e8 @ 0x2c5d94e8 */

void FUN_2c5d94e8(int param_1,undefined4 *param_2,undefined4 param_3,short param_4,int param_5,
                 int param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_28;
  int local_24;
  
  local_24 = *DAT_2c5d96f0;
  uVar1 = FUN_2c636670(*(undefined4 *)(param_1 + 4),param_2,param_3,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_2c607048(uVar1,(int)*(short *)(param_1 + 0x40));
  FUN_2c606d9c(*(undefined4 *)(param_1 + 4),0);
  FUN_2c606e08(*(undefined4 *)(param_1 + 8),0xff00ff00,0);
  FUN_2c606e14(*(undefined4 *)(param_1 + 8),0x5c,0);
  FUN_2c606e08(*(undefined4 *)(param_1 + 8),0xff00ff00,0x20000);
  FUN_2c606e14(*(undefined4 *)(param_1 + 8),0xff,0x20000);
  FUN_2c606df0(*(undefined4 *)(param_1 + 8),2,0);
  FUN_2c606df0(*(undefined4 *)(param_1 + 8),4,0x20000);
  FUN_2c606dfc(*(undefined4 *)(param_1 + 8),1,0x20000);
  FUN_2c6371ec(*(undefined4 *)(param_1 + 8),0x10e);
  FUN_2c6371f4(*(undefined4 *)(param_1 + 8),(int)param_4);
  FUN_2c63703c(*(undefined4 *)(param_1 + 8),0,100);
  FUN_2c6371d4(*(undefined4 *)(param_1 + 8),0,0x168);
  FUN_2c603a04(*(undefined4 *)(param_1 + 8),0,0x30000);
  FUN_2c606abc(*(undefined4 *)(param_1 + 8),2);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 8),9,0);
  if (param_7 != 0) {
    FUN_2c602454(*(undefined4 *)(param_1 + 8),DAT_2c5d96fc,*DAT_2c5d96f8,0);
    local_28 = FUN_2c620f3c(param_7,*(undefined4 *)(param_1 + 8),0);
    puVar2 = *(undefined4 **)(param_1 + 0x38);
    if (puVar2 == *(undefined4 **)(param_1 + 0x3c)) {
      FUN_2c5d8c2c(param_1 + 0x34,puVar2,&local_28);
    }
    else {
      *puVar2 = local_28;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
    }
  }
  uVar1 = FUN_2c637344(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_2c638730(uVar1,*param_2);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x10),0xff00ff00,0);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_2c5e2e80(DAT_2c5d96f4);
  FUN_2c606e38(uVar3,uVar1,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x10),0x27d1);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x10),2,0,0xc);
  if (param_5 != 0) {
    FUN_2c602454(*(undefined4 *)(param_1 + 0x10),DAT_2c5d9704,*DAT_2c5d96f8,0);
    local_28 = FUN_2c620f3c(param_5,*(undefined4 *)(param_1 + 0x10),0);
    puVar2 = *(undefined4 **)(param_1 + 0x38);
    if (puVar2 == *(undefined4 **)(param_1 + 0x3c)) {
      FUN_2c5d8c2c(param_1 + 0x34,puVar2,&local_28);
    }
    else {
      *puVar2 = local_28;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
    }
  }
  uVar1 = FUN_2c6313f4(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  FUN_2c63140c(uVar1,param_3);
  if (param_6 != 0) {
    FUN_2c602454(*(undefined4 *)(param_1 + 0xc),DAT_2c5d9700,*DAT_2c5d96f8,0);
    local_28 = FUN_2c620f3c(param_6,*(undefined4 *)(param_1 + 0xc),0);
    puVar2 = *(undefined4 **)(param_1 + 0x38);
    if (puVar2 == *(undefined4 **)(param_1 + 0x3c)) {
      FUN_2c5d8c2c(param_1 + 0x34,puVar2,&local_28);
    }
    else {
      *puVar2 = local_28;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
    }
  }
  if (*DAT_2c5d96f0 == local_24) {
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0xc),5,0,0xfffffff7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

