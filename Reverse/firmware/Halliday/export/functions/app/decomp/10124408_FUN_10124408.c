/* FUN_10124408 @ 0x10124408 */

undefined4 FUN_10124408(int param_1,code *param_2,code *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  bVar1 = true;
  piVar6 = (int *)0x0;
  piVar5 = *(int **)(param_1 + 0xc);
  do {
    do {
      if (piVar5 != (int *)0x0) {
        if (piVar6 == (int *)0x0) {
          piVar6 = piVar5;
        }
        piVar5 = (int *)(*param_3)(param_1,piVar5);
        if (piVar5 != piVar6) goto LAB_101244ac;
        return 0;
      }
      do {
        if ((-1 < (int)((uint)*(byte *)(param_1 + 0x1c) << 0x1c)) && (piVar6 != (int *)0x0)) {
          return 0;
        }
        if (!bVar1) {
          return 0;
        }
        piVar5 = (int *)(*param_2)(param_1);
        if (piVar6 == (int *)0x0) {
          if (piVar5 == (int *)0x0) {
            return 0;
          }
          bVar1 = false;
          piVar6 = piVar5;
          break;
        }
        bVar1 = false;
LAB_101244ac:
      } while (piVar5 == (int *)0x0);
      iVar2 = FUN_10124cd2(*piVar5);
    } while (iVar2 << 0x18 < 0);
    iVar2 = *piVar5;
    while( true ) {
      if (iVar2 == 0) goto LAB_10124454;
      iVar4 = FUN_10124cb8(iVar2,1);
      if (iVar4 != 0) break;
      iVar2 = FUN_10126fae(iVar2);
    }
    iVar2 = FUN_10124cb8(iVar2,1);
  } while (iVar2 != 0);
LAB_10124454:
  piVar6 = *(int **)(param_1 + 0xc);
  if (piVar6 != piVar5) {
    if (piVar6 != (int *)0x0) {
      iVar2 = *piVar6;
      uVar3 = FUN_101243ba(param_1);
      iVar2 = FUN_10086f50(iVar2,0xf,uVar3);
      if (iVar2 != 1) {
        return 0;
      }
      FUN_10125af4(**(undefined4 **)(param_1 + 0xc));
    }
    *(int **)(param_1 + 0xc) = piVar5;
    iVar2 = *piVar5;
    uVar3 = FUN_101243ba(param_1);
    iVar2 = FUN_10086f50(iVar2,0xe,uVar3);
    if (iVar2 == 1) {
      FUN_10125af4(**(undefined4 **)(param_1 + 0xc));
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))(param_1);
      }
      return 1;
    }
  }
  return 0;
}

