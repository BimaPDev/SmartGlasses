/* FUN_2c5d8f2c @ 0x2c5d8f2c */

void FUN_2c5d8f2c(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_20;
  int local_1c;
  
  local_1c = *DAT_2c5d9038;
  uVar1 = FUN_2c637344(*(undefined4 *)(param_1 + 4),param_2,param_3,0);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_2c638730(uVar1,*param_2);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x10),0xff00ff00,0);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_2c5e2e80(DAT_2c5d903c);
  FUN_2c606e38(uVar3,uVar1,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x10),0x27d1);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x10),2,0,10);
  if (param_4 != 0) {
    FUN_2c602454(*(undefined4 *)(param_1 + 0x10),DAT_2c5d9044,*DAT_2c5d9040,0);
    local_20 = FUN_2c620f3c(param_4,*(undefined4 *)(param_1 + 0x10),0);
    puVar2 = *(undefined4 **)(param_1 + 0x38);
    if (puVar2 == *(undefined4 **)(param_1 + 0x3c)) {
      FUN_2c5d8c2c(param_1 + 0x34,puVar2,&local_20);
    }
    else {
      *puVar2 = local_20;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
    }
  }
  uVar1 = FUN_2c6313f4(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  FUN_2c63140c(uVar1,param_3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0xc),5,0,0xfffffff7);
  if (param_5 != 0) {
    FUN_2c602454(*(undefined4 *)(param_1 + 0xc),DAT_2c5d9048,*DAT_2c5d9040,0);
    local_20 = FUN_2c620f3c(param_5,*(undefined4 *)(param_1 + 0xc),0);
    puVar2 = *(undefined4 **)(param_1 + 0x38);
    if (puVar2 == *(undefined4 **)(param_1 + 0x3c)) {
      FUN_2c5d8c2c(param_1 + 0x34,puVar2,&local_20);
    }
    else {
      *puVar2 = local_20;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
    }
  }
  if (*DAT_2c5d9038 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

