/* FUN_10120a4a @ 0x10120a4a */

void FUN_10120a4a(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 auStack_50 [16];
  undefined4 local_40 [2];
  undefined1 local_38;
  int local_37;
  undefined1 *local_33;
  undefined4 local_2c [2];
  undefined1 local_24;
  int local_23;
  undefined1 *local_1f;
  
  uVar5 = (uint)*(byte *)(**(int **)(param_1 + 0xc) + 10) *
          (uint)*(byte *)(**(int **)(param_1 + 0xc) + 0xb);
  if (uVar5 == 0x20) {
    iVar4 = -1;
  }
  else {
    iVar4 = (1 << (uVar5 & 0xff)) + -1;
  }
  *(int *)((int)param_2 + 5) = iVar4;
  *(int *)((int)param_3 + 5) = iVar4;
  puVar7 = param_2 + 4;
  puVar3 = local_40;
  do {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    param_2 = param_2 + 2;
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    puVar3 = puVar3 + 2;
  } while (param_2 != puVar7);
  puVar7 = param_3 + 4;
  *(undefined1 *)puVar3 = *(undefined1 *)param_2;
  puVar3 = local_2c;
  do {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    param_3 = param_3 + 2;
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    puVar3 = puVar3 + 2;
  } while (param_3 != puVar7);
  *(undefined1 *)puVar3 = *(undefined1 *)param_3;
  piVar6 = *(int **)(param_1 + 0xc);
  local_37 = (int)piVar6 + 0xc6;
  local_33 = auStack_50;
  local_23 = local_37;
  local_1f = auStack_50;
  FUN_1007e320(param_1,local_40);
  if (((local_33[3] == -1) && (*(short *)(local_33 + 6) == -1)) && (*(short *)(local_33 + 4) == -1))
  {
    iVar4 = *piVar6;
    FUN_1011ea48(local_37,0xff,(uint)*(byte *)(iVar4 + 0xb) * (uint)*(byte *)(iVar4 + 10) * 0x200);
  }
  FUN_1007e498(param_1,local_2c);
  return;
}

