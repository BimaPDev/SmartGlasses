/* FUN_2c48e75c @ 0x2c48e75c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c48e75c(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint in_fpscr;
  undefined8 uVar8;
  
  puVar1 = _LAB_2c48e808;
  if ((((int)param_2 < 0) || (piVar4 = (int *)(uint)(param_1 == 0), param_1 == 0)) ||
     (iVar2 = (*(code *)*_LAB_2c48e808)(0x28), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    FUN_2c674268(iVar2,piVar4,0x28);
    *(undefined4 *)(iVar2 + 0xc) = 0x20;
    if (param_2 != (int *)0x0) {
      piVar6 = (int *)(param_1 + -4);
      piVar5 = piVar4;
      do {
        while( true ) {
          piVar6 = piVar6 + 1;
          iVar7 = *piVar6;
          piVar3 = (int *)(*(code *)*puVar1)(0x28);
          if (piVar3 == (int *)0x0) {
            FUN_2c48dea0(iVar2);
            return 0;
          }
          FUN_2c674268(piVar3,0,0x28);
          piVar3[5] = iVar7;
          uVar8 = VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
          piVar3[3] = 8;
          *(undefined8 *)(piVar3 + 6) = uVar8;
          if (piVar4 != (int *)0x0) break;
          piVar4 = (int *)0x1;
          *(int **)(iVar2 + 8) = piVar3;
          piVar5 = piVar3;
          if (param_2 == (int *)0x1) goto LAB_2c48e7f6;
        }
        piVar4 = (int *)((int)piVar4 + 1);
        *piVar5 = (int)piVar3;
        piVar3[1] = (int)piVar5;
        piVar5 = piVar3;
      } while (piVar4 != param_2);
LAB_2c48e7f6:
      if (*(int *)(iVar2 + 8) != 0) {
        *(int **)(*(int *)(iVar2 + 8) + 4) = piVar3;
      }
    }
  }
  return iVar2;
}

