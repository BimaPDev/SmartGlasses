/* FUN_2c56d740 @ 0x2c56d740 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c56d740(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = FUN_2c606a10(*(undefined4 *)(param_1 + 4));
  iVar6 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar6 != 0) {
    FUN_2c58d410(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  FUN_2c606f34(iVar1,0);
  FUN_2c607048(iVar1,0x2064,0x27d1);
  FUN_2c606abc(iVar1,0x10);
  FUN_2c6072b4(iVar1,1);
  FUN_2c606d30(iVar1,0);
  FUN_2c606d3c(iVar1,0);
  FUN_2c606d18(iVar1,0);
  FUN_2c606d24(iVar1,0);
  FUN_2c606d60(iVar1,0xff000000,0);
  FUN_2c606d6c(iVar1,0);
  FUN_2c606d9c(iVar1,0);
  uVar2 = FUN_2c637344(iVar1);
  iVar6 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  if (iVar6 != 0) {
    FUN_2c58d410(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
  }
  FUN_2c638730(uVar2,_LAB_2c56d8b4);
  FUN_2c606f34(uVar2,0xe,8);
  FUN_2c606e20(uVar2,0xff00ff00,0);
  FUN_2c606e2c(uVar2,0xff,0);
  uVar3 = FUN_2c5e2e80(_LAB_2c56d8b8);
  FUN_2c606e38(uVar2,uVar3,0);
  FUN_2c6072b4(uVar2,1);
  piVar4 = _LAB_2c56d8bc;
  FUN_2c607048(uVar2,0xc0,0x14);
  if (*piVar4 == 0) {
    FUN_2c4723c4();
    *piVar4 = 1;
  }
  piVar4 = (int *)FUN_2c47245c(0,0x30);
  iVar6 = DAT_2c56d8c0;
  piVar4[3] = 0;
  *(undefined2 *)(piVar4 + 5) = 0;
  *(undefined2 *)(piVar4 + 0xb) = 0;
  *piVar4 = iVar6;
  iVar6 = DAT_2c56d8c4;
  piVar4[10] = param_1 + 8;
  piVar4[4] = iVar6;
  piVar4[1] = 0;
  piVar4[2] = 0;
  piVar4[8] = 0;
  piVar4[9] = 0;
  piVar4[6] = 8;
  piVar4[7] = 6;
  piVar5 = *(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = piVar4;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
    piVar4 = *(int **)(param_1 + 0x14);
  }
  if (iVar1 != 0) {
    iVar6 = FUN_2c606c34(iVar1);
    if (iVar6 != 0) {
      piVar4[1] = iVar1;
      (**(code **)(*piVar4 + 4))(piVar4);
      (**(code **)*piVar4)(piVar4);
    }
    piVar4 = *(int **)(param_1 + 0x14);
  }
  uVar2 = FUN_2c55f6a0(piVar4);
  FUN_2c606ff8(uVar2,0x24);
  return;
}

