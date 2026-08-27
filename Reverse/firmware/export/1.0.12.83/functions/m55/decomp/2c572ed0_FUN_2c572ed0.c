/* FUN_2c572ed0 @ 0x2c572ed0 */

void FUN_2c572ed0(int param_1,int param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 **ppuVar3;
  undefined4 uVar4;
  undefined2 **ppuVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined2 *local_108;
  undefined2 **local_104;
  undefined2 *local_100;
  undefined2 *local_fc [4];
  undefined2 **local_ec;
  undefined2 *local_e8;
  undefined2 *local_e4 [4];
  undefined2 *local_d4;
  undefined4 uStack_d0;
  undefined2 local_cc;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined2 *local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined2 *local_a4;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined1 local_99;
  undefined2 *local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined2 *local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined2 *local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_51;
  undefined2 **local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined1 local_39;
  int local_2c;
  
  local_2c = *DAT_2c5731a0;
  uVar8 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + param_2 * 4) + 8);
  if (0x7f < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5731cc,0xca,DAT_2c5731c8,DAT_2c5731c4,uVar8);
  }
  if (uVar8 == 0) {
    uVar6 = 9;
    uVar4 = DAT_2c5731d0;
  }
  else {
    if (uVar8 != 0x7f) {
      FUN_2c5729b0(param_3,0,param_3[1],DAT_2c5731a4,3);
      uVar4 = DAT_2c5731dc;
      ppuVar3 = &local_d4;
      local_b8 = 3;
      uVar7 = 1;
      local_cc = (short)*DAT_2c5731a8;
      local_a0 = 3;
      local_ca = (char)((uint)*DAT_2c5731a8 >> 0x10);
      local_88 = 3;
      local_70 = 3;
      local_b4 = (short)*DAT_2c5731ac;
      local_c9 = 0;
      local_b2 = (char)((uint)*DAT_2c5731ac >> 0x10);
      local_b1 = 0;
      local_99 = 0;
      local_9c = (short)*DAT_2c5731b0;
      local_81 = 0;
      local_9a = (char)((uint)*DAT_2c5731b0 >> 0x10);
      local_69 = 0;
      local_84 = (short)*DAT_2c5731b4;
      local_d4 = &local_cc;
      uStack_d0 = 3;
      local_82 = (char)((uint)*DAT_2c5731b4 >> 0x10);
      local_bc = &local_b4;
      local_a4 = &local_9c;
      local_6c = (short)*DAT_2c5731b8;
      local_8c = &local_84;
      local_6a = (char)((uint)*DAT_2c5731b8 >> 0x10);
      local_74 = &local_6c;
      local_5c = &local_54;
      local_54 = (short)*DAT_2c5731bc;
      local_58 = 3;
      local_52 = (char)((uint)*DAT_2c5731bc >> 0x10);
      local_40 = 3;
      ppuVar5 = (undefined2 **)&local_3c;
      local_51 = 0;
      local_3c = (short)*DAT_2c5731c0;
      local_39 = 0;
      local_3a = (char)((uint)*DAT_2c5731c0 >> 0x10);
      local_44 = ppuVar5;
      do {
        if ((uVar8 & uVar7) != 0) {
          puVar2 = *ppuVar3;
          puVar1 = ppuVar3[1];
          local_104 = local_fc;
          if (((undefined1 *)((int)puVar2 + (int)puVar1) != (undefined1 *)0x0) &&
             (puVar2 == (undefined2 *)0x0)) goto LAB_2c5731e8;
          local_108 = puVar1;
          if (puVar1 < (undefined2 *)0x10) {
            if (puVar1 == (undefined2 *)0x1) {
              local_fc[0] = (undefined2 *)CONCAT31(local_fc[0]._1_3_,*(undefined1 *)puVar2);
            }
            else if (puVar1 != (undefined2 *)0x0) goto LAB_2c5730e2;
          }
          else {
            local_104 = (undefined2 **)FUN_2c5719a0(&local_108,0);
            local_fc[0] = local_108;
LAB_2c5730e2:
            FUN_2c674668(local_104,puVar2,puVar1);
          }
          *(undefined1 *)((int)local_104 + (int)local_108) = 0;
          local_100 = local_108;
          if (0x7fffffffU - (int)local_108 < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_2c658680(DAT_2c5731d8);
          }
          FUN_2c572e70(&local_104,uVar4,2);
          FUN_2c572e70(param_3,local_104,local_100);
          if (local_104 != local_fc) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
        }
        uVar7 = uVar7 * 2;
        ppuVar3 = ppuVar3 + 6;
      } while ((int)uVar7 <= (int)uVar8);
      puVar2 = (undefined2 *)param_3[1];
      puVar9 = (undefined1 *)*param_3;
      puVar1 = puVar2 + -1;
      if (puVar2 <= puVar2 + -1) {
        puVar1 = puVar2;
      }
      local_ec = local_e4;
      if ((puVar9 + (int)puVar1 != (undefined1 *)0x0) && (puVar9 == (undefined1 *)0x0)) {
LAB_2c5731e8:
                    /* WARNING: Subroutine does not return */
        FUN_2c658674(DAT_2c5731f0);
      }
      local_108 = puVar1;
      if (puVar1 < (undefined2 *)0x10) {
        if (puVar1 == (undefined2 *)0x1) {
          local_e4[0] = (undefined2 *)CONCAT31(local_e4[0]._1_3_,*puVar9);
        }
        else if (puVar1 != (undefined2 *)0x0) goto LAB_2c57312a;
      }
      else {
        local_ec = (undefined2 **)FUN_2c5719a0(&local_108,0);
        local_e4[0] = local_108;
LAB_2c57312a:
        FUN_2c674668(local_ec,puVar9,puVar1);
      }
      *(undefined1 *)((int)local_ec + (int)local_108) = 0;
      ppuVar3 = (undefined2 **)*param_3;
      if (local_ec == local_e4) {
        puVar1 = local_108;
        if (local_108 != (undefined2 *)0x0) {
          if (local_108 == (undefined2 *)0x1) {
            *(undefined1 *)ppuVar3 = local_e4[0]._0_1_;
            ppuVar3 = (undefined2 **)*param_3;
          }
          else {
            local_e8 = local_108;
            FUN_2c674668(ppuVar3,local_e4);
            ppuVar3 = (undefined2 **)*param_3;
            puVar1 = local_e8;
          }
        }
        param_3[1] = puVar1;
        *(undefined1 *)((int)ppuVar3 + (int)puVar1) = 0;
        puVar1 = local_e4[0];
      }
      else {
        *param_3 = local_ec;
        if (ppuVar3 == (undefined2 **)(param_3 + 2)) {
          param_3[1] = local_108;
          param_3[2] = local_e4[0];
        }
        else {
          param_3[1] = local_108;
          puVar1 = (undefined2 *)param_3[2];
          param_3[2] = local_e4[0];
          local_ec = ppuVar3;
          if (ppuVar3 != (undefined2 **)0x0) goto LAB_2c57309a;
        }
        local_ec = local_e4;
        puVar1 = local_e4[0];
      }
LAB_2c57309a:
      local_e4[0] = puVar1;
      local_e8 = (undefined2 *)0x0;
      *(undefined1 *)local_ec = 0;
      if (local_ec != local_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680();
      }
      do {
        if (ppuVar5 != (undefined2 **)ppuVar5[-2]) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        ppuVar5 = ppuVar5 + -6;
      } while (local_e4 != ppuVar5);
      goto LAB_2c573100;
    }
    uVar6 = 6;
    uVar4 = DAT_2c5731d4;
  }
  FUN_2c5729b0(param_3,0,param_3[1],uVar4,uVar6);
LAB_2c573100:
  if (*DAT_2c5731a0 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

