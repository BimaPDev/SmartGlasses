/* FUN_2c5ff0b8 @ 0x2c5ff0b8 */

void FUN_2c5ff0b8(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_2c607248();
  FUN_2c6033a8(0);
  FUN_2c6026b4(param_1);
  puVar3 = (undefined4 *)*param_1;
  puVar4 = (undefined4 *)*puVar3;
  if (puVar4 != (undefined4 *)0x0) {
    *param_1 = (int)puVar4;
    puVar5 = (undefined4 *)*puVar4;
    if (puVar5 != (undefined4 *)0x0) {
      *param_1 = (int)puVar5;
      piVar2 = (int *)*puVar5;
      if (piVar2 != (int *)0x0) {
        *param_1 = (int)piVar2;
        if (*piVar2 != 0) {
          *param_1 = *piVar2;
          FUN_2c5fef64(param_1);
        }
        *param_1 = (int)piVar2;
        if ((code *)piVar2[1] != (code *)0x0) {
          (*(code *)piVar2[1])(piVar2,param_1);
        }
      }
      *param_1 = (int)puVar5;
      if ((code *)puVar5[1] != (code *)0x0) {
        (*(code *)puVar5[1])(puVar5,param_1);
      }
    }
    *param_1 = (int)puVar4;
    if ((code *)puVar4[1] != (code *)0x0) {
      (*(code *)puVar4[1])(puVar4,param_1);
    }
  }
  *param_1 = (int)puVar3;
  if ((code *)puVar3[1] != (code *)0x0) {
    (*(code *)puVar3[1])(puVar3,param_1);
  }
  FUN_2c6033a8(1);
  FUN_2c6036cc(param_1,0xf0000,0xffff);
  FUN_2c607588(param_1);
  iVar1 = FUN_2c602de4();
  if (iVar1 != 0) {
    for (piVar2 = (int *)*param_1; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      if ((*(byte *)(piVar2 + 6) & 0xc) != 0) {
        if ((*(byte *)(piVar2 + 6) & 0xc) == 4) {
          FUN_2c602f64(iVar1,param_1);
        }
        break;
      }
    }
  }
  iVar1 = FUN_2c6041d4(param_1);
  if (iVar1 != 0) {
    FUN_2c602340(iVar1,0x22,param_1);
    FUN_2c602340(iVar1,0x23,param_1);
    FUN_2c607df0(param_1);
    return;
  }
  return;
}

