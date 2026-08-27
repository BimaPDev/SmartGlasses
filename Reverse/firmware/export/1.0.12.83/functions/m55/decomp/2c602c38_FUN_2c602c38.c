/* FUN_2c602c38 @ 0x2c602c38 */

undefined4 FUN_2c602c38(int param_1,code *param_2,code *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  
  bVar1 = true;
  piVar6 = (int *)0x0;
  piVar5 = *(int **)(param_1 + 0xc);
  do {
    do {
      if (piVar5 == (int *)0x0) goto LAB_2c602cb8;
      if (piVar6 == (int *)0x0) {
        piVar6 = piVar5;
      }
      piVar5 = (int *)(*param_3)(param_1,piVar5);
      if (piVar5 == piVar6) {
        return 0;
      }
      while (piVar5 == (int *)0x0) {
LAB_2c602cb8:
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
      }
      iVar2 = FUN_2c606bb0(*piVar5);
    } while (iVar2 << 0x18 < 0);
    iVar2 = *piVar5;
    while( true ) {
      if (iVar2 == 0) goto LAB_2c602c94;
      iVar3 = FUN_2c606b94(iVar2,1);
      if (iVar3 != 0) break;
      iVar2 = FUN_2c6041d4(iVar2);
    }
    iVar2 = FUN_2c606b94(iVar2,1);
  } while (iVar2 != 0);
LAB_2c602c94:
  piVar6 = *(int **)(param_1 + 0xc);
  if (piVar6 != piVar5) {
    if (piVar6 != (int *)0x0) {
      iVar2 = *piVar6;
      uVar4 = FUN_2c602bd8(param_1);
      iVar2 = FUN_2c602340(iVar2,0xf,uVar4);
      if (iVar2 != 1) {
        return 0;
      }
      FUN_2c607df0(**(undefined4 **)(param_1 + 0xc));
    }
    *(int **)(param_1 + 0xc) = piVar5;
    iVar2 = *piVar5;
    uVar4 = FUN_2c602bd8(param_1);
    iVar2 = FUN_2c602340(iVar2,0xe,uVar4);
    if (iVar2 == 1) {
      FUN_2c607df0(**(undefined4 **)(param_1 + 0xc));
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))(param_1);
        return 1;
      }
      return 1;
    }
  }
  return 0;
}

