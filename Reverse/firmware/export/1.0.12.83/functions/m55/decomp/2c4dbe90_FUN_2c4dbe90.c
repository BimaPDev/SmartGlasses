/* FUN_2c4dbe90 @ 0x2c4dbe90 */

undefined4 FUN_2c4dbe90(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_50 [4];
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  undefined4 local_20;
  
  uVar2 = DAT_2c4dbf9c;
  uVar1 = DAT_2c4dbf98;
  local_24 = *DAT_2c4dbf84;
  FUN_2c4e0504(DAT_2c4dbf88,7,0,0,DAT_2c4dbf9c,0x7b,DAT_2c4dbf98,0x1300,0);
  uVar3 = (**(code **)(*param_1 + 0x50))(param_1);
  *DAT_2c4dbf8c = uVar3;
  FUN_2c4caedc(param_3,4,0);
  FUN_2c4caedc(param_3,0x201,0);
  FUN_2c4caedc(param_3,0x200,0);
  uVar3 = DAT_2c4dbf88;
  if (((*(byte *)((int)param_1 + 0x167) == 0) && (param_1[0x62] != 0)) && (param_1[0x65] != 0)) {
    if (*DAT_2c4dbf84 == local_24) {
      local_20 = DAT_2c4dbe6c;
      FUN_2c4e0504(DAT_2c4dbe64,7,0);
      return 1;
    }
  }
  else {
    local_50[0] = *DAT_2c4dbf90;
    local_50[1] = DAT_2c4dbf90[1];
    local_50[2] = DAT_2c4dbf90[2];
    local_50[3] = DAT_2c4dbf90[3];
    local_40 = DAT_2c4dbf90[4];
    iStack_3c = DAT_2c4dbf90[5];
    iStack_38 = DAT_2c4dbf90[6];
    iStack_34 = DAT_2c4dbf90[7];
    local_30 = DAT_2c4dbf90[8];
    iStack_2c = DAT_2c4dbf90[9];
    iStack_28 = DAT_2c4dbf90[10];
    iVar4 = local_50[*(byte *)((int)param_1 + 0x167)];
    param_1[0x33] = iVar4;
    FUN_2c4e0504(uVar3,7,0,0,uVar2,0x99,uVar1,0x1300,DAT_2c4dbf94,iVar4);
    if (*DAT_2c4dbf84 == local_24) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

