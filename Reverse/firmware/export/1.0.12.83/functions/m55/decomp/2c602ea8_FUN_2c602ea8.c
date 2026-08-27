/* FUN_2c602ea8 @ 0x2c602ea8 */

void FUN_2c602ea8(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar2 = FUN_2c606bc0();
  if (iVar2 != 0) {
    if ((*(int **)(iVar2 + 0xc) != (int *)0x0) && (**(int **)(iVar2 + 0xc) == param_1)) {
      if ((int)((uint)*(byte *)(iVar2 + 0x1c) << 0x1f) < 0) {
        *(byte *)(iVar2 + 0x1c) = *(byte *)(iVar2 + 0x1c) & 0xfe;
      }
      iVar4 = FUN_2c62ca10(iVar2);
      if ((*(int *)(iVar2 + 0xc) == iVar4) &&
         (puVar5 = (undefined4 *)FUN_2c62ca18(iVar2), puVar5 == *(undefined4 **)(iVar2 + 0xc))) {
        uVar7 = *puVar5;
        uVar6 = FUN_2c602bd8(iVar2);
        FUN_2c602340(uVar7,0xf,uVar6);
      }
      else {
        bVar1 = *(byte *)(iVar2 + 0x1c);
        *(byte *)(iVar2 + 0x1c) = bVar1 | 8;
        if ((int)((uint)bVar1 << 0x1d) < 0) {
          FUN_2c602e74(iVar2);
        }
        else {
          FUN_2c602e40();
        }
        *(byte *)(iVar2 + 0x1c) = *(byte *)(iVar2 + 0x1c) & 0xf7 | bVar1 & 8;
      }
      if ((*(int **)(iVar2 + 0xc) != (int *)0x0) && (**(int **)(iVar2 + 0xc) == param_1)) {
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
    }
    piVar3 = (int *)FUN_2c62ca10(iVar2);
    while (piVar3 != (int *)0x0) {
      if (*piVar3 == param_1) {
        FUN_2c62c998();
        FUN_2c62bea8(piVar3);
        if (*(int *)(param_1 + 8) == 0) {
          return;
        }
        *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 0;
        return;
      }
      piVar3 = (int *)FUN_2c62ca20(iVar2);
    }
  }
  return;
}

