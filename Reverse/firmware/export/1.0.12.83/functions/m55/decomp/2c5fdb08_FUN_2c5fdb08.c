/* FUN_2c5fdb08 @ 0x2c5fdb08 */

void FUN_2c5fdb08(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_48 [12];
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 local_30;
  int iStack_2c;
  int local_28;
  int local_24;
  
  puVar1 = DAT_2c5fdbcc;
  local_24 = *DAT_2c5fdbd0;
  FUN_2c644044(*DAT_2c5fdbcc,0xffffffff,param_3,0);
  FUN_2c5fec7c(auStack_48);
  if (*DAT_2c5fdbd4 == 0x7fffffff) {
    local_28 = 0;
  }
  else {
    local_28 = *DAT_2c5fdbd4 + 1;
  }
  *DAT_2c5fdbd4 = local_28;
  iVar2 = DAT_2c5fdbd8;
  local_34 = DAT_2c5fdbdc;
  if (param_3 != 0) {
    local_34 = param_3;
  }
  if (param_4 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = param_5;
  }
  local_3c = param_1;
  uStack_38 = param_2;
  iStack_2c = param_4;
  uVar3 = FUN_2c5feca0(auStack_48);
  iVar4 = FUN_2c5fee3c(*(undefined4 *)(iVar2 + 4),uVar3);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x5f4,DAT_2c5fdbec,DAT_2c5fdbe8,DAT_2c5fdbe4,DAT_2c5fdbe0);
  }
  FUN_2c5fecd0(auStack_48,iVar4);
  (**(code **)(*(int *)(iVar2 + 0x48) + 0x30))(iVar4,uVar3,0);
  FUN_2c5fee30(*(undefined4 *)(iVar2 + 4),iVar4);
  FUN_2c644080(*puVar1);
  if (*DAT_2c5fdbd0 != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

