/* FUN_2c572424 @ 0x2c572424 */

void FUN_2c572424(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 **local_c0;
  undefined4 *local_bc;
  undefined4 *local_b8 [4];
  undefined4 local_a8;
  undefined4 **local_a4;
  undefined4 *local_a0;
  undefined4 *local_9c [4];
  undefined4 **local_8c;
  undefined4 *local_88;
  undefined4 *local_84 [4];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 **local_58;
  undefined4 *local_54;
  undefined4 *local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  int local_34;
  
  local_34 = *DAT_2c5726dc;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10);
  }
  iVar3 = *param_2;
  iVar1 = DAT_2c5726e0 * (param_2[2] - iVar3 >> 3);
  if (param_2[2] - iVar3 < 1) {
LAB_2c57272a:
    if (*DAT_2c572764 != local_34) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
  uVar4 = 0;
  while (uVar2 = DAT_2c5726e0 * (param_2[1] - iVar3 >> 3), uVar4 <= uVar2 && uVar2 - uVar4 != 0) {
    local_cc = DAT_2c5726f4;
    iVar3 = uVar4 * 0x98 + iVar3;
    local_c4 = *(undefined4 *)(iVar3 + 8);
    puVar5 = *(undefined4 **)(iVar3 + 0x10);
    puVar6 = *(undefined1 **)(iVar3 + 0xc);
    local_c8 = DAT_2c5726f8;
    local_c0 = local_b8;
    if ((puVar6 + (int)puVar5 != (undefined1 *)0x0) && (puVar6 == (undefined1 *)0x0))
    goto LAB_2c57274a;
    local_d0 = puVar5;
    if (puVar5 < (undefined4 *)0x10) {
      if (puVar5 == (undefined4 *)0x1) {
        local_b8[0] = (undefined4 *)CONCAT31(local_b8[0]._1_3_,*puVar6);
      }
      else if (puVar5 != (undefined4 *)0x0) goto LAB_2c5726c2;
    }
    else {
      local_c0 = (undefined4 **)FUN_2c5719a0(&local_d0,0);
      local_b8[0] = local_d0;
LAB_2c5726c2:
      FUN_2c674668(local_c0,puVar6,puVar5);
    }
    *(undefined1 *)((int)local_c0 + (int)local_d0) = 0;
    local_a8 = *(undefined4 *)(iVar3 + 0x24);
    puVar5 = *(undefined4 **)(iVar3 + 0x2c);
    puVar6 = *(undefined1 **)(iVar3 + 0x28);
    local_a4 = local_9c;
    local_bc = local_d0;
    if ((puVar6 + (int)puVar5 != (undefined1 *)0x0) && (puVar6 == (undefined1 *)0x0))
    goto LAB_2c57274a;
    if (puVar5 < (undefined4 *)0x10) {
      if (puVar5 == (undefined4 *)0x1) {
        local_9c[0] = (undefined4 *)CONCAT31(local_9c[0]._1_3_,*puVar6);
      }
      else {
        local_d0 = puVar5;
        if (puVar5 != (undefined4 *)0x0) goto LAB_2c5726a8;
      }
    }
    else {
      local_d0 = puVar5;
      local_a4 = (undefined4 **)FUN_2c5719a0(&local_d0,0);
      local_9c[0] = local_d0;
LAB_2c5726a8:
      FUN_2c674668(local_a4,puVar6,puVar5);
      puVar5 = local_d0;
    }
    local_d0 = puVar5;
    *(undefined1 *)((int)local_a4 + (int)local_d0) = 0;
    puVar6 = *(undefined1 **)(iVar3 + 0x40);
    puVar5 = *(undefined4 **)(iVar3 + 0x44);
    local_8c = local_84;
    local_a0 = local_d0;
    if ((puVar6 + (int)puVar5 != (undefined1 *)0x0) && (puVar6 == (undefined1 *)0x0))
    goto LAB_2c57274a;
    if (puVar5 < (undefined4 *)0x10) {
      if (puVar5 == (undefined4 *)0x1) {
        local_84[0] = (undefined4 *)CONCAT31(local_84[0]._1_3_,*puVar6);
      }
      else {
        local_d0 = puVar5;
        if (puVar5 != (undefined4 *)0x0) goto LAB_2c57268a;
      }
    }
    else {
      local_d0 = puVar5;
      local_8c = (undefined4 **)FUN_2c5719a0(&local_d0,0);
      local_84[0] = local_d0;
LAB_2c57268a:
      FUN_2c674668(local_8c,puVar6,puVar5);
      puVar5 = local_d0;
    }
    local_d0 = puVar5;
    *(undefined1 *)((int)local_8c + (int)local_d0) = 0;
    local_74 = *(undefined4 *)(iVar3 + 0x58);
    local_70 = DAT_2c5726e4;
    local_6c = *(undefined4 *)(iVar3 + 0x60);
    local_68 = *(undefined1 *)(iVar3 + 100);
    local_67 = *(undefined1 *)(iVar3 + 0x65);
    local_64 = *(undefined4 *)(iVar3 + 0x68);
    local_60 = *(undefined4 *)(iVar3 + 0x6c);
    local_5c = *(undefined4 *)(iVar3 + 0x70);
    puVar6 = *(undefined1 **)(iVar3 + 0x74);
    puVar5 = *(undefined4 **)(iVar3 + 0x78);
    local_58 = local_50;
    local_88 = local_d0;
    if ((puVar6 + (int)puVar5 != (undefined1 *)0x0) && (puVar6 == (undefined1 *)0x0))
    goto LAB_2c57274a;
    if (puVar5 < (undefined4 *)0x10) {
      if (puVar5 == (undefined4 *)0x1) {
        local_50[0] = (undefined4 *)CONCAT31(local_50[0]._1_3_,*puVar6);
      }
      else {
        local_d0 = puVar5;
        if (puVar5 != (undefined4 *)0x0) goto LAB_2c572712;
      }
    }
    else {
      local_d0 = puVar5;
      local_58 = (undefined4 **)FUN_2c5719a0(&local_d0,0);
      local_50[0] = local_d0;
LAB_2c572712:
      FUN_2c674668(local_58,puVar6,puVar5);
      puVar5 = local_d0;
    }
    local_d0 = puVar5;
    *(undefined1 *)((int)local_58 + (int)local_d0) = 0;
    local_40 = *(undefined4 *)(iVar3 + 0x8c);
    local_3c = *(undefined4 *)(iVar3 + 0x90);
    local_38 = *(undefined1 *)(iVar3 + 0x94);
    local_54 = local_d0;
    if (*DAT_2c5726e8 == 0) {
      FUN_2c4723c4();
      *DAT_2c5726e8 = 1;
    }
    puVar5 = (undefined4 *)FUN_2c47245c(0,0x34);
    FUN_2c674268(puVar5,0,0x34);
    *puVar5 = DAT_2c5726ec;
    puVar5[1] = DAT_2c5726f0;
    puVar5[7] = puVar5 + 9;
    *(undefined1 *)(puVar5 + 9) = 0;
    puVar5[2] = local_6c;
    *(undefined1 *)(puVar5 + 3) = local_67;
    puVar5[4] = local_60;
    puVar5[5] = local_40;
    puVar5[6] = local_5c;
    local_d0 = puVar5;
    FUN_2c52f5f4(puVar5 + 7,&local_58);
    puVar5 = *(undefined4 **)(param_1 + 0x14);
    if (puVar5 == *(undefined4 **)(param_1 + 0x18)) {
      FUN_2c571dfc(param_1 + 0x10,puVar5,&local_d0);
    }
    else {
      *puVar5 = local_d0;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
    }
    local_cc = DAT_2c5726f4;
    if (local_58 != local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    local_c8 = DAT_2c5726f8;
    if (local_8c != local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_a4 != local_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_c0 != local_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    uVar4 = uVar4 + 1;
    if (iVar1 <= (int)uVar4) goto LAB_2c57272a;
    iVar3 = *param_2;
  }
  FUN_2c65868c(DAT_2c572768,uVar4);
LAB_2c57274a:
                    /* WARNING: Subroutine does not return */
  FUN_2c658674(DAT_2c57276c);
}

