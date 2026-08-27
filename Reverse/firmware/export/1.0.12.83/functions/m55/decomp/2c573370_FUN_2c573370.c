/* FUN_2c573370 @ 0x2c573370 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c573370(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uStack_20;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c573604;
  puVar1 = param_1 + 3;
  *param_1 = _LAB_2c573600;
  param_1[1] = puVar1;
  puVar6 = *(undefined1 **)(param_2 + 4);
  uVar5 = *(uint *)(param_2 + 8);
  if ((puVar6 + uVar5 != (undefined1 *)0x0) && (puVar6 == (undefined1 *)0x0)) goto LAB_2c5735f4;
  uStack_20 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(param_1 + 3) = *puVar6;
    }
    else if (uVar5 != 0) goto LAB_2c573552;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c573300(&uStack_20,0,0);
    param_1[1] = puVar1;
    param_1[3] = uStack_20;
LAB_2c573552:
    FUN_2c674668(puVar1,puVar6,uVar5);
    puVar1 = (undefined4 *)param_1[1];
  }
  param_1[2] = uStack_20;
  *(undefined1 *)((int)puVar1 + uStack_20) = 0;
  puVar1 = param_1 + 9;
  param_1[7] = puVar1;
  puVar6 = *(undefined1 **)(param_2 + 0x1c);
  uVar5 = *(uint *)(param_2 + 0x20);
  if ((puVar6 + uVar5 != (undefined1 *)0x0) && (puVar6 == (undefined1 *)0x0)) goto LAB_2c5735f4;
  uStack_20 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(param_1 + 9) = *puVar6;
    }
    else if (uVar5 != 0) goto LAB_2c57358a;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c573300(&uStack_20,0);
    param_1[7] = puVar1;
    param_1[9] = uStack_20;
LAB_2c57358a:
    FUN_2c674668(puVar1,puVar6,uVar5);
    puVar1 = (undefined4 *)param_1[7];
  }
  param_1[8] = uStack_20;
  *(undefined1 *)((int)puVar1 + uStack_20) = 0;
  puVar1 = param_1 + 0xf;
  param_1[0xd] = puVar1;
  puVar6 = *(undefined1 **)(param_2 + 0x34);
  uVar5 = *(uint *)(param_2 + 0x38);
  if ((puVar6 + uVar5 != (undefined1 *)0x0) && (puVar6 == (undefined1 *)0x0)) goto LAB_2c5735f4;
  uStack_20 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(param_1 + 0xf) = *puVar6;
    }
    else if (uVar5 != 0) goto LAB_2c57356e;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c573300(&uStack_20,0);
    param_1[0xd] = puVar1;
    param_1[0xf] = uStack_20;
LAB_2c57356e:
    FUN_2c674668(puVar1,puVar6,uVar5);
    puVar1 = (undefined4 *)param_1[0xd];
  }
  param_1[0xe] = uStack_20;
  *(undefined1 *)((int)puVar1 + uStack_20) = 0;
  puVar1 = param_1 + 0x15;
  param_1[0x13] = puVar1;
  puVar6 = *(undefined1 **)(param_2 + 0x4c);
  uVar5 = *(uint *)(param_2 + 0x50);
  if ((puVar6 + uVar5 != (undefined1 *)0x0) && (puVar6 == (undefined1 *)0x0)) goto LAB_2c5735f4;
  uStack_20 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(param_1 + 0x15) = *puVar6;
    }
    else if (uVar5 != 0) goto LAB_2c5735c4;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c573300(&uStack_20,0);
    param_1[0x13] = puVar1;
    param_1[0x15] = uStack_20;
LAB_2c5735c4:
    FUN_2c674668(puVar1,puVar6,uVar5);
    puVar1 = (undefined4 *)param_1[0x13];
  }
  param_1[0x14] = uStack_20;
  *(undefined1 *)((int)puVar1 + uStack_20) = 0;
  puVar1 = param_1 + 0x20;
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  param_1[0x1a] = *(undefined4 *)(param_2 + 0x68);
  param_1[0x1b] = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x70);
  uVar4 = *(undefined4 *)(param_2 + 0x74);
  param_1[0x1e] = puVar1;
  param_1[0x1c] = uVar3;
  param_1[0x1d] = uVar4;
  puVar6 = *(undefined1 **)(param_2 + 0x78);
  uVar5 = *(uint *)(param_2 + 0x7c);
  if ((puVar6 + uVar5 != (undefined1 *)0x0) && (puVar6 == (undefined1 *)0x0)) goto LAB_2c5735f4;
  uStack_20 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(param_1 + 0x20) = *puVar6;
    }
    else if (uVar5 != 0) goto LAB_2c5735a8;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c573300(&uStack_20,0);
    param_1[0x1e] = puVar1;
    param_1[0x20] = uStack_20;
LAB_2c5735a8:
    FUN_2c674668(puVar1,puVar6,uVar5);
    puVar1 = (undefined4 *)param_1[0x1e];
  }
  param_1[0x1f] = uStack_20;
  *(undefined1 *)((int)puVar1 + uStack_20) = 0;
  puVar1 = param_1 + 0x26;
  param_1[0x24] = puVar1;
  puVar6 = *(undefined1 **)(param_2 + 0x90);
  uVar5 = *(uint *)(param_2 + 0x94);
  if ((puVar6 + uVar5 != (undefined1 *)0x0) && (puVar6 == (undefined1 *)0x0)) {
LAB_2c5735f4:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c573608);
  }
  uStack_20 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(param_1 + 0x26) = *puVar6;
      goto LAB_2c5734a8;
    }
    if (uVar5 == 0) goto LAB_2c5734a8;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c573300(&uStack_20,0);
    param_1[0x24] = puVar1;
    param_1[0x26] = uStack_20;
  }
  FUN_2c674668(puVar1,puVar6,uVar5);
  puVar1 = (undefined4 *)param_1[0x24];
LAB_2c5734a8:
  param_1[0x25] = uStack_20;
  *(undefined1 *)((int)puVar1 + uStack_20) = 0;
  uVar2 = *(undefined4 *)(param_2 + 200);
  param_1[0x2e] = *(undefined4 *)(param_2 + 0xb8);
  uVar3 = *(undefined4 *)(param_2 + 0xa8);
  uVar4 = *(undefined4 *)(param_2 + 0xac);
  param_1[0x2f] = *(undefined4 *)(param_2 + 0xbc);
  param_1[0x2a] = uVar3;
  param_1[0x2b] = uVar4;
  uVar3 = *(undefined4 *)(param_2 + 0xb4);
  param_1[0x2c] = *(undefined4 *)(param_2 + 0xb0);
  param_1[0x2d] = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0xc4);
  param_1[0x30] = *(undefined4 *)(param_2 + 0xc0);
  param_1[0x31] = uVar3;
  uVar4 = *(undefined4 *)(param_2 + 0xcc);
  uVar3 = *(undefined4 *)(param_2 + 0xd0);
  param_1[0x32] = uVar2;
  param_1[0x33] = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0xd4);
  uVar4 = *(undefined4 *)(param_2 + 0xd8);
  param_1[0x34] = uVar3;
  param_1[0x35] = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0xdc);
  uVar3 = *(undefined4 *)(param_2 + 0xe0);
  param_1[0x36] = uVar4;
  param_1[0x37] = uVar2;
  uVar4 = *(undefined4 *)(param_2 + 0xe4);
  uVar2 = *(undefined4 *)(param_2 + 0xe8);
  param_1[0x38] = uVar3;
  param_1[0x39] = uVar4;
  param_1[0x3a] = uVar2;
  param_1[0x3b] = *(undefined4 *)(param_2 + 0xec);
  if (*_LAB_2c573604 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

