/* FUN_2c50826c @ 0x2c50826c */

void FUN_2c50826c(int param_1,int param_2)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  code *pcVar9;
  undefined4 uVar10;
  bool bVar11;
  uint local_a0;
  uint *local_9c;
  uint local_98;
  uint local_94 [4];
  uint *local_84;
  uint local_80;
  uint local_7c [4];
  uint *local_6c;
  uint local_68;
  uint local_64 [4];
  uint *local_54;
  uint local_50;
  uint local_4c [4];
  uint *local_3c;
  uint local_38;
  uint local_34 [4];
  int local_24;
  
  local_24 = *DAT_2c5084fc;
  local_94[0] = local_94[0] & 0xffffff00;
  local_98 = 0;
  local_9c = local_94;
  switch(param_2) {
  case 0:
    uVar10 = FUN_2c50820c();
    uVar4 = (**(code **)**(undefined4 **)(param_1 + 8))(*(undefined4 **)(param_1 + 8));
    FUN_2c5dcca4(&local_3c,uVar4);
    uVar6 = local_94[0];
    puVar7 = local_9c;
    if (local_3c == local_34) {
      if (local_38 != 0) {
        if (local_38 == 1) {
          *(undefined1 *)local_9c = (undefined1)local_34[0];
        }
        else {
          FUN_2c674668(local_9c,local_34);
        }
      }
      *(undefined1 *)((int)local_9c + local_38) = 0;
      local_98 = local_38;
    }
    else {
      bVar11 = local_9c != local_94;
      local_9c = local_3c;
      if (bVar11) {
        local_98 = local_38;
        local_94[0] = local_34[0];
        if (puVar7 != (uint *)0x0) {
          local_34[0] = uVar6;
          local_3c = puVar7;
          goto LAB_2c508342;
        }
      }
      local_94[0] = local_34[0];
      local_98 = local_38;
      local_3c = local_34;
    }
LAB_2c508342:
    local_38 = 0;
    *(undefined1 *)local_3c = 0;
    if (local_3c != local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680();
    }
    iVar3 = (**(code **)(**(int **)(param_1 + 8) + 4))();
    if (iVar3 != 0) {
      *(int *)(*(int *)(param_1 + 0x28) + 0x14) = iVar3;
    }
    break;
  case 1:
    uVar10 = registry_lookup(DAT_2c508504,param_2,0);
    uVar4 = (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8));
    FUN_2c5dcca4(&local_3c,uVar4);
    uVar6 = local_94[0];
    puVar7 = local_9c;
    if (local_3c == local_34) {
      if (local_38 != 0) {
        if (local_38 == 1) {
          *(undefined1 *)local_9c = (undefined1)local_34[0];
        }
        else {
          FUN_2c674668(local_9c,local_34);
        }
      }
      *(undefined1 *)((int)local_9c + local_38) = 0;
      local_98 = local_38;
    }
    else {
      bVar11 = local_9c != local_94;
      local_9c = local_3c;
      if (bVar11) {
        local_98 = local_38;
        local_94[0] = local_34[0];
        if (puVar7 != (uint *)0x0) {
          local_34[0] = uVar6;
          local_3c = puVar7;
          goto LAB_2c5083ac;
        }
      }
      local_94[0] = local_34[0];
      local_98 = local_38;
      local_3c = local_34;
    }
LAB_2c5083ac:
    local_38 = 0;
    *(undefined1 *)local_3c = 0;
    if (local_3c != local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680();
    }
    piVar8 = *(int **)(param_1 + 8);
    pcVar9 = *(code **)(*piVar8 + 0xc);
    uVar2 = (**(code **)(*piVar8 + 8))(piVar8);
    iVar3 = (*pcVar9)(piVar8,uVar2);
    if (iVar3 != 0) {
      *(int *)(*(int *)(param_1 + 0x2c) + 0x14) = iVar3;
    }
    break;
  case 2:
    uVar10 = registry_lookup(DAT_2c508508,param_2,0);
    iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8));
    if (iVar3 == 0) {
      puVar5 = (undefined1 *)registry_lookup(DAT_2c5087a0);
      local_6c = local_64;
      if (puVar5 == (undefined1 *)0x0) goto LAB_2c508838;
      uVar6 = FUN_2c66c4ec();
      local_a0 = uVar6;
      if (uVar6 < 0x10) {
        puVar7 = local_64;
        if (uVar6 == 1) {
          local_64[0] = CONCAT31(local_64[0]._1_3_,*puVar5);
        }
        else if (uVar6 != 0) goto LAB_2c5086ac;
      }
      else {
        local_6c = (uint *)FUN_2c507d88(&local_a0,0);
        local_64[0] = local_a0;
        puVar7 = local_6c;
LAB_2c5086ac:
        FUN_2c674668(puVar7,puVar5,uVar6);
        puVar7 = local_6c;
      }
      uVar6 = local_94[0];
      puVar1 = local_9c;
      *(undefined1 *)((int)puVar7 + local_a0) = 0;
      if (local_6c == local_64) {
        uVar6 = local_a0;
        if (local_a0 != 0) {
          local_68 = local_a0;
          if (local_a0 == 1) {
            *(undefined1 *)local_9c = (undefined1)local_64[0];
            uVar6 = local_68;
          }
          else {
            FUN_2c674668(local_9c,local_64);
            uVar6 = local_68;
          }
        }
        *(undefined1 *)((int)local_9c + uVar6) = 0;
        local_98 = uVar6;
      }
      else {
        bVar11 = local_9c == local_94;
        local_9c = local_6c;
        if ((bVar11) || (local_94[0] = local_64[0], puVar1 == (uint *)0x0)) {
          local_94[0] = local_64[0];
          local_98 = local_a0;
          local_6c = local_64;
        }
        else {
          local_64[0] = uVar6;
          local_6c = puVar1;
          local_98 = local_a0;
        }
      }
      local_68 = 0;
      *(undefined1 *)local_6c = 0;
      if (local_6c == local_64) break;
      goto LAB_2c5085f0;
    }
    puVar5 = (undefined1 *)registry_lookup(DAT_2c50850c);
    local_84 = local_7c;
    if (puVar5 == (undefined1 *)0x0) {
LAB_2c508838:
                    /* WARNING: Subroutine does not return */
      FUN_2c658674(DAT_2c508858);
    }
    uVar6 = FUN_2c66c4ec();
    local_a0 = uVar6;
    if (uVar6 < 0x10) {
      puVar7 = local_7c;
      if (uVar6 == 1) {
        local_7c[0] = CONCAT31(local_7c[0]._1_3_,*puVar5);
      }
      else if (uVar6 != 0) goto LAB_2c5086ca;
    }
    else {
      local_84 = (uint *)FUN_2c507d88(&local_a0,0);
      local_7c[0] = local_a0;
      puVar7 = local_84;
LAB_2c5086ca:
      FUN_2c674668(puVar7,puVar5,uVar6);
      puVar7 = local_84;
    }
    uVar6 = local_94[0];
    puVar1 = local_9c;
    *(undefined1 *)((int)puVar7 + local_a0) = 0;
    if (local_84 == local_7c) {
      uVar6 = local_a0;
      if (local_a0 != 0) {
        local_80 = local_a0;
        if (local_a0 == 1) {
          *(undefined1 *)local_9c = (undefined1)local_7c[0];
          uVar6 = local_80;
        }
        else {
          FUN_2c674668(local_9c,local_7c);
          uVar6 = local_80;
        }
      }
      *(undefined1 *)((int)local_9c + uVar6) = 0;
      local_98 = uVar6;
    }
    else {
      bVar11 = local_9c == local_94;
      local_9c = local_84;
      if ((bVar11) || (local_94[0] = local_7c[0], puVar1 == (uint *)0x0)) {
        local_94[0] = local_7c[0];
        local_98 = local_a0;
        local_84 = local_7c;
      }
      else {
        local_7c[0] = uVar6;
        local_84 = puVar1;
        local_98 = local_a0;
      }
    }
    local_80 = 0;
    *(undefined1 *)local_84 = 0;
    if (local_84 != local_7c) {
LAB_2c5085f0:
                    /* WARNING: Subroutine does not return */
      FUN_2c472680();
    }
    break;
  case 3:
    uVar10 = registry_lookup(DAT_2c508510,param_2,0);
    iVar3 = FUN_2c5e33e4();
    if (iVar3 == 0xd) {
      uVar10 = registry_lookup(DAT_2c5087a8);
    }
    iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
    if (iVar3 == 0) {
      puVar5 = (undefined1 *)registry_lookup(DAT_2c5087a4);
      local_3c = local_34;
      if (puVar5 == (undefined1 *)0x0) goto LAB_2c508838;
      uVar6 = FUN_2c66c4ec();
      local_a0 = uVar6;
      if (uVar6 < 0x10) {
        puVar7 = local_34;
        if (uVar6 == 1) {
          local_34[0] = CONCAT31(local_34[0]._1_3_,*puVar5);
        }
        else if (uVar6 != 0) goto LAB_2c508706;
      }
      else {
        local_3c = (uint *)FUN_2c507d88(&local_a0,0);
        local_34[0] = local_a0;
        puVar7 = local_3c;
LAB_2c508706:
        FUN_2c674668(puVar7,puVar5,uVar6);
        puVar7 = local_3c;
      }
      uVar6 = local_94[0];
      puVar1 = local_9c;
      *(undefined1 *)((int)puVar7 + local_a0) = 0;
      if (local_3c == local_34) {
        uVar6 = local_a0;
        if (local_a0 != 0) {
          local_38 = local_a0;
          if (local_a0 == 1) {
            *(undefined1 *)local_9c = (undefined1)local_34[0];
            uVar6 = local_38;
          }
          else {
            FUN_2c674668(local_9c,local_34);
            uVar6 = local_38;
          }
        }
        *(undefined1 *)((int)local_9c + uVar6) = 0;
        local_98 = uVar6;
      }
      else {
        bVar11 = local_9c == local_94;
        local_9c = local_3c;
        if ((bVar11) || (local_94[0] = local_34[0], puVar1 == (uint *)0x0)) {
          local_94[0] = local_34[0];
          local_98 = local_a0;
          local_3c = local_34;
        }
        else {
          local_34[0] = uVar6;
          local_3c = puVar1;
          local_98 = local_a0;
        }
      }
      local_38 = 0;
      *(undefined1 *)local_3c = 0;
      if (local_3c == local_34) break;
      goto LAB_2c5085f0;
    }
    puVar5 = (undefined1 *)registry_lookup(DAT_2c508514);
    local_54 = local_4c;
    if (puVar5 == (undefined1 *)0x0) goto LAB_2c508838;
    uVar6 = FUN_2c66c4ec();
    local_a0 = uVar6;
    if (uVar6 < 0x10) {
      puVar7 = local_4c;
      if (uVar6 == 1) {
        local_4c[0] = CONCAT31(local_4c[0]._1_3_,*puVar5);
      }
      else if (uVar6 != 0) goto LAB_2c5086e8;
    }
    else {
      local_54 = (uint *)FUN_2c507d88(&local_a0,0);
      local_4c[0] = local_a0;
      puVar7 = local_54;
LAB_2c5086e8:
      FUN_2c674668(puVar7,puVar5,uVar6);
      puVar7 = local_54;
    }
    uVar6 = local_94[0];
    puVar1 = local_9c;
    *(undefined1 *)((int)puVar7 + local_a0) = 0;
    if (local_54 == local_4c) {
      uVar6 = local_a0;
      if (local_a0 != 0) {
        local_50 = local_a0;
        if (local_a0 == 1) {
          *(undefined1 *)local_9c = (undefined1)local_4c[0];
          uVar6 = local_50;
        }
        else {
          FUN_2c674668(local_9c,local_4c);
          uVar6 = local_50;
        }
      }
      *(undefined1 *)((int)local_9c + uVar6) = 0;
      local_98 = uVar6;
    }
    else {
      bVar11 = local_9c == local_94;
      local_9c = local_54;
      if ((bVar11) || (local_94[0] = local_4c[0], puVar1 == (uint *)0x0)) {
        local_94[0] = local_4c[0];
        local_98 = local_a0;
        local_54 = local_4c;
      }
      else {
        local_4c[0] = uVar6;
        local_54 = puVar1;
        local_98 = local_a0;
      }
    }
    local_50 = 0;
    *(undefined1 *)local_54 = 0;
    if (local_54 == local_4c) break;
    goto LAB_2c5085f0;
  case 4:
    uVar10 = registry_lookup(DAT_2c508500,param_2,0);
    iVar3 = FUN_2c5e33e4();
    if (iVar3 == 0xd) {
      uVar10 = registry_lookup(DAT_2c5087ac);
    }
    local_98 = 0;
    *(undefined1 *)local_9c = 0;
    break;
  default:
    uVar10 = 0;
  }
  uVar6 = local_98;
  puVar7 = local_9c;
  param_1 = param_1 + param_2 * 4;
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18) = uVar10;
  FUN_2c674268(*(int *)(param_1 + 0x28) + 0x1c,0,0x32);
  FUN_2c674668(*(int *)(param_1 + 0x28) + 0x1c,puVar7,uVar6);
  if (puVar7 != local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar7);
  }
  if (*DAT_2c5084fc != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

