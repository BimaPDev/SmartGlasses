/* FUN_2c54a6b4 @ 0x2c54a6b4 */

undefined4 * FUN_2c54a6b4(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  puVar2 = param_1 + 3;
  *param_1 = DAT_2c54a8d8;
  param_1[1] = puVar2;
  piVar1 = DAT_2c54a8dc;
  puVar4 = *(undefined1 **)(param_2 + 4);
  uVar3 = *(uint *)(param_2 + 8);
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c54a8ca;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 3) = *puVar4;
    }
    else if (uVar3 != 0) goto LAB_2c54a7d4;
  }
  else {
    if ((int)uVar3 < 0) goto LAB_2c54a8d0;
    if (*DAT_2c54a8dc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar3 + 1);
    param_1[3] = uVar3;
    param_1[1] = puVar2;
LAB_2c54a7d4:
    FUN_2c674668(puVar2,puVar4,uVar3);
    puVar2 = (undefined4 *)param_1[1];
  }
  param_1[2] = uVar3;
  *(undefined1 *)((int)puVar2 + uVar3) = 0;
  puVar2 = param_1 + 9;
  param_1[7] = puVar2;
  piVar1 = DAT_2c54a8dc;
  puVar4 = *(undefined1 **)(param_2 + 0x1c);
  uVar3 = *(uint *)(param_2 + 0x20);
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c54a8ca;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 9) = *puVar4;
    }
    else if (uVar3 != 0) goto LAB_2c54a7fc;
  }
  else {
    if ((int)uVar3 < 0) goto LAB_2c54a8d0;
    if (*DAT_2c54a8dc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar3 + 1);
    param_1[9] = uVar3;
    param_1[7] = puVar2;
LAB_2c54a7fc:
    FUN_2c674668(puVar2,puVar4,uVar3);
    puVar2 = (undefined4 *)param_1[7];
  }
  param_1[8] = uVar3;
  *(undefined1 *)((int)puVar2 + uVar3) = 0;
  puVar2 = param_1 + 0xf;
  param_1[0xd] = puVar2;
  piVar1 = DAT_2c54a8dc;
  puVar4 = *(undefined1 **)(param_2 + 0x34);
  uVar3 = *(uint *)(param_2 + 0x38);
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c54a8ca;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 0xf) = *puVar4;
    }
    else if (uVar3 != 0) goto LAB_2c54a824;
  }
  else {
    if ((int)uVar3 < 0) goto LAB_2c54a8d0;
    if (*DAT_2c54a8dc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar3 + 1);
    param_1[0xf] = uVar3;
    param_1[0xd] = puVar2;
LAB_2c54a824:
    FUN_2c674668(puVar2,puVar4,uVar3);
    puVar2 = (undefined4 *)param_1[0xd];
  }
  param_1[0xe] = uVar3;
  *(undefined1 *)((int)puVar2 + uVar3) = 0;
  puVar2 = param_1 + 0x15;
  param_1[0x13] = puVar2;
  piVar1 = DAT_2c54a8dc;
  puVar4 = *(undefined1 **)(param_2 + 0x4c);
  uVar3 = *(uint *)(param_2 + 0x50);
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c54a8ca;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 0x15) = *puVar4;
    }
    else if (uVar3 != 0) goto LAB_2c54a84a;
  }
  else {
    if ((int)uVar3 < 0) goto LAB_2c54a8d0;
    if (*DAT_2c54a8dc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar3 + 1);
    param_1[0x15] = uVar3;
    param_1[0x13] = puVar2;
LAB_2c54a84a:
    FUN_2c674668(puVar2,puVar4,uVar3);
    puVar2 = (undefined4 *)param_1[0x13];
  }
  param_1[0x14] = uVar3;
  *(undefined1 *)((int)puVar2 + uVar3) = 0;
  puVar2 = param_1 + 0x1b;
  param_1[0x19] = puVar2;
  piVar1 = DAT_2c54a8dc;
  puVar4 = *(undefined1 **)(param_2 + 100);
  uVar3 = *(uint *)(param_2 + 0x68);
  if ((puVar4 + uVar3 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) {
LAB_2c54a8ca:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c54a8e0);
  }
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 0x1b) = *puVar4;
      goto LAB_2c54a78a;
    }
    if (uVar3 == 0) goto LAB_2c54a78a;
  }
  else {
    if ((int)uVar3 < 0) {
LAB_2c54a8d0:
                    /* WARNING: Subroutine does not return */
      FUN_2c658680(DAT_2c54a8e4);
    }
    if (*DAT_2c54a8dc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar3 + 1);
    param_1[0x1b] = uVar3;
    param_1[0x19] = puVar2;
  }
  FUN_2c674668(puVar2,puVar4,uVar3);
  puVar2 = (undefined4 *)param_1[0x19];
LAB_2c54a78a:
  param_1[0x1a] = uVar3;
  *(undefined1 *)((int)puVar2 + uVar3) = 0;
  return param_1;
}

