/* FUN_101350ce @ 0x101350ce */

undefined4 FUN_101350ce(int *param_1,undefined2 param_2,int *param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar7;
  undefined1 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  undefined4 *puVar6;
  
  iVar11 = *param_3;
  if (param_3[2] == 0) {
    puVar2 = (undefined1 *)FUN_100c1fe4(param_3[1] + 8,1,param_3,0,param_4);
    pcVar9 = (char *)*param_1;
    param_3[2] = (int)puVar2;
    if (*pcVar9 == '\0') {
      uVar8 = 1;
    }
    else {
      uVar8 = 2;
    }
    *puVar2 = uVar8;
  }
  if (*(char *)param_3[2] == '\x01') {
    if (*(char *)*param_1 == '\0') {
      puVar3 = (undefined2 *)FUN_100c1fe4(param_3[1] + 8,4);
      iVar7 = *param_1;
      param_3[3] = (int)puVar3;
      uVar1 = *(undefined2 *)(iVar7 + 2);
      *puVar3 = param_2;
      puVar3[1] = uVar1;
      uVar4 = (uint)*(ushort *)(iVar11 + 0x66) - (uint)*(ushort *)(param_3[1] + 0xc);
      bVar13 = 3 < uVar4;
      bVar12 = uVar4 == 4;
      goto LAB_1013512e;
    }
  }
  else if ((*(char *)param_3[2] == '\x02') && (*(char *)*param_1 == '\x02')) {
    puVar3 = (undefined2 *)FUN_100c1fe4(param_3[1] + 8,0x12);
    iVar7 = *param_1;
    param_3[3] = (int)puVar3;
    *puVar3 = param_2;
    puVar5 = (undefined4 *)(iVar7 + 1);
    puVar10 = (undefined4 *)(puVar3 + 1);
    do {
      puVar6 = puVar5 + 1;
      *puVar10 = *puVar5;
      puVar5 = puVar6;
      puVar10 = puVar10 + 1;
    } while (puVar6 != (undefined4 *)(iVar7 + 0x11));
    uVar4 = (uint)*(ushort *)(iVar11 + 0x66) - (uint)*(ushort *)(param_3[1] + 0xc);
    bVar13 = 0x11 < uVar4;
    bVar12 = uVar4 == 0x12;
LAB_1013512e:
    if (bVar13 && !bVar12) {
      return 1;
    }
    return 0;
  }
  return 0;
}

