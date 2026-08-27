/* FUN_2c571b28 @ 0x2c571b28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c571b28(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint local_20;
  int local_1c;
  
  uVar5 = _LAB_2c571cd4;
  local_1c = *_LAB_2c571cd0;
  uVar3 = 0;
  puVar2 = param_1 + 5;
  *param_1 = _LAB_2c571ccc;
  uVar4 = *(undefined4 *)(param_2 + 8);
  param_1[1] = uVar5;
  param_1[2] = uVar4;
  param_1[3] = puVar2;
  puVar7 = *(undefined1 **)(param_2 + 0xc);
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((puVar7 + uVar6 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) goto LAB_2c571cc0;
  local_20 = uVar6;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)(param_1 + 5) = *puVar7;
    }
    else if (uVar6 != 0) goto LAB_2c571c5e;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c5719a0(&local_20,0);
    param_1[3] = puVar2;
    param_1[5] = local_20;
LAB_2c571c5e:
    FUN_2c674668(puVar2,puVar7,uVar6);
    puVar2 = (undefined4 *)param_1[3];
    uVar3 = extraout_r1;
  }
  param_1[4] = local_20;
  *(undefined1 *)((int)puVar2 + local_20) = 0;
  puVar2 = param_1 + 0xc;
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  param_1[10] = puVar2;
  puVar7 = *(undefined1 **)(param_2 + 0x28);
  uVar6 = *(uint *)(param_2 + 0x2c);
  if ((puVar7 + uVar6 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) goto LAB_2c571cc0;
  local_20 = uVar6;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)(param_1 + 0xc) = *puVar7;
    }
    else if (uVar6 != 0) goto LAB_2c571c96;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c5719a0(&local_20,0);
    param_1[10] = puVar2;
    param_1[0xc] = local_20;
LAB_2c571c96:
    FUN_2c674668(puVar2,puVar7,uVar6);
    puVar2 = (undefined4 *)param_1[10];
    uVar3 = extraout_r1_01;
  }
  param_1[0xb] = local_20;
  *(undefined1 *)((int)puVar2 + local_20) = 0;
  puVar2 = param_1 + 0x12;
  param_1[0x10] = puVar2;
  puVar7 = *(undefined1 **)(param_2 + 0x40);
  uVar6 = *(uint *)(param_2 + 0x44);
  if ((puVar7 + uVar6 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) goto LAB_2c571cc0;
  local_20 = uVar6;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)(param_1 + 0x12) = *puVar7;
    }
    else if (uVar6 != 0) goto LAB_2c571c7a;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c5719a0(&local_20,0);
    param_1[0x10] = puVar2;
    param_1[0x12] = local_20;
LAB_2c571c7a:
    FUN_2c674668(puVar2,puVar7,uVar6);
    puVar2 = (undefined4 *)param_1[0x10];
    uVar3 = extraout_r1_00;
  }
  param_1[0x11] = local_20;
  uVar5 = _LAB_2c571cd8;
  *(undefined1 *)((int)puVar2 + local_20) = 0;
  puVar2 = param_1 + 0x1f;
  param_1[0x16] = *(undefined4 *)(param_2 + 0x58);
  uVar4 = *(undefined4 *)(param_2 + 0x60);
  param_1[0x17] = uVar5;
  param_1[0x18] = uVar4;
  uVar5 = *(undefined4 *)(param_2 + 0x68);
  *(undefined2 *)(param_1 + 0x19) = *(undefined2 *)(param_2 + 100);
  param_1[0x1a] = uVar5;
  uVar5 = *(undefined4 *)(param_2 + 0x6c);
  uVar4 = *(undefined4 *)(param_2 + 0x70);
  param_1[0x1d] = puVar2;
  param_1[0x1b] = uVar5;
  param_1[0x1c] = uVar4;
  puVar7 = *(undefined1 **)(param_2 + 0x74);
  uVar6 = *(uint *)(param_2 + 0x78);
  if ((puVar7 + uVar6 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) {
LAB_2c571cc0:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c571cdc,uVar3);
  }
  local_20 = uVar6;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)(param_1 + 0x1f) = *puVar7;
      goto LAB_2c571c10;
    }
    if (uVar6 == 0) goto LAB_2c571c10;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c5719a0(&local_20,0);
    param_1[0x1d] = puVar2;
    param_1[0x1f] = local_20;
  }
  FUN_2c674668(puVar2,puVar7,uVar6);
  puVar2 = (undefined4 *)param_1[0x1d];
LAB_2c571c10:
  param_1[0x1e] = local_20;
  *(undefined1 *)((int)puVar2 + local_20) = 0;
  uVar5 = *(undefined4 *)(param_2 + 0x8c);
  uVar3 = *(undefined4 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x94);
  piVar1 = _LAB_2c571cd0;
  param_1[0x23] = uVar5;
  param_1[0x24] = uVar3;
  if (*piVar1 != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

