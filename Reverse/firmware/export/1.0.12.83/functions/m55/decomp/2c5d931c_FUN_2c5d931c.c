/* FUN_2c5d931c @ 0x2c5d931c */

void FUN_2c5d931c(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  uint local_1c;
  
  local_1c = *DAT_2c5d94cc;
  uVar2 = FUN_2c637344(*(undefined4 *)(param_1 + 4),param_2,param_3,0);
  FUN_2c638730(uVar2,*param_2);
  FUN_2c606e20(uVar2,0xff00ff00,0);
  uVar3 = FUN_2c5e2e80(DAT_2c5d94d0);
  FUN_2c606e38(uVar2,uVar3,0);
  FUN_2c607048(uVar2,0x27d1);
  FUN_2c6072bc(uVar2,2,0,0xb);
  puVar1 = DAT_2c5d94e4;
  if (param_3 != 0) {
    FUN_2c602454(uVar2,DAT_2c5d94dc,*DAT_2c5d94e4,0);
    local_20 = FUN_2c620f3c(param_3,uVar2,0);
    puVar5 = *(undefined4 **)(param_1 + 0x38);
    if (puVar5 == *(undefined4 **)(param_1 + 0x3c)) {
      FUN_2c5d8c2c(param_1 + 0x34,puVar5,&local_20);
    }
    else {
      *puVar5 = local_20;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
    }
  }
  uVar2 = FUN_2c5cfd1c(*(undefined4 *)(param_1 + 4));
  FUN_2c607048(uVar2,0x27d1);
  FUN_2c6072bc(uVar2,5,0,0xfffffff7);
  if (param_4 != 0) {
    FUN_2c602454(uVar2,DAT_2c5d94e0,*puVar1,0);
    local_20 = FUN_2c620f3c(param_4,uVar2,param_1);
    puVar5 = *(undefined4 **)(param_1 + 0x38);
    if (puVar5 == *(undefined4 **)(param_1 + 0x3c)) {
      FUN_2c5d8c2c(param_1 + 0x34,puVar5,&local_20);
    }
    else {
      *puVar5 = local_20;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
    }
  }
  uVar3 = FUN_2c6313f4(uVar2);
  FUN_2c607048(uVar3,0xc,0x18);
  FUN_2c606f34(uVar3,0);
  lv_obj_add_flag_invalidate(uVar3,1);
  FUN_2c602454(uVar3,DAT_2c5d94d4,*puVar1,0);
  local_20 = FUN_2c620f3c(0x3ed,uVar3,param_1);
  puVar5 = *(undefined4 **)(param_1 + 0x38);
  if (puVar5 == *(undefined4 **)(param_1 + 0x3c)) {
    FUN_2c5d8c2c(param_1 + 0x34,puVar5,&local_20);
  }
  else {
    *puVar5 = local_20;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
  }
  uVar3 = FUN_2c6313f4(uVar2);
  uVar4 = FUN_2c5e2e8c(DAT_2c5d94d8);
  FUN_2c63140c(uVar3,uVar4);
  FUN_2c607048(uVar3,0x1a,0x18);
  uVar2 = FUN_2c6313f4(uVar2);
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  FUN_2c607048(uVar2,0x1a,0x18);
  FUN_2c5d68d8();
  uVar3 = FUN_2c5cfe2c();
  if ((*DAT_2c5d94cc ^ local_1c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar3,uVar3,*DAT_2c5d94cc ^ local_1c,0);
  }
  FUN_2c63140c(uVar2);
  return;
}

