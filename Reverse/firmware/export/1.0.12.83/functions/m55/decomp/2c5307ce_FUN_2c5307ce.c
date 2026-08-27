/* FUN_2c5307ce @ 0x2c5307ce */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5307ce(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  char in_ZR;
  
  if (in_ZR != '\0') {
    return param_1;
  }
  puVar6 = *(undefined4 **)(param_2 + 8);
  puVar1 = puVar6;
  if (*(int *)(param_1 + 8) != 0) {
    if (puVar6 == (undefined4 *)0x0) goto LAB_2c5307e8;
    puVar1 = (undefined4 *)
             FUN_2c66b624(*(int *)(param_1 + 8) + 5,(int)puVar6 + 5,param_3,param_4,param_4);
  }
  if (puVar1 == (undefined4 *)0x0) {
    return param_1;
  }
LAB_2c5307e8:
  puVar1 = (undefined4 *)FUN_2c64ca5c(0x30);
  uVar2 = _DAT_2c530848;
  piVar7 = *(int **)(param_1 + 0xc);
  puVar1[1] = 1;
  puVar1[2] = 1;
  *puVar1 = uVar2;
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  puVar1[3] = *puVar6;
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  uVar2 = puVar6[5];
  uVar3 = puVar6[6];
  uVar4 = puVar6[7];
  puVar1[7] = puVar6[4];
  puVar1[8] = uVar2;
  puVar1[9] = uVar3;
  puVar1[10] = uVar4;
  uVar2 = puVar6[8];
  *(undefined4 **)(param_1 + 8) = puVar1 + 3;
  puVar1[0xb] = uVar2;
  *(undefined4 **)(param_1 + 0xc) = puVar1;
  if ((piVar7 != (int *)0x0) && (iVar5 = piVar7[1], piVar7[1] = iVar5 + -1, iVar5 + -1 == 0)) {
    (**(code **)(*piVar7 + 8))(piVar7);
    iVar5 = piVar7[2];
    piVar7[2] = iVar5 + -1;
    if (iVar5 + -1 == 0) {
      (**(code **)(*piVar7 + 0xc))(piVar7);
    }
  }
  return param_1;
}

