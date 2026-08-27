/* FUN_2c52bbd8 @ 0x2c52bbd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c52bbd8(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  uint uStack_30;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c52be78;
  uVar1 = *(undefined2 *)(param_2 + 4);
  *param_1 = _LAB_2c52be7c;
  *(undefined2 *)(param_1 + 1) = uVar1;
  iVar6 = *(int *)(param_2 + 8);
  iVar9 = *(int *)(param_2 + 0xc);
  param_1[2] = 0;
  param_1[3] = 0;
  iVar9 = iVar9 - iVar6;
  param_1[4] = 0;
  piVar2 = DAT_2c52be80;
  if (iVar9 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    if (*DAT_2c52be80 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    puVar4 = (undefined4 *)FUN_2c47245c(0,iVar9);
  }
  param_1[2] = puVar4;
  param_1[3] = puVar4;
  param_1[4] = iVar9 + (int)puVar4;
  uVar3 = _LAB_2c52be84;
  iVar9 = *(int *)(param_2 + 0xc);
  for (iVar6 = *(int *)(param_2 + 8); iVar6 != iVar9; iVar6 = iVar6 + 0x3c) {
    *puVar4 = uVar3;
    puVar5 = puVar4 + 5;
    puVar4[1] = *(undefined4 *)(iVar6 + 4);
    puVar4[2] = *(undefined4 *)(iVar6 + 8);
    puVar4[3] = puVar5;
    puVar8 = *(undefined1 **)(iVar6 + 0xc);
    uVar10 = *(uint *)(iVar6 + 0x10);
    if ((puVar8 + uVar10 != (undefined1 *)0x0) && (puVar8 == (undefined1 *)0x0)) goto LAB_2c52c00e;
    uStack_30 = uVar10;
    if (uVar10 < 0x10) {
      if (uVar10 == 1) {
        *(undefined1 *)(puVar4 + 5) = *puVar8;
      }
      else if (uVar10 != 0) goto LAB_2c52bcbc;
    }
    else {
      puVar5 = (undefined4 *)FUN_2c52b5c0(&uStack_30,0);
      puVar4[3] = puVar5;
      puVar4[5] = uStack_30;
LAB_2c52bcbc:
      FUN_2c674668(puVar5,puVar8,uVar10);
      puVar5 = (undefined4 *)puVar4[3];
    }
    puVar7 = puVar4 + 0xb;
    puVar4[4] = uStack_30;
    *(undefined1 *)((int)puVar5 + uStack_30) = 0;
    puVar4[9] = puVar7;
    puVar8 = *(undefined1 **)(iVar6 + 0x24);
    uVar10 = *(uint *)(iVar6 + 0x28);
    if ((puVar8 + uVar10 != (undefined1 *)0x0) && (puVar8 == (undefined1 *)0x0)) goto LAB_2c52c00e;
    uStack_30 = uVar10;
    if (uVar10 < 0x10) {
      if (uVar10 == 1) {
        *(undefined1 *)(puVar4 + 0xb) = *puVar8;
      }
      else if (uVar10 != 0) goto LAB_2c52bcde;
    }
    else {
      puVar7 = (undefined4 *)FUN_2c52b5c0(&uStack_30,0);
      puVar4[9] = puVar7;
      puVar4[0xb] = uStack_30;
LAB_2c52bcde:
      FUN_2c674668(puVar7,puVar8,uVar10);
      puVar7 = (undefined4 *)puVar4[9];
    }
    puVar4[10] = uStack_30;
    puVar4 = puVar4 + 0xf;
    *(undefined1 *)((int)puVar7 + uStack_30) = 0;
  }
  param_1[3] = puVar4;
  iVar9 = *(int *)(param_2 + 0x14);
  iVar6 = *(int *)(param_2 + 0x18);
  param_1[5] = 0;
  param_1[6] = 0;
  iVar6 = iVar6 - iVar9;
  param_1[7] = 0;
  piVar2 = DAT_2c52be80;
  if (iVar6 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    if (*DAT_2c52be80 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    puVar4 = (undefined4 *)FUN_2c47245c(0,iVar6);
  }
  param_1[5] = puVar4;
  param_1[6] = puVar4;
  param_1[7] = iVar6 + (int)puVar4;
  uVar3 = DAT_2c52be88;
  iVar9 = *(int *)(param_2 + 0x18);
  for (iVar6 = *(int *)(param_2 + 0x14); iVar6 != iVar9; iVar6 = iVar6 + 0x7c) {
    puVar5 = puVar4 + 3;
    *puVar4 = uVar3;
    puVar4[1] = puVar5;
    puVar8 = *(undefined1 **)(iVar6 + 4);
    uVar10 = *(uint *)(iVar6 + 8);
    if ((puVar8 + uVar10 != (undefined1 *)0x0) && (puVar8 == (undefined1 *)0x0)) goto LAB_2c52c00e;
    uStack_30 = uVar10;
    if (uVar10 < 0x10) {
      if (uVar10 == 1) {
        *(undefined1 *)(puVar4 + 3) = *puVar8;
      }
      else if (uVar10 != 0) goto LAB_2c52be4a;
    }
    else {
      puVar5 = (undefined4 *)FUN_2c52b5c0(&uStack_30,0);
      puVar4[1] = puVar5;
      puVar4[3] = uStack_30;
LAB_2c52be4a:
      FUN_2c674668(puVar5,puVar8,uVar10);
      puVar5 = (undefined4 *)puVar4[1];
    }
    puVar7 = puVar4 + 9;
    puVar4[2] = uStack_30;
    *(undefined1 *)((int)puVar5 + uStack_30) = 0;
    puVar4[7] = puVar7;
    puVar8 = *(undefined1 **)(iVar6 + 0x1c);
    uVar10 = *(uint *)(iVar6 + 0x20);
    if ((puVar8 + uVar10 != (undefined1 *)0x0) && (puVar8 == (undefined1 *)0x0)) goto LAB_2c52c00e;
    uStack_30 = uVar10;
    if (uVar10 < 0x10) {
      if (uVar10 == 1) {
        *(undefined1 *)(puVar4 + 9) = *puVar8;
      }
      else if (uVar10 != 0) goto LAB_2c52bea0;
    }
    else {
      puVar7 = (undefined4 *)FUN_2c52b5c0(&uStack_30,0);
      puVar4[7] = puVar7;
      puVar4[9] = uStack_30;
LAB_2c52bea0:
      FUN_2c674668(puVar7,puVar8,uVar10);
      puVar7 = (undefined4 *)puVar4[7];
    }
    puVar5 = puVar4 + 0xf;
    puVar4[8] = uStack_30;
    *(undefined1 *)((int)puVar7 + uStack_30) = 0;
    puVar4[0xd] = puVar5;
    puVar8 = *(undefined1 **)(iVar6 + 0x34);
    uVar10 = *(uint *)(iVar6 + 0x38);
    if ((puVar8 + uVar10 != (undefined1 *)0x0) && (puVar8 == (undefined1 *)0x0)) goto LAB_2c52c00e;
    uStack_30 = uVar10;
    if (uVar10 < 0x10) {
      if (uVar10 == 1) {
        *(undefined1 *)(puVar4 + 0xf) = *puVar8;
      }
      else if (uVar10 != 0) goto LAB_2c52be6a;
    }
    else {
      puVar5 = (undefined4 *)FUN_2c52b5c0(&uStack_30,0);
      puVar4[0xd] = puVar5;
      puVar4[0xf] = uStack_30;
LAB_2c52be6a:
      FUN_2c674668(puVar5,puVar8,uVar10);
      puVar5 = (undefined4 *)puVar4[0xd];
    }
    puVar7 = puVar4 + 0x15;
    puVar4[0xe] = uStack_30;
    *(undefined1 *)((int)puVar5 + uStack_30) = 0;
    puVar4[0x13] = puVar7;
    puVar8 = *(undefined1 **)(iVar6 + 0x4c);
    uVar10 = *(uint *)(iVar6 + 0x50);
    if ((puVar8 + uVar10 != (undefined1 *)0x0) && (puVar8 == (undefined1 *)0x0)) goto LAB_2c52c00e;
    uStack_30 = uVar10;
    if (uVar10 < 0x10) {
      if (uVar10 == 1) {
        *(undefined1 *)(puVar4 + 0x15) = *puVar8;
      }
      else if (uVar10 != 0) goto LAB_2c52bee4;
    }
    else {
      puVar7 = (undefined4 *)FUN_2c52b5c0(&uStack_30,0);
      puVar4[0x13] = puVar7;
      puVar4[0x15] = uStack_30;
LAB_2c52bee4:
      FUN_2c674668(puVar7,puVar8,uVar10);
      puVar7 = (undefined4 *)puVar4[0x13];
    }
    puVar5 = puVar4 + 0x1b;
    puVar4[0x14] = uStack_30;
    *(undefined1 *)((int)puVar7 + uStack_30) = 0;
    puVar4[0x19] = puVar5;
    puVar8 = *(undefined1 **)(iVar6 + 100);
    uVar10 = *(uint *)(iVar6 + 0x68);
    if ((puVar8 + uVar10 != (undefined1 *)0x0) && (puVar8 == (undefined1 *)0x0)) goto LAB_2c52c00e;
    uStack_30 = uVar10;
    if (uVar10 < 0x10) {
      if (uVar10 == 1) {
        *(undefined1 *)(puVar4 + 0x1b) = *puVar8;
      }
      else if (uVar10 != 0) goto LAB_2c52bec2;
    }
    else {
      puVar5 = (undefined4 *)FUN_2c52b5c0(&uStack_30,0);
      puVar4[0x19] = puVar5;
      puVar4[0x1b] = uStack_30;
LAB_2c52bec2:
      FUN_2c674668(puVar5,puVar8,uVar10);
      puVar5 = (undefined4 *)puVar4[0x19];
    }
    puVar4[0x1a] = uStack_30;
    puVar4 = puVar4 + 0x1f;
    *(undefined1 *)((int)puVar5 + uStack_30) = 0;
  }
  puVar5 = param_1 + 10;
  param_1[6] = puVar4;
  param_1[8] = puVar5;
  puVar8 = *(undefined1 **)(param_2 + 0x20);
  uVar10 = *(uint *)(param_2 + 0x24);
  if ((puVar8 + uVar10 != (undefined1 *)0x0) && (puVar8 == (undefined1 *)0x0)) goto LAB_2c52c00e;
  uStack_30 = uVar10;
  if (uVar10 < 0x10) {
    if (uVar10 == 1) {
      *(undefined1 *)(param_1 + 10) = *puVar8;
    }
    else if (uVar10 != 0) goto LAB_2c52bfec;
  }
  else {
    puVar5 = (undefined4 *)FUN_2c52b5c0(&uStack_30,0);
    param_1[8] = puVar5;
    param_1[10] = uStack_30;
LAB_2c52bfec:
    FUN_2c674668(puVar5,puVar8,uVar10);
    puVar5 = (undefined4 *)param_1[8];
  }
  param_1[9] = uStack_30;
  *(undefined1 *)((int)puVar5 + uStack_30) = 0;
  puVar4 = param_1 + 0x10;
  param_1[0xe] = puVar4;
  puVar8 = *(undefined1 **)(param_2 + 0x38);
  uVar10 = *(uint *)(param_2 + 0x3c);
  if ((puVar8 + uVar10 != (undefined1 *)0x0) && (puVar8 == (undefined1 *)0x0)) goto LAB_2c52c00e;
  uStack_30 = uVar10;
  if (uVar10 < 0x10) {
    if (uVar10 == 1) {
      *(undefined1 *)(param_1 + 0x10) = *puVar8;
    }
    else if (uVar10 != 0) goto LAB_2c52bfb4;
  }
  else {
    puVar4 = (undefined4 *)FUN_2c52b5c0(&uStack_30,0);
    param_1[0xe] = puVar4;
    param_1[0x10] = uStack_30;
LAB_2c52bfb4:
    FUN_2c674668(puVar4,puVar8,uVar10);
    puVar4 = (undefined4 *)param_1[0xe];
  }
  param_1[0xf] = uStack_30;
  *(undefined1 *)((int)puVar4 + uStack_30) = 0;
  puVar4 = param_1 + 0x16;
  param_1[0x14] = puVar4;
  puVar8 = *(undefined1 **)(param_2 + 0x50);
  uVar10 = *(uint *)(param_2 + 0x54);
  if ((puVar8 + uVar10 != (undefined1 *)0x0) && (puVar8 == (undefined1 *)0x0)) {
LAB_2c52c00e:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c52c01c);
  }
  uStack_30 = uVar10;
  if (uVar10 < 0x10) {
    if (uVar10 == 1) {
      *(undefined1 *)(param_1 + 0x16) = *puVar8;
      goto LAB_2c52bf70;
    }
    if (uVar10 == 0) goto LAB_2c52bf70;
  }
  else {
    puVar4 = (undefined4 *)FUN_2c52b5c0(&uStack_30,0);
    param_1[0x14] = puVar4;
    param_1[0x16] = uStack_30;
  }
  FUN_2c674668(puVar4,puVar8,uVar10);
  puVar4 = (undefined4 *)param_1[0x14];
LAB_2c52bf70:
  param_1[0x15] = uStack_30;
  *(undefined1 *)((int)puVar4 + uStack_30) = 0;
  if (*DAT_2c52c018 == iStack_2c) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

