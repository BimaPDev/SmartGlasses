/* FUN_2c5d9990 @ 0x2c5d9990 */

void FUN_2c5d9990(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 *param_5
                 ,int param_6,short param_7,int param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_28;
  int local_24;
  
  local_24 = *DAT_2c5d9c5c;
  FUN_2c607048(*(undefined4 *)(param_1 + 4),0x9c,0x48,0);
  FUN_2c606d90(*(undefined4 *)(param_1 + 4),0x4c,0);
  uVar1 = FUN_2c636670(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_2c6072bc(uVar1,9,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 8),0xfa);
  FUN_2c606e08(*(undefined4 *)(param_1 + 8),0xff00ff00,0x20000);
  FUN_2c606e14(*(undefined4 *)(param_1 + 8),0xff,0x20000);
  FUN_2c606df0(*(undefined4 *)(param_1 + 8),0);
  FUN_2c606df0(*(undefined4 *)(param_1 + 8),0x7d,0x20000);
  FUN_2c606dfc(*(undefined4 *)(param_1 + 8),0,0x20000);
  FUN_2c603a04(*(undefined4 *)(param_1 + 8),0,0x30000);
  FUN_2c606abc(*(undefined4 *)(param_1 + 8),2);
  FUN_2c6371ec(*(undefined4 *)(param_1 + 8),0x10e);
  FUN_2c6371f4(*(undefined4 *)(param_1 + 8),(int)param_7);
  FUN_2c63703c(*(undefined4 *)(param_1 + 8),0,100);
  FUN_2c6371d4(*(undefined4 *)(param_1 + 8),0,0x168);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 8),9,0);
  if (param_8 != 0) {
    FUN_2c602454(*(undefined4 *)(param_1 + 8),DAT_2c5d9c6c,*DAT_2c5d9c68,0);
    local_28 = FUN_2c620f3c(param_8,*(undefined4 *)(param_1 + 8),0);
    puVar3 = *(undefined4 **)(param_1 + 0x38);
    if (puVar3 == *(undefined4 **)(param_1 + 0x3c)) {
      FUN_2c5d8c2c(param_1 + 0x34,puVar3,&local_28);
    }
    else {
      *puVar3 = local_28;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
    }
  }
  uVar1 = FUN_2c6313f4(*(undefined4 *)(param_1 + 4));
  uVar2 = FUN_2c5e2e8c(DAT_2c5d9c60);
  FUN_2c63140c(uVar1,uVar2);
  FUN_2c6072bc(uVar1,9,0);
  uVar1 = FUN_2c606a10(*(undefined4 *)(param_1 + 4));
  FUN_2c5cff00();
  FUN_2c607048(uVar1,0x96,0x42);
  FUN_2c606e68(uVar1,0x48,0);
  FUN_2c6072bc(uVar1,9,0);
  FUN_2c606d60(uVar1,0xff000000,0);
  FUN_2c606d6c(uVar1,0xff,0);
  FUN_2c606d9c(uVar1,0);
  uVar2 = FUN_2c6313f4(uVar1);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  FUN_2c63140c(uVar2,param_4);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0xc),1,0x10,0x14);
  uVar2 = FUN_2c637344(uVar1);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  FUN_2c638730(uVar2,*param_2);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x10),0);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x10),0xff00ff00,0);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_2c5e2e80(DAT_2c5d9c64);
  FUN_2c606e38(uVar4,uVar2,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x10),0x5a,0x18);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x10),1,0x31,10);
  if (param_3 != 0) {
    FUN_2c602454(*(undefined4 *)(param_1 + 0x10),DAT_2c5d9c74,*DAT_2c5d9c68,0);
    local_28 = FUN_2c620f3c(param_3,*(undefined4 *)(param_1 + 0x10),0);
    puVar3 = *(undefined4 **)(param_1 + 0x38);
    if (puVar3 == *(undefined4 **)(param_1 + 0x3c)) {
      FUN_2c5d8c2c(param_1 + 0x34,puVar3,&local_28);
    }
    else {
      *puVar3 = local_28;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
    }
  }
  uVar1 = FUN_2c637344(uVar1);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  FUN_2c638730(uVar1,*param_5);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x14),0);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x14),0xff00ff00,0);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = FUN_2c5e2e80(DAT_2c5d9c64);
  FUN_2c606e38(uVar2,uVar1,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x14),0x5a,0x18);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x14),1,0x31,0x22);
  if (param_6 != 0) {
    FUN_2c602454(*(undefined4 *)(param_1 + 0x14),DAT_2c5d9c70,*DAT_2c5d9c68,0);
    local_28 = FUN_2c620f3c(param_6,*(undefined4 *)(param_1 + 0x14),0);
    puVar3 = *(undefined4 **)(param_1 + 0x38);
    if (puVar3 == *(undefined4 **)(param_1 + 0x3c)) {
      FUN_2c5d8c2c(param_1 + 0x34,puVar3,&local_28);
    }
    else {
      *puVar3 = local_28;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
    }
  }
  if (*DAT_2c5d9c5c == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

