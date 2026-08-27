/* FUN_2c5d12f8 @ 0x2c5d12f8 */

undefined4 * FUN_2c5d12f8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = FUN_2c66b624(param_2,DAT_2c5d1490);
  piVar2 = LAB_2c5d14a8;
  if (iVar5 == 0) {
    if (*LAB_2c5d14a8 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    puVar6 = (undefined4 *)FUN_2c47245c(0,0x18);
    uVar4 = DAT_2c5d14c0;
    uVar3 = DAT_2c5d14bc;
    *puVar6 = 0;
    puVar6[2] = 0x1003;
    uVar1 = DAT_2c5d1490;
    *(undefined1 *)(puVar6 + 1) = 2;
    puVar6[5] = uVar1;
    puVar6[3] = uVar3;
    puVar6[4] = uVar4;
    return puVar6;
  }
  iVar5 = FUN_2c66b624(param_2,DAT_2c5d1494);
  piVar2 = LAB_2c5d14a8;
  if (iVar5 == 0) {
    if (*LAB_2c5d14a8 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    puVar6 = (undefined4 *)FUN_2c47245c(0,0x18);
    uVar4 = DAT_2c5d14b8;
    uVar3 = DAT_2c5d14b4;
    *puVar6 = 0;
    puVar6[2] = 0x1002;
    uVar1 = DAT_2c5d1494;
    *(undefined1 *)(puVar6 + 1) = 3;
    puVar6[5] = uVar1;
    puVar6[3] = uVar3;
    puVar6[4] = uVar4;
    return puVar6;
  }
  iVar5 = FUN_2c66b624(param_2,DAT_2c5d1498);
  piVar2 = LAB_2c5d14a8;
  if (iVar5 == 0) {
    if (*LAB_2c5d14a8 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    puVar6 = (undefined4 *)FUN_2c47245c(0,0x18);
    uVar4 = DAT_2c5d14d0;
    uVar3 = DAT_2c5d14cc;
    *puVar6 = 0;
    puVar6[2] = 0x1004;
    uVar1 = DAT_2c5d1498;
    *(undefined1 *)(puVar6 + 1) = 1;
    puVar6[5] = uVar1;
    puVar6[3] = uVar3;
    puVar6[4] = uVar4;
    return puVar6;
  }
  iVar5 = FUN_2c66b624(param_2,DAT_2c5d149c);
  piVar2 = LAB_2c5d14a8;
  if (iVar5 != 0) {
    iVar5 = FUN_2c66b624(param_2,DAT_2c5d14a0);
    piVar2 = LAB_2c5d14a8;
    if (iVar5 == 0) {
      if (*LAB_2c5d14a8 == 0) {
        FUN_2c4723c4();
        *piVar2 = 1;
      }
      puVar6 = (undefined4 *)FUN_2c47245c(0,0x18);
      uVar4 = DAT_2c5d14c8;
      uVar3 = DAT_2c5d14c4;
      *puVar6 = 0;
      puVar6[2] = 0x1024;
      uVar1 = DAT_2c5d14a0;
      *(undefined1 *)(puVar6 + 1) = 6;
      puVar6[5] = uVar1;
      puVar6[3] = uVar3;
      puVar6[4] = uVar4;
      return puVar6;
    }
    iVar5 = FUN_2c66b624(param_2,DAT_2c5d14a4);
    piVar2 = LAB_2c5d14a8;
    if (iVar5 == 0) {
      if (*LAB_2c5d14a8 == 0) {
        FUN_2c4723c4();
        *piVar2 = 1;
      }
      puVar6 = (undefined4 *)FUN_2c47245c(0,0x18);
      uVar4 = DAT_2c5d14b0;
      uVar3 = DAT_2c5d14ac;
      *puVar6 = 0;
      puVar6[2] = 0x1035;
      uVar1 = DAT_2c5d14a4;
      *(undefined1 *)(puVar6 + 1) = 4;
      puVar6[5] = uVar1;
      puVar6[3] = uVar3;
      puVar6[4] = uVar4;
      return puVar6;
    }
    return (undefined4 *)0x0;
  }
  if (*LAB_2c5d14a8 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar6 = (undefined4 *)FUN_2c47245c(0,0x18);
  uVar4 = DAT_2c5d14d8;
  uVar3 = DAT_2c5d14d4;
  *puVar6 = 0;
  puVar6[2] = 0x1001;
  uVar1 = DAT_2c5d149c;
  *(undefined1 *)(puVar6 + 1) = 5;
  puVar6[5] = uVar1;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  return puVar6;
}

