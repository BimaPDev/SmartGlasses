/* FUN_10087374 @ 0x10087374 */

void FUN_10087374(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_10124ce2();
  if (iVar1 != 0) {
    if ((*(int **)(iVar1 + 0xc) != (int *)0x0) && (**(int **)(iVar1 + 0xc) == param_1)) {
      if ((int)((uint)*(byte *)(iVar1 + 0x1c) << 0x1f) < 0) {
        *(byte *)(iVar1 + 0x1c) = *(byte *)(iVar1 + 0x1c) & 0xfe;
      }
      iVar2 = FUN_1012b06a();
      if ((*(int *)(iVar1 + 0xc) == iVar2) &&
         (puVar3 = (undefined4 *)FUN_1012b070(iVar1), puVar3 == *(undefined4 **)(iVar1 + 0xc))) {
        uVar6 = *puVar3;
        uVar4 = FUN_101243ba(iVar1);
        FUN_10086f50(uVar6,0xf,uVar4);
      }
      else {
        FUN_10124532(iVar1);
      }
    }
    if ((*(int **)(iVar1 + 0xc) != (int *)0x0) && (**(int **)(iVar1 + 0xc) == param_1)) {
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    for (piVar5 = (int *)FUN_1012b06a(iVar1); piVar5 != (int *)0x0;
        piVar5 = (int *)FUN_1012b076(iVar1,piVar5)) {
      if (*piVar5 == param_1) {
        FUN_1012b018();
        FUN_10094268(piVar5,DAT_10087408);
        if (*(int *)(param_1 + 8) == 0) {
          return;
        }
        *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 0;
        return;
      }
    }
  }
  return;
}

