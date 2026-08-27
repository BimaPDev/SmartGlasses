/* FUN_2c49fde0 @ 0x2c49fde0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49fde0(undefined4 *param_1,int param_2)

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
  
  piVar1 = _LAB_2c49ff18;
  puVar9 = (undefined4 *)*_LAB_2c49ff18;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)func_0x2c49f300(0xc);
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
  piVar1 = _LAB_2c49ff1c;
  puVar5 = (undefined1 *)*_LAB_2c49ff1c;
  *_LAB_2c49ff20 = 3;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)func_0x2c49f300(0x6d);
    *piVar1 = (int)puVar5;
  }
  if (param_2 == 0) {
    *puVar5 = 0;
    *(undefined1 *)(*piVar1 + 1) = 1;
    *(undefined1 *)(*piVar1 + 2) = 2;
    pcVar10 = (char *)*piVar1;
    pcVar10[0x6c] = '\a';
  }
  else {
    FUN_2c674268(puVar5,0,0x6d);
    FUN_2c674668(*piVar1,param_2,0x6d);
    pcVar10 = (char *)*piVar1;
  }
  *_LAB_2c49ff24 = 1;
  puVar2 = _LAB_2c49ff2c;
  if ((*pcVar10 == -1) || (pcVar10[1] == -1)) {
    bVar11 = false;
  }
  else {
    bVar11 = pcVar10[2] != -1;
  }
  *_LAB_2c49ff28 = bVar11;
  puVar5 = _LAB_2c49ff34;
  *_LAB_2c49ff30 = 0;
  puVar3 = _LAB_2c49ff38;
  *puVar2 = 0;
  *puVar3 = 0;
  puVar3 = _LAB_2c49ff3c;
  *puVar5 = 0;
  *puVar3 = 0;
  puVar2 = _LAB_2c49ff44;
  *_LAB_2c49ff40 = 0;
  puVar5 = _LAB_2c49ff4c;
  *_LAB_2c49ff48 = 0;
  puVar3 = _LAB_2c49ff50;
  *puVar2 = 0;
  *puVar3 = 0;
  puVar3 = _LAB_2c49ff54;
  *puVar5 = 0;
  *puVar3 = 0;
  puVar3 = _LAB_2c49ff60;
  puVar5 = _LAB_2c49ff5c;
  *_LAB_2c49ff58 = 0;
  *puVar3 = 0;
  *puVar5 = 0;
  puVar3 = _LAB_2c49ff6c;
  puVar5 = _LAB_2c49ff68;
  *_LAB_2c49ff64 = 0;
  *puVar3 = 0;
  puVar4 = _LAB_2c49ff74;
  puVar3 = _LAB_2c49ff70;
  *puVar5 = 0;
  puVar5 = _LAB_2c49ff7c;
  piVar1 = _LAB_2c49ff78;
  *puVar3 = 0;
  *puVar4 = 0;
  puVar4 = _LAB_2c49ff84;
  puVar3 = _LAB_2c49ff80;
  *puVar5 = 0;
  puVar9 = (undefined4 *)*piVar1;
  *puVar3 = 0;
  *puVar4 = 0;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)func_0x2c49f300(0x1c);
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

