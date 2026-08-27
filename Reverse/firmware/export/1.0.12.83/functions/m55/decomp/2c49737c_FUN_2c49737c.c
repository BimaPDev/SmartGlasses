/* FUN_2c49737c @ 0x2c49737c */

void FUN_2c49737c(int param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uStack_48;
  int local_44 [2];
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined1 local_27;
  int local_24;
  
  local_24 = *DAT_2c49741c;
  local_44[0]._0_1_ = (undefined1)param_1;
  uVar1 = (undefined1)local_44[0];
  uVar6 = param_3 & 0xffff;
  local_44[0] = param_1;
  local_44[1] = param_2;
  local_3c = param_3;
  if ((param_2 == 0) || (uVar6 == 0)) {
    puVar7 = &local_34;
    uVar5 = 0xe;
    local_34 = *DAT_2c497420;
    uStack_30 = DAT_2c497420[1];
    uStack_2c = DAT_2c497420[2];
    local_28 = (undefined1)DAT_2c497420[3];
    local_27 = uVar1;
  }
  else {
    uVar5 = uVar6 + 0xe & 0xffff;
    iVar2 = -(uVar5 + 7 & 0xfffffff8);
    puVar7 = (undefined4 *)((int)&uStack_48 + iVar2);
    FUN_2c674268(puVar7,0,uVar5);
    *(undefined1 *)((int)&local_3c + iVar2 + 1) = uVar1;
    uVar3 = DAT_2c497420[1];
    uVar4 = DAT_2c497420[2];
    uVar1 = *(undefined1 *)(DAT_2c497420 + 3);
    *puVar7 = *DAT_2c497420;
    *(undefined4 *)((int)local_44 + iVar2) = uVar3;
    *(undefined4 *)((int)local_44 + iVar2 + 4) = uVar4;
    *(undefined1 *)((int)&local_3c + iVar2) = uVar1;
    FUN_2c674668((int)&local_3c + iVar2 + 2,param_2,uVar6);
  }
  FUN_2c4f5500(2,puVar7,uVar5);
  if (*DAT_2c49741c == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

