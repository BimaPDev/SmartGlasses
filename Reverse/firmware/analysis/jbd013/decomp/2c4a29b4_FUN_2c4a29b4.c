/* FUN_2c4a29b4 @ 0x2c4a29b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a29b4(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  bool bVar12;
  
  piVar1 = _LAB_2c4a2b0c;
  puVar10 = (undefined4 *)*_LAB_2c4a2b0c;
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)func_0x2c4a1c34(0xc);
    *piVar1 = (int)puVar10;
  }
  if (param_1 == (undefined4 *)0x0) {
    *(undefined1 *)puVar10 = 0xc;
    *(undefined1 *)(*piVar1 + 1) = 0xc;
    *(undefined2 *)(*piVar1 + 2) = 0x19;
    iVar9 = *piVar1;
    *(undefined2 *)(iVar9 + 8) = 0x10a;
    *(undefined2 *)(iVar9 + 10) = 0;
  }
  else {
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10 = (undefined4 *)*piVar1;
    uVar6 = param_1[1];
    uVar7 = param_1[2];
    *puVar10 = *param_1;
    puVar10[1] = uVar6;
    puVar10[2] = uVar7;
  }
  piVar1 = _LAB_2c4a2b10;
  puVar5 = (undefined1 *)*_LAB_2c4a2b10;
  *_LAB_2c4a2b14 = 3;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)func_0x2c4a1c34(0x20);
    *piVar1 = (int)puVar5;
  }
  if (param_2 == (undefined4 *)0x0) {
    *puVar5 = 0;
    *(undefined1 *)(*piVar1 + 1) = 1;
    *(undefined1 *)(*piVar1 + 2) = 2;
    pcVar8 = (char *)*piVar1;
    pcVar8[0x1f] = '\a';
  }
  else {
    FUN_2c674268(puVar5,0,0x20);
    uVar11 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    puVar10 = (undefined4 *)*piVar1;
    *puVar10 = *param_2;
    puVar10[1] = uVar11;
    puVar10[2] = uVar6;
    puVar10[3] = uVar7;
    pcVar8 = (char *)*piVar1;
    uVar11 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    puVar10[4] = param_2[4];
    puVar10[5] = uVar11;
    puVar10[6] = uVar6;
    puVar10[7] = uVar7;
  }
  *_LAB_2c4a2b18 = 1;
  puVar2 = _LAB_2c4a2b20;
  if ((*pcVar8 == -1) || (pcVar8[1] == -1)) {
    bVar12 = false;
  }
  else {
    bVar12 = pcVar8[2] != -1;
  }
  *_LAB_2c4a2b1c = bVar12;
  puVar5 = _LAB_2c4a2b28;
  *_LAB_2c4a2b24 = 0;
  puVar3 = _LAB_2c4a2b2c;
  *puVar2 = 0;
  *puVar3 = 0;
  puVar3 = _LAB_2c4a2b30;
  *puVar5 = 0;
  *puVar3 = 0;
  puVar2 = _LAB_2c4a2b38;
  *_LAB_2c4a2b34 = 0;
  puVar5 = _LAB_2c4a2b40;
  *_LAB_2c4a2b3c = 0;
  puVar3 = _LAB_2c4a2b44;
  *puVar2 = 0;
  *puVar3 = 0;
  puVar3 = _LAB_2c4a2b48;
  *puVar5 = 0;
  *puVar3 = 0;
  puVar3 = _LAB_2c4a2b54;
  puVar5 = _LAB_2c4a2b50;
  *_LAB_2c4a2b4c = 0;
  *puVar3 = 0;
  *puVar5 = 0;
  puVar3 = _LAB_2c4a2b60;
  puVar5 = _LAB_2c4a2b5c;
  *_LAB_2c4a2b58 = 0;
  *puVar3 = 0;
  puVar4 = _LAB_2c4a2b68;
  puVar3 = _LAB_2c4a2b64;
  *puVar5 = 0;
  puVar5 = _LAB_2c4a2b70;
  piVar1 = _LAB_2c4a2b6c;
  *puVar3 = 0;
  *puVar4 = 0;
  puVar4 = _LAB_2c4a2b78;
  puVar3 = _LAB_2c4a2b74;
  *puVar5 = 0;
  puVar10 = (undefined4 *)*piVar1;
  *puVar3 = 0;
  *puVar4 = 0;
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)func_0x2c4a1c34(0x1c);
    *piVar1 = (int)puVar10;
  }
  *puVar10 = 0;
  iVar9 = *piVar1;
  *(undefined4 *)(iVar9 + 4) = 0;
  *(undefined4 *)(iVar9 + 8) = 0;
  *(undefined4 *)(iVar9 + 0xc) = 0;
  *(undefined4 *)(iVar9 + 0x10) = 0;
  *(undefined4 *)(iVar9 + 0x14) = 0;
  return;
}

