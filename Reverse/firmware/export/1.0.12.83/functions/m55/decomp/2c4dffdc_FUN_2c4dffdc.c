/* FUN_2c4dffdc @ 0x2c4dffdc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4dffdc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  iVar3 = FUN_2c4de02c();
  if (iVar3 != 0) {
    piVar4 = (int *)(param_1 + 0xa8);
    iVar3 = FUN_2c4dd098(*(int *)(*piVar4 + -0xc) + (int)piVar4,param_2);
    if (iVar3 == 0) {
      FUN_2c4de6ca(*(int *)(*piVar4 + -0xc) + (int)piVar4,0x24b8,0x46,1);
      FUN_2c4e0504(_LAB_2c4df270,0,0,0,_LAB_2c4df278,0x46,_LAB_2c4df274,0x1300,_LAB_2c4df26c);
    }
    else {
      puVar8 = (undefined4 *)(param_1 + 0xf8);
      FUN_2c674268(param_1 + 0xd0,0,0x24);
      FUN_2c674268(puVar8,0,0x38);
      FUN_2c674268(param_1 + 0x130,0,0x10);
      *(undefined4 *)(param_1 + 0x140) = 0x7fffffff;
      *(undefined4 **)(param_1 + 0x144) = puVar8;
      if (((*(int *)(param_1 + 0xb4) != 0) &&
          (iVar1 = func_0x2c4dfc18(*(int *)(param_1 + 0xb4),0), iVar1 != 0)) &&
         (puVar2 = (undefined4 *)func_0x2c4dfca8(), puVar2 != (undefined4 *)0x0)) {
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        *puVar8 = *puVar2;
        *(undefined4 *)(param_1 + 0xfc) = uVar5;
        *(undefined4 *)(param_1 + 0x100) = uVar6;
        *(undefined4 *)(param_1 + 0x104) = uVar7;
        uVar5 = puVar2[5];
        uVar6 = puVar2[6];
        uVar7 = puVar2[7];
        *(undefined4 *)(param_1 + 0x108) = puVar2[4];
        *(undefined4 *)(param_1 + 0x10c) = uVar5;
        *(undefined4 *)(param_1 + 0x110) = uVar6;
        *(undefined4 *)(param_1 + 0x114) = uVar7;
        uVar5 = puVar2[9];
        uVar6 = puVar2[10];
        uVar7 = puVar2[0xb];
        *(undefined4 *)(param_1 + 0x118) = puVar2[8];
        *(undefined4 *)(param_1 + 0x11c) = uVar5;
        *(undefined4 *)(param_1 + 0x120) = uVar6;
        *(undefined4 *)(param_1 + 0x124) = uVar7;
        uVar5 = puVar2[0xd];
        *(undefined4 *)(param_1 + 0x128) = puVar2[0xc];
        *(undefined4 *)(param_1 + 300) = uVar5;
        iVar1 = (**(code **)(*(int *)((int)piVar4 + *(int *)(*piVar4 + -0xc)) + 0x24))
                          (*(int *)(*piVar4 + -0xc) + (int)piVar4);
        if (iVar1 != 0) {
          func_0x2c4df644(iVar1,puVar8);
        }
        iVar1 = (**(code **)(*(int *)((int)piVar4 + *(int *)(*piVar4 + -0xc)) + 0x28))
                          (*(int *)(*piVar4 + -0xc) + (int)piVar4);
        if (iVar1 != 0) {
          func_0x2c4e02e6(iVar1,puVar8);
        }
        *(undefined4 **)(param_1 + 300) = puVar2;
      }
    }
    return iVar3;
  }
  return 0;
}

