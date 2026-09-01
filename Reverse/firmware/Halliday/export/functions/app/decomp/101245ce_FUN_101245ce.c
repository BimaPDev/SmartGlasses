/* FUN_101245ce @ 0x101245ce */

void FUN_101245ce(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (((param_1 != 0) && (iVar1 = FUN_10124ce2(), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 0x1c) & 1) == 0)) {
    FUN_1012458c();
    for (piVar2 = (int *)FUN_1012b06a(iVar1); piVar2 != (int *)0x0;
        piVar2 = (int *)FUN_1012b076(iVar1,piVar2)) {
      if (param_1 == *piVar2) {
        if ((*(int **)(iVar1 + 0xc) != (int *)0x0) &&
           (iVar5 = **(int **)(iVar1 + 0xc), param_1 != iVar5)) {
          uVar3 = FUN_101243ba(iVar1);
          iVar5 = FUN_10086f50(iVar5,0xf,uVar3);
          if (iVar5 != 1) {
            return;
          }
          FUN_10125af4(**(undefined4 **)(iVar1 + 0xc));
        }
        *(int **)(iVar1 + 0xc) = piVar2;
        if (*(code **)(iVar1 + 0x10) != (code *)0x0) {
          (**(code **)(iVar1 + 0x10))(iVar1);
        }
        uVar4 = **(undefined4 **)(iVar1 + 0xc);
        uVar3 = FUN_101243ba(iVar1);
        iVar5 = FUN_10086f50(uVar4,0xe,uVar3);
        if (iVar5 != 1) {
          return;
        }
        FUN_10125af4(**(undefined4 **)(iVar1 + 0xc));
        return;
      }
    }
  }
  return;
}

