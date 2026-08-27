/* FUN_2c53ed3c @ 0x2c53ed3c */

void FUN_2c53ed3c(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  puVar2 = param_1 + 3;
  *param_1 = DAT_2c53f078;
  param_1[1] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 4);
  uVar4 = *(uint *)(param_2 + 8);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 3) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f2d4;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[3] = uVar4;
    param_1[1] = puVar2;
LAB_2c53f2d4:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[1];
  }
  param_1[2] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0xc;
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = uVar3;
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  param_1[10] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x28);
  uVar4 = *(uint *)(param_2 + 0x2c);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0xc) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f300;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0xc] = uVar4;
    param_1[10] = puVar2;
LAB_2c53f300:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[10];
  }
  param_1[0xb] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x12;
  param_1[0x10] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x40);
  uVar4 = *(uint *)(param_2 + 0x44);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x12) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f32c;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x12] = uVar4;
    param_1[0x10] = puVar2;
LAB_2c53f32c:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x10];
  }
  param_1[0x11] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x18;
  param_1[0x16] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x58);
  uVar4 = *(uint *)(param_2 + 0x5c);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x18) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f358;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x18] = uVar4;
    param_1[0x16] = puVar2;
LAB_2c53f358:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x16];
  }
  param_1[0x17] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x1e;
  param_1[0x1c] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x70);
  uVar4 = *(uint *)(param_2 + 0x74);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x1e) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f384;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x1e] = uVar4;
    param_1[0x1c] = puVar2;
LAB_2c53f384:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x1c];
  }
  param_1[0x1d] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x24;
  param_1[0x22] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x88);
  uVar4 = *(uint *)(param_2 + 0x8c);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x24) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f3b4;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x24] = uVar4;
    param_1[0x22] = puVar2;
LAB_2c53f3b4:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x22];
  }
  param_1[0x23] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x2a;
  param_1[0x28] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0xa0);
  uVar4 = *(uint *)(param_2 + 0xa4);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x2a) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f3e6;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x2a] = uVar4;
    param_1[0x28] = puVar2;
LAB_2c53f3e6:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x28];
  }
  param_1[0x29] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x30;
  param_1[0x2e] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0xb8);
  uVar4 = *(uint *)(param_2 + 0xbc);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x30) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f418;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x30] = uVar4;
    param_1[0x2e] = puVar2;
LAB_2c53f418:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x2e];
  }
  param_1[0x2f] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x36;
  param_1[0x34] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0xd0);
  uVar4 = *(uint *)(param_2 + 0xd4);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x36) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f44a;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x36] = uVar4;
    param_1[0x34] = puVar2;
LAB_2c53f44a:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x34];
  }
  param_1[0x35] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x3c;
  param_1[0x3a] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0xe8);
  uVar4 = *(uint *)(param_2 + 0xec);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x3c) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f47c;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x3c] = uVar4;
    param_1[0x3a] = puVar2;
LAB_2c53f47c:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x3a];
  }
  param_1[0x3b] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x42;
  param_1[0x40] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x100);
  uVar4 = *(uint *)(param_2 + 0x104);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x42) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f4ae;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x42] = uVar4;
    param_1[0x40] = puVar2;
LAB_2c53f4ae:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x40];
  }
  param_1[0x41] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x48;
  param_1[0x46] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x118);
  uVar4 = *(uint *)(param_2 + 0x11c);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x48) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f4e0;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x48] = uVar4;
    param_1[0x46] = puVar2;
LAB_2c53f4e0:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x46];
  }
  param_1[0x47] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x4e;
  param_1[0x4c] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x130);
  uVar4 = *(uint *)(param_2 + 0x134);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x4e) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f512;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x4e] = uVar4;
    param_1[0x4c] = puVar2;
LAB_2c53f512:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x4c];
  }
  param_1[0x4d] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x54;
  param_1[0x52] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x148);
  uVar4 = *(uint *)(param_2 + 0x14c);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x54) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f544;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x54] = uVar4;
    param_1[0x52] = puVar2;
LAB_2c53f544:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x52];
  }
  param_1[0x53] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x5a;
  param_1[0x58] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x160);
  uVar4 = *(uint *)(param_2 + 0x164);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x5a) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f576;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x5a] = uVar4;
    param_1[0x58] = puVar2;
LAB_2c53f576:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x58];
  }
  param_1[0x59] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x60;
  param_1[0x5e] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x178);
  uVar4 = *(uint *)(param_2 + 0x17c);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x60) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f5a8;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x60] = uVar4;
    param_1[0x5e] = puVar2;
LAB_2c53f5a8:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x5e];
  }
  param_1[0x5f] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x66;
  param_1[100] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 400);
  uVar4 = *(uint *)(param_2 + 0x194);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x66) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f5da;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x66] = uVar4;
    param_1[100] = puVar2;
LAB_2c53f5da:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[100];
  }
  param_1[0x65] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x6c;
  param_1[0x6a] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x1a8);
  uVar4 = *(uint *)(param_2 + 0x1ac);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x6c) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f63e;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x6c] = uVar4;
    param_1[0x6a] = puVar2;
LAB_2c53f63e:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x6a];
  }
  param_1[0x6b] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x72;
  param_1[0x70] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x1c0);
  uVar4 = *(uint *)(param_2 + 0x1c4);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x72) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f60c;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x72] = uVar4;
    param_1[0x70] = puVar2;
LAB_2c53f60c:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x70];
  }
  param_1[0x71] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x78;
  param_1[0x76] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x1d8);
  uVar4 = *(uint *)(param_2 + 0x1dc);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x78) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f670;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x78] = uVar4;
    param_1[0x76] = puVar2;
LAB_2c53f670:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x76];
  }
  param_1[0x77] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x7e;
  param_1[0x7c] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x1f0);
  uVar4 = *(uint *)(param_2 + 500);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x7e) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f6a2;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x7e] = uVar4;
    param_1[0x7c] = puVar2;
LAB_2c53f6a2:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x7c];
  }
  param_1[0x7d] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x84;
  param_1[0x82] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x208);
  uVar4 = *(uint *)(param_2 + 0x20c);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x84) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f6d4;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x84] = uVar4;
    param_1[0x82] = puVar2;
LAB_2c53f6d4:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x82];
  }
  param_1[0x83] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x8a;
  param_1[0x88] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x220);
  uVar4 = *(uint *)(param_2 + 0x224);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c53f8c0;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x8a) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c53f706;
  }
  else {
    if ((int)uVar4 < 0) goto LAB_2c53f8c6;
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x8a] = uVar4;
    param_1[0x88] = puVar2;
LAB_2c53f706:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)param_1[0x88];
  }
  param_1[0x89] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  puVar2 = param_1 + 0x90;
  param_1[0x8e] = puVar2;
  piVar1 = DAT_2c53f8cc;
  puVar5 = *(undefined1 **)(param_2 + 0x238);
  uVar4 = *(uint *)(param_2 + 0x23c);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) {
LAB_2c53f8c0:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c53f8d0);
  }
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0x90) = *puVar5;
      goto LAB_2c53f1ea;
    }
    if (uVar4 == 0) goto LAB_2c53f1ea;
  }
  else {
    if ((int)uVar4 < 0) {
LAB_2c53f8c6:
                    /* WARNING: Subroutine does not return */
      FUN_2c658680(DAT_2c53f8d4);
    }
    if (*DAT_2c53f8cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,uVar4 + 1);
    param_1[0x90] = uVar4;
    param_1[0x8e] = puVar2;
  }
  FUN_2c674668(puVar2,puVar5,uVar4);
  puVar2 = (undefined4 *)param_1[0x8e];
LAB_2c53f1ea:
  param_1[0x8f] = uVar4;
  *(undefined1 *)((int)puVar2 + uVar4) = 0;
  return;
}

