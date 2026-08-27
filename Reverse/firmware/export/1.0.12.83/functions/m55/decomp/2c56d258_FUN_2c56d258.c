/* FUN_2c56d258 @ 0x2c56d258 */

void FUN_2c56d258(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint local_6c;
  undefined1 *local_68 [2];
  undefined1 auStack_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  uint *local_48;
  uint local_44;
  uint local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  local_24 = *DAT_2c56d47c;
  uVar1 = FUN_2c606a10(param_2,param_2,param_3,0);
  FUN_2c603a04(uVar1,0,DAT_2c56d480);
  FUN_2c607048(uVar1,0x21c / *DAT_2c56d484,0x50);
  uVar6 = DAT_2c56d498;
  if (DAT_2c56d488 * (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2) <= param_3)
  goto LAB_2c56d2a2;
  iVar4 = param_3 * 0x2c + *(int *)(param_1 + 0x78);
  local_50 = DAT_2c56d498;
  local_4c = *(undefined4 *)(iVar4 + 4);
  puVar7 = *(undefined1 **)(iVar4 + 8);
  uVar5 = *(uint *)(iVar4 + 0xc);
  local_48 = local_40;
  if ((puVar7 + uVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c56d494);
  }
  local_6c = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      local_40[0] = CONCAT31(local_40[0]._1_3_,*puVar7);
    }
    else if (uVar5 != 0) goto LAB_2c56d45e;
  }
  else {
    local_48 = (uint *)FUN_2c56c9cc(&local_6c,0);
    local_40[0] = local_6c;
LAB_2c56d45e:
    FUN_2c674668(local_48,puVar7,uVar5);
  }
  *(undefined1 *)((int)local_48 + local_6c) = 0;
  local_30 = *(undefined4 *)(iVar4 + 0x20);
  local_2c = *(undefined4 *)(iVar4 + 0x24);
  local_28 = *(undefined4 *)(iVar4 + 0x28);
  local_44 = local_6c;
  uVar2 = FUN_2c606a10(uVar1);
  FUN_2c603a04(uVar2,0,DAT_2c56d480);
  FUN_2c607048(uVar2,0x2064,0x1c);
  FUN_2c6072b4(uVar2,2);
  uVar2 = FUN_2c637344(uVar2);
  FUN_2c6072bc(uVar2,9,0,0);
  FUN_2c607048(uVar2,0x27d1);
  FUN_2c606e20(uVar2,0xff00ff00,0);
  uVar3 = FUN_2c5e2e80(DAT_2c56d48c);
  FUN_2c606e38(uVar2,uVar3,0);
  FUN_2c56cb64(local_68,local_4c);
  FUN_2c638730(uVar2,local_68[0]);
  if (local_68[0] != auStack_60) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  uVar2 = FUN_2c6313f4(uVar1);
  FUN_2c6072bc(uVar2,2,0,0x20);
  FUN_2c607048(uVar2,0x18);
  uVar3 = FUN_2c56ceec(&local_48);
  FUN_2c63140c(uVar2,uVar3);
  uVar1 = FUN_2c606a10(uVar1);
  FUN_2c603a04(uVar1,0,DAT_2c56d480);
  FUN_2c607048(uVar1,0x2064,0x14);
  FUN_2c6072b4(uVar1,5);
  uVar1 = FUN_2c637344(uVar1);
  FUN_2c607048(uVar1,0x2064,0x27d1);
  FUN_2c6072bc(uVar1,9,0);
  FUN_2c606e5c(uVar1,2,0);
  FUN_2c606e20(uVar1,0xff00ff00,0);
  uVar2 = FUN_2c5e2e80(DAT_2c56d490);
  FUN_2c606e38(uVar1,uVar2,0);
  FUN_2c6388dc(uVar1,4);
  FUN_2c6388cc(uVar1,1);
  FUN_2c638730(uVar1,local_48);
  local_50 = uVar6;
  if (local_48 != local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
LAB_2c56d2a2:
  if (*DAT_2c56d47c != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

