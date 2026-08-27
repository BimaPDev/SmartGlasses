/* FUN_2c47feac @ 0x2c47feac */

void FUN_2c47feac(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  int local_1c;
  
  iVar2 = (int)*param_3;
  local_1c = *DAT_2c47ff38;
  local_20 = 0;
  local_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  uStack_2c = 0;
  local_28 = 0;
  uStack_24 = 0;
  local_3c = 3;
  FUN_2c47f554(param_1,param_2,param_2,param_3);
  iVar1 = FUN_2c47f470(param_1,param_1,&local_3c,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(param_1,param_1,param_3 + 4,iVar2);
  }
  FUN_2c47f554(param_1,param_1,param_2,param_3);
  FUN_2c47fbb8(param_1,param_1,param_3 + 0x84,param_3 + 4,iVar2);
  if (*DAT_2c47ff38 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

