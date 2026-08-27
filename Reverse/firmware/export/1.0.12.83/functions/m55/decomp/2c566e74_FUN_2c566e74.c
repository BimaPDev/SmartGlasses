/* FUN_2c566e74 @ 0x2c566e74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c566e74(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            int param_5,undefined4 *param_6,undefined1 param_7,undefined1 param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uStack_30;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c56713c;
  puVar2 = param_1 + 3;
  *param_1 = _LAB_2c567140;
  param_1[1] = puVar2;
  puVar4 = (undefined1 *)*param_2;
  uVar5 = param_2[1];
  if ((puVar4 + uVar5 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c567130;
  uStack_30 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(param_1 + 3) = *puVar4;
    }
    else if (uVar5 != 0) goto LAB_2c56706c;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c566cd4(&uStack_30,0);
    param_1[1] = puVar2;
    param_1[3] = uStack_30;
LAB_2c56706c:
    FUN_2c674668(puVar2,puVar4,uVar5);
    puVar2 = (undefined4 *)param_1[1];
  }
  param_1[2] = uStack_30;
  *(undefined1 *)((int)puVar2 + uStack_30) = 0;
  puVar2 = param_1 + 9;
  param_1[7] = puVar2;
  puVar4 = (undefined1 *)*param_3;
  uVar5 = param_3[1];
  if ((puVar4 + uVar5 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c567130;
  uStack_30 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(param_1 + 9) = *puVar4;
    }
    else if (uVar5 != 0) goto LAB_2c5670b2;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c566cd4(&uStack_30,0);
    param_1[7] = puVar2;
    param_1[9] = uStack_30;
LAB_2c5670b2:
    FUN_2c674668(puVar2,puVar4,uVar5);
    puVar2 = (undefined4 *)param_1[7];
  }
  param_1[8] = uStack_30;
  *(undefined1 *)((int)puVar2 + uStack_30) = 0;
  puVar2 = param_1 + 0xf;
  param_1[0xd] = puVar2;
  puVar4 = (undefined1 *)*param_4;
  uVar5 = param_4[1];
  if ((puVar4 + uVar5 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c567130;
  uStack_30 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(param_1 + 0xf) = *puVar4;
    }
    else if (uVar5 != 0) goto LAB_2c567092;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c566cd4(&uStack_30,0);
    param_1[0xd] = puVar2;
    param_1[0xf] = uStack_30;
LAB_2c567092:
    FUN_2c674668(puVar2,puVar4,uVar5);
    puVar2 = (undefined4 *)param_1[0xd];
  }
  param_1[0xe] = uStack_30;
  *(undefined1 *)((int)puVar2 + uStack_30) = 0;
  piVar1 = _LAB_2c567144;
  if (*_LAB_2c567144 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0x4c);
  puVar3 = puVar2 + 3;
  *puVar2 = _LAB_2c567148;
  puVar2[1] = puVar3;
  puVar4 = *(undefined1 **)(param_5 + 4);
  uVar5 = *(uint *)(param_5 + 8);
  if ((puVar4 + uVar5 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c567130;
  uStack_30 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(puVar2 + 3) = *puVar4;
    }
    else if (uVar5 != 0) goto LAB_2c567106;
  }
  else {
    puVar3 = (undefined4 *)FUN_2c566cd4(&uStack_30,0);
    puVar2[1] = puVar3;
    puVar2[3] = uStack_30;
LAB_2c567106:
    FUN_2c674668(puVar3,puVar4,uVar5);
    puVar3 = (undefined4 *)puVar2[1];
  }
  puVar2[2] = uStack_30;
  *(undefined1 *)((int)puVar3 + uStack_30) = 0;
  puVar3 = puVar2 + 9;
  puVar2[7] = puVar3;
  puVar4 = *(undefined1 **)(param_5 + 0x1c);
  uVar5 = *(uint *)(param_5 + 0x20);
  if ((puVar4 + uVar5 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c567130;
  uStack_30 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(puVar2 + 9) = *puVar4;
    }
    else if (uVar5 != 0) goto LAB_2c5670ea;
  }
  else {
    puVar3 = (undefined4 *)FUN_2c566cd4(&uStack_30,0);
    puVar2[7] = puVar3;
    puVar2[9] = uStack_30;
LAB_2c5670ea:
    FUN_2c674668(puVar3,puVar4,uVar5);
    puVar3 = (undefined4 *)puVar2[7];
  }
  puVar2[8] = uStack_30;
  *(undefined1 *)((int)puVar3 + uStack_30) = 0;
  puVar3 = puVar2 + 0xf;
  puVar2[0xd] = puVar3;
  puVar4 = *(undefined1 **)(param_5 + 0x34);
  uVar5 = *(uint *)(param_5 + 0x38);
  if ((puVar4 + uVar5 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c567130;
  uStack_30 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(puVar2 + 0xf) = *puVar4;
    }
    else if (uVar5 != 0) goto LAB_2c5670ce;
  }
  else {
    puVar3 = (undefined4 *)FUN_2c566cd4(&uStack_30,0);
    puVar2[0xd] = puVar3;
    puVar2[0xf] = uStack_30;
LAB_2c5670ce:
    FUN_2c674668(puVar3,puVar4,uVar5);
    puVar3 = (undefined4 *)puVar2[0xd];
  }
  puVar2[0xe] = uStack_30;
  *(undefined1 *)((int)puVar3 + uStack_30) = 0;
  puVar3 = param_1 + 0x16;
  param_1[0x13] = puVar2;
  param_1[0x14] = puVar3;
  puVar4 = (undefined1 *)*param_6;
  uVar5 = param_6[1];
  if ((puVar4 + uVar5 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) {
LAB_2c567130:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c56714c);
  }
  uStack_30 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(param_1 + 0x16) = *puVar4;
      goto LAB_2c567002;
    }
    if (uVar5 == 0) goto LAB_2c567002;
  }
  else {
    puVar3 = (undefined4 *)FUN_2c566cd4(&uStack_30,0);
    param_1[0x14] = puVar3;
    param_1[0x16] = uStack_30;
  }
  FUN_2c674668(puVar3,puVar4,uVar5);
  puVar3 = (undefined4 *)param_1[0x14];
LAB_2c567002:
  param_1[0x15] = uStack_30;
  *(undefined1 *)((int)puVar3 + uStack_30) = 0;
  param_1[0x1a] = 0;
  piVar1 = _LAB_2c56713c;
  *(undefined1 *)(param_1 + 0x1b) = param_7;
  *(undefined1 *)((int)param_1 + 0x6d) = param_8;
  if (*piVar1 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

