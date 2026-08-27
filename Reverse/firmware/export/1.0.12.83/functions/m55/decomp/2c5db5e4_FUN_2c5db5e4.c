/* FUN_2c5db5e4 @ 0x2c5db5e4 */

int FUN_2c5db5e4(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint local_b4;
  uint *local_b0;
  uint local_ac;
  uint local_a8;
  undefined1 local_a4;
  undefined1 local_a3;
  uint *local_98;
  uint local_94;
  uint local_90;
  undefined1 local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  undefined4 local_70;
  undefined1 local_6c [16];
  undefined1 *local_5c;
  undefined4 local_58;
  undefined1 local_54 [16];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  int local_2c;
  undefined4 local_20;
  uint uStack_1c;
  
  iVar6 = FUN_2c5da7cc();
  uVar1 = DAT_2c5db4c0;
  if (iVar6 != 0) {
    local_20 = DAT_2c5db628;
    uStack_1c = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5db630,0xa2,DAT_2c5db62c);
  }
  uVar7 = 0;
  local_2c = *DAT_2c5db4ac;
  local_78 = 0;
  local_70 = 0;
  local_6c[0] = 0;
  local_58 = 0;
  local_54[0] = 0;
  local_34 = 0;
  local_30 = 1;
  local_80 = DAT_2c5db4c0;
  local_7c = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_74 = local_6c;
  local_5c = local_54;
  if (param_2 < 7) {
    if (param_2 == 0) {
LAB_2c5db2d8:
      iVar6 = 0;
      goto LAB_2c5db2b4;
    }
    switch(param_2) {
    case 2:
      local_8c = 0;
      local_94 = 4;
      local_90 = DAT_2c5db4bc;
      local_98 = &local_90;
      FUN_2c52f5f4(&local_74,&local_98);
      local_44 = 0x7d2;
      local_7c = 0;
      local_3c = 0x7d3;
      local_30 = 2;
      uVar7 = FUN_2c5cfd1c(*param_1);
      iVar6 = FUN_2c5d9fe4(&local_80,uVar7,1);
      if (local_98 != &local_90) goto LAB_2c5db412;
      break;
    case 3:
      local_98 = &local_90;
      local_8c = 0;
      local_94 = 4;
      local_90 = DAT_2c5db4bc;
      FUN_2c52f5f4(&local_74,&local_98);
      local_44 = 0x40a;
      local_ac = 2;
      local_a8 = CONCAT13(local_a8._3_1_,0x2d2d);
      local_3c = 0x7d3;
      local_38 = 0x40b;
      local_b0 = &local_a8;
      local_7c = 0;
      local_78 = 0;
      FUN_2c52f5f4(&local_5c,&local_b0);
      local_40 = 0x40c;
      local_30 = 3;
      uVar7 = FUN_2c5cfd1c(*param_1);
      uVar2 = 8;
      goto LAB_2c5db480;
    case 4:
      uVar7 = 4;
      uVar2 = *param_1;
      local_30 = 4;
      local_44 = 0x3fa;
LAB_2c5db28a:
      uVar2 = FUN_2c5cfd1c(uVar2);
      iVar6 = FUN_2c5d9fe4(&local_80,uVar2,uVar7);
      break;
    case 5:
      puVar5 = &local_90;
      FUN_2c5c685c();
      puVar3 = (undefined1 *)FUN_2c5c6d84();
      local_98 = puVar5;
      if (puVar3 == (undefined1 *)0x0) goto LAB_2c5db58a;
      uVar4 = FUN_2c66c4ec();
      local_b4 = uVar4;
      if (uVar4 < 0x10) {
        if (uVar4 == 1) {
          local_90 = CONCAT31(local_90._1_3_,*puVar3);
        }
        else if (uVar4 != 0) goto LAB_2c5db552;
      }
      else {
        puVar5 = (uint *)FUN_2c5da228(&local_b4,0);
        local_90 = local_b4;
        local_98 = puVar5;
LAB_2c5db552:
        FUN_2c674668(puVar5,puVar3,uVar4);
        puVar5 = local_98;
      }
      *(undefined1 *)((int)puVar5 + local_b4) = 0;
      local_94 = local_b4;
      FUN_2c52f5f4(&local_74,&local_98);
      FUN_2c5c685c();
      puVar3 = (undefined1 *)FUN_2c5c6d7c();
      local_b0 = &local_a8;
      if (puVar3 == (undefined1 *)0x0) {
LAB_2c5db58a:
                    /* WARNING: Subroutine does not return */
        FUN_2c658674(DAT_2c5db5e0);
      }
      uVar4 = FUN_2c66c4ec();
      local_b4 = uVar4;
      if (uVar4 < 0x10) {
        puVar5 = &local_a8;
        if (uVar4 == 1) {
          local_a8 = CONCAT31(local_a8._1_3_,*puVar3);
        }
        else if (uVar4 != 0) goto LAB_2c5db572;
      }
      else {
        local_b0 = (uint *)FUN_2c5da228(&local_b4,0);
        local_a8 = local_b4;
        puVar5 = local_b0;
LAB_2c5db572:
        FUN_2c674668(puVar5,puVar3,uVar4);
        puVar5 = local_b0;
      }
      *(undefined1 *)((int)puVar5 + local_b4) = 0;
      local_ac = local_b4;
      FUN_2c52f5f4(&local_5c,&local_b0);
      local_44 = 0x401;
      local_40 = 0x402;
      local_30 = 5;
      uVar7 = FUN_2c5cfd1c(*param_1);
      iVar6 = FUN_2c5d9fe4(&local_80,uVar7,6);
      if (local_b0 != &local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      goto LAB_2c5db494;
    case 6:
      FUN_2c5c685c();
      iVar6 = FUN_2c5c6e8c();
      if (iVar6 == 0) {
        local_7c = FUN_2c5e2e8c(DAT_2c5db5dc);
      }
      else {
        local_7c = FUN_2c5e2e8c(DAT_2c5db4b8);
      }
      local_30 = 6;
      uVar7 = FUN_2c5cfd1c(*param_1);
      iVar6 = FUN_2c5d9fe4(&local_80,uVar7,0);
      break;
    default:
      uVar7 = FUN_2c5c685c();
      FUN_2c5c6a68(&local_98,uVar7);
      FUN_2c52f5f4(&local_74,&local_98);
      local_44 = 0x3e9;
      local_3c = 0x3eb;
      local_30 = 1;
      uVar7 = FUN_2c5cfd1c(*param_1);
      iVar6 = FUN_2c5d9fe4(&local_80,uVar7,3);
      if (local_98 != &local_90) goto LAB_2c5db412;
    }
  }
  else {
    if (param_2 != DAT_2c5db4b0) {
      if (param_2 == 0x7fffffff) {
        local_7c = FUN_2c5e2e8c(DAT_2c5db4b4);
        uVar2 = *param_1;
        local_30 = param_2;
        goto LAB_2c5db28a;
      }
      goto LAB_2c5db2d8;
    }
    local_98 = &local_90;
    local_90 = CONCAT13(local_90._3_1_,0x2d2d);
    local_94 = 2;
    FUN_2c52f5f4(&local_74,&local_98);
    local_a3 = 0;
    local_44 = 0x3a9a;
    local_a8 = *DAT_2c5db5d4;
    local_b0 = &local_a8;
    local_ac = 5;
    local_a4 = (undefined1)DAT_2c5db5d4[1];
    FUN_2c52f5f4(&local_5c,&local_b0);
    local_78 = 0;
    local_40 = 0x3a99;
    local_38 = 0x3a9c;
    local_7c = FUN_2c5e2e8c(DAT_2c5db5d8);
    local_30 = param_2;
    uVar7 = FUN_2c5cfd1c(*param_1);
    uVar2 = 9;
LAB_2c5db480:
    iVar6 = FUN_2c5d9fe4(&local_80,uVar7,uVar2);
    if (local_b0 != &local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
LAB_2c5db494:
    if (local_98 != &local_90) {
LAB_2c5db412:
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
  }
  if (iVar6 != 0) {
    FUN_2c5d8bd4(iVar6,param_3);
  }
  local_80 = uVar1;
  if (local_5c != local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
LAB_2c5db2b4:
  local_80 = uVar1;
  if (local_74 != local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c5db4ac != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar6;
}

