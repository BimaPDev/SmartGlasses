/* FUN_2c4a7e34 @ 0x2c4a7e34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a7e34(undefined4 *param_1,undefined4 *param_2)

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
  
  piVar1 = _LAB_2c4a7f60;
  puVar9 = (undefined4 *)*_LAB_2c4a7f60;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)func_0x2c4a5c68(0xc);
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
  piVar1 = _LAB_2c4a7f64;
  puVar9 = (undefined4 *)*_LAB_2c4a7f64;
  *_LAB_2c4a7f68 = 3;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)func_0x2c4a5c68(4);
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
  *_LAB_2c4a7f6c = 1;
  puVar2 = _LAB_2c4a7f74;
  if ((*pcVar10 == -1) || (pcVar10[1] == -1)) {
    bVar11 = false;
  }
  else {
    bVar11 = pcVar10[2] != -1;
  }
  *_LAB_2c4a7f70 = bVar11;
  puVar3 = _LAB_2c4a7f7c;
  *_LAB_2c4a7f78 = 0;
  puVar4 = _LAB_2c4a7f80;
  *puVar2 = 0;
  *puVar4 = 0;
  puVar4 = _LAB_2c4a7f84;
  *puVar3 = 0;
  *puVar4 = 0;
  puVar2 = _LAB_2c4a7f8c;
  *_LAB_2c4a7f88 = 0;
  puVar3 = _LAB_2c4a7f94;
  *_LAB_2c4a7f90 = 0;
  puVar4 = _LAB_2c4a7f98;
  *puVar2 = 0;
  *puVar4 = 0;
  puVar4 = _LAB_2c4a7f9c;
  *puVar3 = 0;
  *puVar4 = 0;
  puVar4 = _LAB_2c4a7fa8;
  puVar3 = _LAB_2c4a7fa4;
  *_LAB_2c4a7fa0 = 0;
  *puVar4 = 0;
  *puVar3 = 0;
  puVar4 = _LAB_2c4a7fb4;
  puVar3 = _LAB_2c4a7fb0;
  *_LAB_2c4a7fac = 0;
  *puVar4 = 0;
  puVar5 = _LAB_2c4a7fbc;
  puVar4 = _LAB_2c4a7fb8;
  *puVar3 = 0;
  puVar3 = _LAB_2c4a7fc4;
  piVar1 = _LAB_2c4a7fc0;
  *puVar4 = 0;
  *puVar5 = 0;
  puVar5 = _LAB_2c4a7fcc;
  puVar4 = _LAB_2c4a7fc8;
  *puVar3 = 0;
  puVar9 = (undefined4 *)*piVar1;
  *puVar4 = 0;
  *puVar5 = 0;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)func_0x2c4a5c68(0x1c);
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

