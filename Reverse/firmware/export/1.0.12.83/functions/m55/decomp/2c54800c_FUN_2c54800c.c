/* FUN_2c54800c @ 0x2c54800c */

void FUN_2c54800c(int param_1,int param_2)

{
  undefined4 **ppuVar1;
  uint **ppuVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined4 *local_78;
  uint *local_74;
  uint local_70;
  uint local_6c [3];
  undefined4 local_60;
  undefined4 **local_5c;
  undefined4 **local_58;
  uint *local_54;
  uint *local_50;
  undefined4 **local_4c;
  uint *local_48;
  uint *local_44;
  uint local_40;
  uint local_3c [2];
  uint *local_34;
  undefined4 *local_30;
  undefined4 *local_2c [4];
  int local_1c;
  
  local_1c = *DAT_2c548140;
  iVar3 = FUN_2c547fb8(param_1,*(undefined4 *)(param_1 + 0x14),param_2,0);
  if (iVar3 != 0) {
    if (*DAT_2c548140 != local_1c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    local_2c[0] = (undefined4 *)*DAT_2c54792c;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c547930,0x50,DAT_2c547938,DAT_2c547940);
    }
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 == param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c547930,0x54,DAT_2c547938,DAT_2c547944);
    }
    if (iVar3 == 0) {
      puVar7 = *(undefined1 **)(param_2 + 8);
      local_44 = local_3c;
      puVar5 = *(undefined4 **)(param_2 + 0xc);
      if ((puVar7 + (int)puVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0))
      goto LAB_2c547914;
      local_78 = puVar5;
      if (puVar5 < (undefined4 *)0x10) {
        if (puVar5 == (undefined4 *)0x1) {
          local_3c[0] = CONCAT31(local_3c[0]._1_3_,*puVar7);
          goto LAB_2c547844;
        }
        if (puVar5 == (undefined4 *)0x0) goto LAB_2c547844;
      }
      else {
        local_44 = (uint *)FUN_2c5470b4(&local_78,0,0);
        local_3c[0] = (uint)local_78;
      }
      FUN_2c674668(local_44,puVar7,puVar5);
LAB_2c547844:
      *(undefined1 *)((int)local_44 + (int)local_78) = 0;
      local_40 = (uint)local_78;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c547930,0x5b,DAT_2c547938,DAT_2c547934,DAT_2c54793c,local_44);
    }
    local_74 = local_6c;
    puVar7 = *(undefined1 **)(iVar3 + 8);
    puVar5 = *(undefined4 **)(iVar3 + 0xc);
    if ((puVar7 + (int)puVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0))
    goto LAB_2c547914;
    local_78 = puVar5;
    if (puVar5 < (undefined4 *)0x10) {
      if (puVar5 == (undefined4 *)0x1) {
        local_6c[0] = CONCAT31(local_6c[0]._1_3_,*puVar7);
      }
      else if (puVar5 != (undefined4 *)0x0) goto LAB_2c54788a;
    }
    else {
      local_74 = (uint *)FUN_2c5470b4(&local_78,0,0);
      local_6c[0] = (uint)local_78;
LAB_2c54788a:
      FUN_2c674668(local_74,puVar7,puVar5);
    }
    puVar4 = local_74;
    ppuVar2 = &local_54;
    *(undefined1 *)((int)local_74 + (int)local_78) = 0;
    puVar7 = *(undefined1 **)(param_2 + 8);
    puVar6 = *(uint **)(param_2 + 0xc);
    local_70 = (uint)local_78;
    local_5c = ppuVar2;
    if ((puVar7 + (int)puVar6 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) {
LAB_2c547914:
                    /* WARNING: Subroutine does not return */
      FUN_2c658674(DAT_2c547948);
    }
    if (puVar6 < (uint *)0x10) {
      if (puVar6 == (uint *)0x1) {
        local_54 = (uint *)CONCAT31(local_54._1_3_,*puVar7);
        goto LAB_2c5477ae;
      }
      local_78 = puVar6;
      if (puVar6 == (uint *)0x0) goto LAB_2c5477ae;
    }
    else {
      local_78 = puVar6;
      ppuVar2 = (uint **)FUN_2c5470b4(&local_78,0);
      local_54 = local_78;
    }
    local_5c = ppuVar2;
    FUN_2c674668(ppuVar2,puVar7,puVar6);
    puVar6 = local_78;
LAB_2c5477ae:
    local_78 = puVar6;
    *(undefined1 *)((int)local_5c + (int)local_78) = 0;
    local_58 = (undefined4 **)local_78;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c547930,0x58,DAT_2c547938,DAT_2c547934,puVar4,local_5c);
  }
  puVar7 = *(undefined1 **)(param_2 + 8);
  puVar4 = *(uint **)(param_2 + 0xc);
  local_4c = &local_44;
  if ((puVar7 + (int)puVar4 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0))
  goto LAB_2c548130;
  local_50 = puVar4;
  if (puVar4 < (uint *)0x10) {
    if (puVar4 == (uint *)0x1) {
      local_44 = (uint *)CONCAT31(local_44._1_3_,*puVar7);
    }
    else if (puVar4 != (uint *)0x0) goto LAB_2c548102;
  }
  else {
    local_4c = (undefined4 **)FUN_2c5470b4(&local_50,0);
    local_44 = local_50;
LAB_2c548102:
    FUN_2c674668(local_4c,puVar7,puVar4);
  }
  ppuVar1 = local_4c;
  *(undefined1 *)((int)local_4c + (int)local_50) = 0;
  local_34 = (uint *)local_2c;
  puVar7 = *(undefined1 **)(*(int *)(param_1 + 0x14) + 8);
  puVar4 = *(uint **)(*(int *)(param_1 + 0x14) + 0xc);
  local_48 = local_50;
  if ((puVar7 + (int)puVar4 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) {
LAB_2c548130:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c548150);
  }
  if (puVar4 < (uint *)0x10) {
    if (puVar4 == (uint *)0x1) {
      local_2c[0] = (undefined4 *)CONCAT31(local_2c[0]._1_3_,*puVar7);
      goto LAB_2c54809c;
    }
    local_50 = puVar4;
    if (puVar4 == (uint *)0x0) goto LAB_2c54809c;
  }
  else {
    local_50 = puVar4;
    local_34 = (uint *)FUN_2c5470b4(&local_50,0);
    local_2c[0] = local_50;
  }
  FUN_2c674668(local_34,puVar7,puVar4);
  puVar4 = local_50;
LAB_2c54809c:
  local_50 = puVar4;
  *(undefined1 *)((int)local_34 + (int)local_50) = 0;
  local_54 = local_34;
  local_58 = ppuVar1;
  local_60 = DAT_2c54814c;
  local_5c = (undefined4 **)DAT_2c548148;
  local_30 = local_50;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c548144,0x17);
}

