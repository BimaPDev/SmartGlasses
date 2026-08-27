/* FUN_2c5fdbf0 @ 0x2c5fdbf0 */

void FUN_2c5fdbf0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_7c [12];
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined1 auStack_60 [16];
  undefined1 *local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int iStack_3c;
  undefined1 auStack_38 [10];
  undefined1 local_2e;
  int local_2c;
  
  piVar2 = DAT_2c5fdd14;
  puVar1 = DAT_2c5fdd10;
  local_2c = *DAT_2c5fdd18;
  FUN_2c644044(*DAT_2c5fdd10,0xffffffff,param_3,0);
  uVar4 = DAT_2c5fdd1c;
  *piVar2 = *piVar2 + 1;
  FUN_2c66b4b8(auStack_38,uVar4);
  local_2e = 0;
  FUN_2c5fed48(auStack_60);
  iVar3 = DAT_2c5fdd20;
  if (param_3 == 0) {
    param_3 = DAT_2c5fdd3c;
  }
  if (param_4 == 0) {
    local_40 = 0;
  }
  else {
    local_40 = param_5;
  }
  local_50 = auStack_38;
  uStack_4c = param_1;
  local_48 = param_2;
  local_44 = param_3;
  iStack_3c = param_4;
  uVar4 = FUN_2c5fed6c(auStack_60);
  iVar5 = FUN_2c5fee3c(*(undefined4 *)(iVar3 + 4),uVar4);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x616,DAT_2c5fdd34,DAT_2c5fdd30,DAT_2c5fdd38,DAT_2c5fdd28);
  }
  FUN_2c5fed9c(auStack_60,iVar5);
  FUN_2c5fe0cc(auStack_7c);
  local_70 = 1;
  local_64 = DAT_2c5fdd24;
  local_6c = uVar4;
  local_68 = iVar5;
  uVar4 = FUN_2c5fe0ec(auStack_7c);
  iVar6 = FUN_2c5fee3c(*(undefined4 *)(iVar3 + 4),uVar4);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x622,DAT_2c5fdd34,DAT_2c5fdd30,DAT_2c5fdd2c,DAT_2c5fdd28);
  }
  FUN_2c5fe11c(auStack_7c,iVar6);
  (**(code **)(*(int *)(iVar3 + 0x48) + 0x30))(iVar6,uVar4,0);
  FUN_2c5fee30(*(undefined4 *)(iVar3 + 4),iVar6);
  FUN_2c5fee30(*(undefined4 *)(iVar3 + 4),iVar5);
  FUN_2c644080(*puVar1);
  if (*DAT_2c5fdd18 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

