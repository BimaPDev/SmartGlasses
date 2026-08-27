/* FUN_2c4fe1a6 @ 0x2c4fe1a6 */

void FUN_2c4fe1a6(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *(undefined1 *)(param_1 + 0x30) = param_4;
  func_0x2c4ff9d4();
  func_0x2c5003e8();
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = FUN_2c606bc0();
  if (iVar3 != 0) {
    if ((*(int **)(iVar3 + 0xc) != (int *)0x0) && (**(int **)(iVar3 + 0xc) == iVar2)) {
      if ((int)((uint)*(byte *)(iVar3 + 0x1c) << 0x1f) < 0) {
        *(byte *)(iVar3 + 0x1c) = *(byte *)(iVar3 + 0x1c) & 0xfe;
      }
      iVar5 = FUN_2c62ca10(iVar3);
      if ((*(int *)(iVar3 + 0xc) == iVar5) &&
         (puVar6 = (undefined4 *)FUN_2c62ca18(iVar3), puVar6 == *(undefined4 **)(iVar3 + 0xc))) {
        uVar8 = *puVar6;
        uVar7 = FUN_2c602bd8(iVar3);
        FUN_2c602340(uVar8,0xf,uVar7);
      }
      else {
        bVar1 = *(byte *)(iVar3 + 0x1c);
        *(byte *)(iVar3 + 0x1c) = bVar1 | 8;
        if ((int)((uint)bVar1 << 0x1d) < 0) {
          FUN_2c602e74(iVar3);
        }
        else {
          FUN_2c602e40();
        }
        *(byte *)(iVar3 + 0x1c) = *(byte *)(iVar3 + 0x1c) & 0xf7 | bVar1 & 8;
      }
      if ((*(int **)(iVar3 + 0xc) != (int *)0x0) && (**(int **)(iVar3 + 0xc) == iVar2)) {
        *(undefined4 *)(iVar3 + 0xc) = 0;
      }
    }
    piVar4 = (int *)FUN_2c62ca10(iVar3);
    while (piVar4 != (int *)0x0) {
      if (*piVar4 == iVar2) {
        FUN_2c62c998();
        FUN_2c62bea8(piVar4);
        if (*(int *)(iVar2 + 8) == 0) {
          return;
        }
        *(undefined4 *)(*(int *)(iVar2 + 8) + 8) = 0;
        return;
      }
      piVar4 = (int *)FUN_2c62ca20(iVar3);
    }
  }
  return;
}

