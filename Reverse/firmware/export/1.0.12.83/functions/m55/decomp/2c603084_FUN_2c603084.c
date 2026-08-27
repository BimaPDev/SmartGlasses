/* FUN_2c603084 @ 0x2c603084 */

void FUN_2c603084(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_2c606bc0();
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x1c) & 1) == 0)) {
    FUN_2c603048();
    for (piVar2 = (int *)FUN_2c62ca10(iVar1); piVar2 != (int *)0x0;
        piVar2 = (int *)FUN_2c62ca20(iVar1,piVar2)) {
      if (param_1 == *piVar2) {
        if ((*(int **)(iVar1 + 0xc) != (int *)0x0) &&
           (iVar4 = **(int **)(iVar1 + 0xc), param_1 != iVar4)) {
          uVar3 = FUN_2c602bd8();
          iVar4 = FUN_2c602340(iVar4,0xf,uVar3);
          if (iVar4 != 1) {
            return;
          }
          FUN_2c607df0(**(undefined4 **)(iVar1 + 0xc));
        }
        *(int **)(iVar1 + 0xc) = piVar2;
        if (*(code **)(iVar1 + 0x10) != (code *)0x0) {
          (**(code **)(iVar1 + 0x10))(iVar1);
          piVar2 = *(int **)(iVar1 + 0xc);
        }
        iVar4 = *piVar2;
        uVar3 = FUN_2c602bd8(iVar1);
        iVar4 = FUN_2c602340(iVar4,0xe,uVar3);
        if (iVar4 != 1) {
          return;
        }
        FUN_2c607df0(**(undefined4 **)(iVar1 + 0xc));
        return;
      }
    }
  }
  return;
}

