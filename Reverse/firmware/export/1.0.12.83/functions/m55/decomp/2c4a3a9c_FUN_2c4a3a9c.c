/* FUN_2c4a3a9c @ 0x2c4a3a9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a3a9c(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  bool bVar11;
  
  piVar1 = _LAB_2c4a3bc8;
  puVar9 = (undefined4 *)*_LAB_2c4a3bc8;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)FUN_2c4a55c4(0xc);
    *piVar1 = (int)puVar9;
  }
  if (param_1 == (undefined4 *)0x0) {
    *(undefined1 *)puVar9 = 0xc;
    *(undefined1 *)(*piVar1 + 1) = 0xc;
    *(undefined2 *)(*piVar1 + 2) = 0x19;
    iVar8 = *piVar1;
    *(undefined2 *)(iVar8 + 8) = 0x10a;
    *(undefined2 *)(iVar8 + 10) = 0;
  }
  else {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9 = (undefined4 *)*piVar1;
    uVar6 = param_1[1];
    uVar7 = param_1[2];
    *puVar9 = *param_1;
    puVar9[1] = uVar6;
    puVar9[2] = uVar7;
  }
  piVar1 = _LAB_2c4a3bcc;
  puVar9 = (undefined4 *)*_LAB_2c4a3bcc;
  *_LAB_2c4a3bd0 = 3;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)FUN_2c4a55c4(4);
    *piVar1 = (int)puVar9;
  }
  if (param_2 == (undefined4 *)0x0) {
    *(undefined1 *)puVar9 = 0;
    *(undefined1 *)(*piVar1 + 1) = 1;
    *(undefined1 *)(*piVar1 + 2) = 2;
    *(undefined1 *)(*piVar1 + 3) = 0xff;
  }
  else {
    *puVar9 = 0;
    *(undefined4 *)*piVar1 = *param_2;
  }
  pcVar10 = (char *)*piVar1;
  *_LAB_2c4a3bd4 = 1;
  puVar2 = _LAB_2c4a3bdc;
  if ((*pcVar10 == -1) || (pcVar10[1] == -1)) {
    bVar11 = false;
  }
  else {
    bVar11 = pcVar10[2] != -1;
  }
  *_LAB_2c4a3bd8 = bVar11;
  puVar3 = _LAB_2c4a3be4;
  *_LAB_2c4a3be0 = 0;
  puVar4 = _LAB_2c4a3be8;
  *puVar2 = 0;
  *puVar4 = 0;
  puVar4 = _LAB_2c4a3bec;
  *puVar3 = 0;
  *puVar4 = 0;
  puVar2 = _LAB_2c4a3bf4;
  *_LAB_2c4a3bf0 = 0;
  puVar3 = _LAB_2c4a3bfc;
  *_LAB_2c4a3bf8 = 0;
  puVar4 = _LAB_2c4a3c00;
  *puVar2 = 0;
  *puVar4 = 0;
  puVar4 = _LAB_2c4a3c04;
  *puVar3 = 0;
  *puVar4 = 0;
  puVar4 = _LAB_2c4a3c10;
  puVar3 = _LAB_2c4a3c0c;
  *_LAB_2c4a3c08 = 0;
  *puVar4 = 0;
  *puVar3 = 0;
  puVar4 = _LAB_2c4a3c1c;
  puVar3 = _LAB_2c4a3c18;
  *_LAB_2c4a3c14 = 0;
  *puVar4 = 0;
  puVar5 = DAT_2c4a3c24;
  puVar4 = _LAB_2c4a3c20;
  *puVar3 = 0;
  puVar3 = DAT_2c4a3c2c;
  piVar1 = DAT_2c4a3c28;
  *puVar4 = 0;
  *puVar5 = 0;
  puVar5 = DAT_2c4a3c34;
  puVar4 = DAT_2c4a3c30;
  *puVar3 = 0;
  puVar9 = (undefined4 *)*piVar1;
  *puVar4 = 0;
  *puVar5 = 0;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)FUN_2c4a55c4(0x1c);
    *piVar1 = (int)puVar9;
  }
  *puVar9 = 0;
  iVar8 = *piVar1;
  *(undefined4 *)(iVar8 + 4) = 0;
  *(undefined4 *)(iVar8 + 8) = 0;
  *(undefined4 *)(iVar8 + 0xc) = 0;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  *(undefined4 *)(iVar8 + 0x14) = 0;
  return;
}

