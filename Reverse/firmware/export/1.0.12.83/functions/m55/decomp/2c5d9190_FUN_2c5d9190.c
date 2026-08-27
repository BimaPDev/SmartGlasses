/* FUN_2c5d9190 @ 0x2c5d9190 */

void FUN_2c5d9190(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_20;
  int local_1c;
  
  local_1c = *DAT_2c5d930c;
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
  FUN_2c6371f4(*(undefined4 *)(param_1 + 8),(int)(short)param_3);
  FUN_2c63703c(*(undefined4 *)(param_1 + 8),0,100);
  FUN_2c6371d4(*(undefined4 *)(param_1 + 8),0,0x168);
  FUN_2c603a04(*(undefined4 *)(param_1 + 8),0,0x30000);
  FUN_2c606abc(*(undefined4 *)(param_1 + 8),2);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 8),9,0);
  if (param_5 != 0) {
    FUN_2c602454(*(undefined4 *)(param_1 + 8),DAT_2c5d9314,*DAT_2c5d9310,0);
    local_20 = FUN_2c620f3c(param_5,*(undefined4 *)(param_1 + 8),0);
    puVar2 = *(undefined4 **)(param_1 + 0x38);
    if (puVar2 == *(undefined4 **)(param_1 + 0x3c)) {
      FUN_2c5d8c2c(param_1 + 0x34,puVar2,&local_20);
    }
    else {
      *puVar2 = local_20;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
    }
  }
  uVar1 = FUN_2c6313f4(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  FUN_2c63140c(uVar1,param_2);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0xc),9,0);
  if (param_4 != 0) {
    FUN_2c602454(*(undefined4 *)(param_1 + 0xc),DAT_2c5d9318,*DAT_2c5d9310,0);
    local_20 = FUN_2c620f3c(param_4,*(undefined4 *)(param_1 + 0xc),0);
    puVar2 = *(undefined4 **)(param_1 + 0x38);
    if (puVar2 == *(undefined4 **)(param_1 + 0x3c)) {
      FUN_2c5d8c2c(param_1 + 0x34,puVar2,&local_20);
    }
    else {
      *puVar2 = local_20;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
    }
  }
  if (*DAT_2c5d930c == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

