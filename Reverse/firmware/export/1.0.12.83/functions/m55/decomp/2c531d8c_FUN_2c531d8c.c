/* FUN_2c531d8c @ 0x2c531d8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c531d8c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  
  if ((param_2 == 0) || (iVar1 = FUN_2c48e82c(param_2), iVar1 != 0)) {
    FUN_2c674268(param_1,0,0x7c);
    *param_1 = (int)(param_1 + 2);
    param_1[0xc] = (int)(param_1 + 0xe);
    param_1[6] = (int)(param_1 + 8);
    param_1[0x12] = (int)(param_1 + 0x14);
    param_1[0x18] = (int)(param_1 + 0x1a);
    return param_1;
  }
  iVar1 = FUN_2c48e82c(param_2);
  if ((iVar1 == 0) && (iVar1 = FUN_2c48e424(param_2,_LAB_2c5320c4), iVar1 != 0)) {
    puVar10 = *(undefined1 **)(iVar1 + 0x10);
  }
  else {
    puVar10 = (undefined1 *)0x0;
  }
  iVar1 = FUN_2c48e82c(param_2);
  if ((iVar1 == 0) && (iVar1 = FUN_2c48e424(param_2,_LAB_2c5320c8), iVar1 != 0)) {
    puVar7 = *(undefined1 **)(iVar1 + 0x10);
  }
  else {
    puVar7 = (undefined1 *)0x0;
  }
  iVar1 = FUN_2c48e424(param_2,_LAB_2c5320cc);
  if (iVar1 == 0) {
    puVar5 = (undefined1 *)0x0;
    puVar6 = (undefined1 *)0x0;
  }
  else {
    iVar2 = FUN_2c48e82c();
    if ((iVar2 == 0) && (iVar2 = FUN_2c48e424(iVar1,_LAB_2c5320d0), iVar2 != 0)) {
      puVar6 = *(undefined1 **)(iVar2 + 0x10);
    }
    else {
      puVar6 = (undefined1 *)0x0;
    }
    iVar2 = FUN_2c48e82c(iVar1);
    if (iVar2 == 0) {
      iVar1 = FUN_2c48e424(iVar1,_LAB_2c5320d4);
      puVar5 = (undefined1 *)0x0;
      if (iVar1 != 0) {
        puVar5 = *(undefined1 **)(iVar1 + 0x10);
      }
    }
    else {
      puVar5 = (undefined1 *)0x0;
    }
  }
  iVar1 = FUN_2c48e82c(param_2);
  if ((iVar1 == 0) && (iVar1 = FUN_2c48e424(param_2,_LAB_2c5320d8), iVar1 != 0)) {
    puVar9 = *(undefined1 **)(iVar1 + 0x10);
  }
  else {
    puVar9 = (undefined1 *)0x0;
  }
  iVar2 = FUN_2c48e82c(param_2);
  iVar1 = 0;
  if ((iVar2 == 0) && (iVar2 = FUN_2c48e424(param_2,_LAB_2c5320dc), iVar2 != 0)) {
    iVar1 = *(int *)(iVar2 + 0x14);
  }
  piVar4 = param_1 + 2;
  *param_1 = (int)piVar4;
  if (puVar10 == (undefined1 *)0x0) goto LAB_2c531ec0;
  uVar3 = FUN_2c66c4ec(puVar10);
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 2) = *puVar10;
    }
    else if (uVar3 != 0) goto LAB_2c531fbe;
  }
  else {
    if (*DAT_2c5320e4 == 0) {
      FUN_2c4723c4();
      *DAT_2c5320e4 = 1;
    }
    piVar4 = (int *)FUN_2c47245c(0,uVar3 + 1);
    param_1[2] = uVar3;
    *param_1 = (int)piVar4;
LAB_2c531fbe:
    FUN_2c674668(piVar4,puVar10,uVar3);
    piVar4 = (int *)*param_1;
  }
  param_1[1] = uVar3;
  *(undefined1 *)((int)piVar4 + uVar3) = 0;
  piVar4 = param_1 + 8;
  param_1[6] = (int)piVar4;
  if (puVar7 == (undefined1 *)0x0) goto LAB_2c531ec0;
  uVar3 = FUN_2c66c4ec(puVar7);
  piVar8 = DAT_2c5320e4;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 8) = *puVar7;
    }
    else if (uVar3 != 0) goto LAB_2c53205a;
  }
  else {
    if (*DAT_2c5320e4 == 0) {
      FUN_2c4723c4();
      *piVar8 = 1;
    }
    piVar4 = (int *)FUN_2c47245c(0,uVar3 + 1);
    param_1[8] = uVar3;
    param_1[6] = (int)piVar4;
LAB_2c53205a:
    FUN_2c674668(piVar4,puVar7,uVar3);
    piVar4 = (int *)param_1[6];
  }
  piVar8 = param_1 + 0xe;
  param_1[7] = uVar3;
  *(undefined1 *)((int)piVar4 + uVar3) = 0;
  param_1[0xc] = (int)piVar8;
  if (puVar6 == (undefined1 *)0x0) goto LAB_2c531ec0;
  uVar3 = FUN_2c66c4ec(puVar6);
  piVar4 = DAT_2c5320e4;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 0xe) = *puVar6;
    }
    else if (uVar3 != 0) goto LAB_2c532032;
  }
  else {
    if (*DAT_2c5320e4 == 0) {
      FUN_2c4723c4();
      *piVar4 = 1;
    }
    piVar8 = (int *)FUN_2c47245c(0,uVar3 + 1);
    param_1[0xe] = uVar3;
    param_1[0xc] = (int)piVar8;
LAB_2c532032:
    FUN_2c674668(piVar8,puVar6,uVar3);
    piVar8 = (int *)param_1[0xc];
  }
  piVar4 = param_1 + 0x14;
  param_1[0xd] = uVar3;
  *(undefined1 *)((int)piVar8 + uVar3) = 0;
  param_1[0x12] = (int)piVar4;
  if (puVar5 == (undefined1 *)0x0) goto LAB_2c531ec0;
  uVar3 = FUN_2c66c4ec(puVar5);
  piVar8 = DAT_2c5320e4;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 0x14) = *puVar5;
    }
    else if (uVar3 != 0) goto LAB_2c53200a;
  }
  else {
    if (*DAT_2c5320e4 == 0) {
      FUN_2c4723c4();
      *piVar8 = 1;
    }
    piVar4 = (int *)FUN_2c47245c(0,uVar3 + 1);
    param_1[0x14] = uVar3;
    param_1[0x12] = (int)piVar4;
LAB_2c53200a:
    FUN_2c674668(piVar4,puVar5,uVar3);
    piVar4 = (int *)param_1[0x12];
  }
  param_1[0x13] = uVar3;
  *(undefined1 *)((int)piVar4 + uVar3) = 0;
  piVar4 = param_1 + 0x1a;
  param_1[0x18] = (int)piVar4;
  if (puVar9 == (undefined1 *)0x0) {
LAB_2c531ec0:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c5320e0);
  }
  uVar3 = FUN_2c66c4ec(puVar9);
  piVar8 = DAT_2c5320e4;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 0x1a) = *puVar9;
      goto LAB_2c531f6c;
    }
    if (uVar3 == 0) goto LAB_2c531f6c;
  }
  else {
    if (*DAT_2c5320e4 == 0) {
      FUN_2c4723c4();
      *piVar8 = 1;
    }
    piVar4 = (int *)FUN_2c47245c(0,uVar3 + 1);
    param_1[0x1a] = uVar3;
    param_1[0x18] = (int)piVar4;
  }
  FUN_2c674668(piVar4,puVar9,uVar3);
  piVar4 = (int *)param_1[0x18];
LAB_2c531f6c:
  param_1[0x19] = uVar3;
  *(undefined1 *)((int)piVar4 + uVar3) = 0;
  param_1[0x1e] = iVar1;
  return param_1;
}

