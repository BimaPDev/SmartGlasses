/* FUN_2c57ff38 @ 0x2c57ff38 */

void FUN_2c57ff38(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint local_20;
  int local_1c;
  
  local_1c = *DAT_2c580214;
  puVar2 = param_1 + 3;
  *param_1 = DAT_2c580210;
  param_1[1] = puVar2;
  puVar4 = *(undefined1 **)(param_2 + 4);
  uVar3 = *(uint *)(param_2 + 8);
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c58027e;
  local_20 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 3) = *puVar4;
    }
    else if (uVar3 != 0) goto LAB_2c58016e;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c57fec8(&local_20,0,0);
    param_1[1] = puVar2;
    param_1[3] = local_20;
LAB_2c58016e:
    FUN_2c674668(puVar2,puVar4,uVar3);
    puVar2 = (undefined4 *)param_1[1];
  }
  param_1[2] = local_20;
  *(undefined1 *)((int)puVar2 + local_20) = 0;
  puVar2 = param_1 + 10;
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = puVar2;
  puVar4 = *(undefined1 **)(param_2 + 0x20);
  uVar3 = *(uint *)(param_2 + 0x24);
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c58027e;
  local_20 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 10) = *puVar4;
    }
    else if (uVar3 != 0) goto LAB_2c5801a6;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c57fec8(&local_20,0);
    param_1[8] = puVar2;
    param_1[10] = local_20;
LAB_2c5801a6:
    FUN_2c674668(puVar2,puVar4,uVar3);
    puVar2 = (undefined4 *)param_1[8];
  }
  param_1[9] = local_20;
  *(undefined1 *)((int)puVar2 + local_20) = 0;
  puVar2 = param_1 + 0x11;
  uVar1 = *(undefined1 *)(param_2 + 0x38);
  param_1[0xf] = puVar2;
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  puVar4 = *(undefined1 **)(param_2 + 0x3c);
  uVar3 = *(uint *)(param_2 + 0x40);
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c58027e;
  local_20 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 0x11) = *puVar4;
    }
    else if (uVar3 != 0) goto LAB_2c58018a;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c57fec8(&local_20,0);
    param_1[0xf] = puVar2;
    param_1[0x11] = local_20;
LAB_2c58018a:
    FUN_2c674668(puVar2,puVar4,uVar3);
    puVar2 = (undefined4 *)param_1[0xf];
  }
  param_1[0x10] = local_20;
  *(undefined1 *)((int)puVar2 + local_20) = 0;
  puVar2 = param_1 + 0x17;
  param_1[0x15] = puVar2;
  puVar4 = *(undefined1 **)(param_2 + 0x54);
  uVar3 = *(uint *)(param_2 + 0x58);
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c58027e;
  local_20 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 0x17) = *puVar4;
    }
    else if (uVar3 != 0) goto LAB_2c580200;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c57fec8(&local_20,0);
    param_1[0x15] = puVar2;
    param_1[0x17] = local_20;
LAB_2c580200:
    FUN_2c674668(puVar2,puVar4,uVar3);
    puVar2 = (undefined4 *)param_1[0x15];
  }
  param_1[0x16] = local_20;
  *(undefined1 *)((int)puVar2 + local_20) = 0;
  puVar2 = param_1 + 0x1d;
  param_1[0x1b] = puVar2;
  puVar4 = *(undefined1 **)(param_2 + 0x6c);
  uVar3 = *(uint *)(param_2 + 0x70);
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c58027e;
  local_20 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 0x1d) = *puVar4;
    }
    else if (uVar3 != 0) goto LAB_2c5801e4;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c57fec8(&local_20,0);
    param_1[0x1b] = puVar2;
    param_1[0x1d] = local_20;
LAB_2c5801e4:
    FUN_2c674668(puVar2,puVar4,uVar3);
    puVar2 = (undefined4 *)param_1[0x1b];
  }
  param_1[0x1c] = local_20;
  *(undefined1 *)((int)puVar2 + local_20) = 0;
  puVar2 = param_1 + 0x23;
  param_1[0x21] = puVar2;
  puVar4 = *(undefined1 **)(param_2 + 0x84);
  uVar3 = *(uint *)(param_2 + 0x88);
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c58027e;
  local_20 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 0x23) = *puVar4;
    }
    else if (uVar3 != 0) goto LAB_2c5801c6;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c57fec8(&local_20,0);
    param_1[0x21] = puVar2;
    param_1[0x23] = local_20;
LAB_2c5801c6:
    FUN_2c674668(puVar2,puVar4,uVar3);
    puVar2 = (undefined4 *)param_1[0x21];
  }
  param_1[0x22] = local_20;
  *(undefined1 *)((int)puVar2 + local_20) = 0;
  puVar2 = param_1 + 0x29;
  param_1[0x27] = puVar2;
  puVar4 = *(undefined1 **)(param_2 + 0x9c);
  uVar3 = *(uint *)(param_2 + 0xa0);
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c58027e;
  local_20 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 0x29) = *puVar4;
    }
    else if (uVar3 != 0) goto LAB_2c58024c;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c57fec8(&local_20,0);
    param_1[0x27] = puVar2;
    param_1[0x29] = local_20;
LAB_2c58024c:
    FUN_2c674668(puVar2,puVar4,uVar3);
    puVar2 = (undefined4 *)param_1[0x27];
  }
  param_1[0x28] = local_20;
  *(undefined1 *)((int)puVar2 + local_20) = 0;
  puVar2 = param_1 + 0x2f;
  param_1[0x2d] = puVar2;
  puVar4 = *(undefined1 **)(param_2 + 0xb4);
  uVar3 = *(uint *)(param_2 + 0xb8);
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c58027e;
  local_20 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 0x2f) = *puVar4;
    }
    else if (uVar3 != 0) goto LAB_2c58022a;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c57fec8(&local_20,0);
    param_1[0x2d] = puVar2;
    param_1[0x2f] = local_20;
LAB_2c58022a:
    FUN_2c674668(puVar2,puVar4,uVar3);
    puVar2 = (undefined4 *)param_1[0x2d];
  }
  param_1[0x2e] = local_20;
  *(undefined1 *)((int)puVar2 + local_20) = 0;
  puVar2 = param_1 + 0x35;
  param_1[0x33] = puVar2;
  puVar4 = *(undefined1 **)(param_2 + 0xcc);
  uVar3 = *(uint *)(param_2 + 0xd0);
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) {
LAB_2c58027e:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c580288);
  }
  local_20 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 0x35) = *puVar4;
      goto LAB_2c580106;
    }
    if (uVar3 == 0) goto LAB_2c580106;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c57fec8(&local_20,0);
    param_1[0x33] = puVar2;
    param_1[0x35] = local_20;
  }
  FUN_2c674668(puVar2,puVar4,uVar3);
  puVar2 = (undefined4 *)param_1[0x33];
LAB_2c580106:
  param_1[0x34] = local_20;
  *(undefined1 *)((int)puVar2 + local_20) = 0;
  if (*DAT_2c580214 != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

