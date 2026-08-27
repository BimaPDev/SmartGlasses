/* FUN_2c4df184 @ 0x2c4df184 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4df184(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = FUN_2c4dd098(*(int *)(*param_1 + -0xc) + (int)param_1);
  if (iVar1 == 0) {
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x24b8,0x46,1);
    FUN_2c4e0504(_LAB_2c4df270,0,0,0,_LAB_2c4df278,0x46,_LAB_2c4df274,0x1300,_LAB_2c4df26c);
  }
  else {
    piVar6 = param_1 + 0x14;
    FUN_2c674268(param_1 + 10,0,0x24);
    FUN_2c674268(piVar6,0,0x38);
    FUN_2c674268(param_1 + 0x22,0,0x10);
    param_1[0x26] = 0x7fffffff;
    param_1[0x27] = (int)piVar6;
    if (((param_1[3] != 0) && (iVar2 = func_0x2c4dfc18(param_1[3],0), iVar2 != 0)) &&
       (piVar3 = (int *)func_0x2c4dfca8(), piVar3 != (int *)0x0)) {
      iVar2 = piVar3[1];
      iVar4 = piVar3[2];
      iVar5 = piVar3[3];
      *piVar6 = *piVar3;
      param_1[0x15] = iVar2;
      param_1[0x16] = iVar4;
      param_1[0x17] = iVar5;
      iVar2 = piVar3[5];
      iVar4 = piVar3[6];
      iVar5 = piVar3[7];
      param_1[0x18] = piVar3[4];
      param_1[0x19] = iVar2;
      param_1[0x1a] = iVar4;
      param_1[0x1b] = iVar5;
      iVar2 = piVar3[9];
      iVar4 = piVar3[10];
      iVar5 = piVar3[0xb];
      param_1[0x1c] = piVar3[8];
      param_1[0x1d] = iVar2;
      param_1[0x1e] = iVar4;
      param_1[0x1f] = iVar5;
      iVar2 = piVar3[0xd];
      param_1[0x20] = piVar3[0xc];
      param_1[0x21] = iVar2;
      iVar2 = (**(code **)(*(int *)((int)param_1 + *(int *)(*param_1 + -0xc)) + 0x24))
                        (*(int *)(*param_1 + -0xc) + (int)param_1);
      if (iVar2 != 0) {
        func_0x2c4df644(iVar2,piVar6);
      }
      iVar2 = (**(code **)(*(int *)((int)param_1 + *(int *)(*param_1 + -0xc)) + 0x28))
                        (*(int *)(*param_1 + -0xc) + (int)param_1);
      if (iVar2 != 0) {
        func_0x2c4e02e6(iVar2,piVar6);
      }
      param_1[0x21] = (int)piVar3;
    }
  }
  return iVar1;
}

