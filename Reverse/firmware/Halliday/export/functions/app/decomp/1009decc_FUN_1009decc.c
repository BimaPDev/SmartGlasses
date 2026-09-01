/* FUN_1009decc @ 0x1009decc */

void FUN_1009decc(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  FUN_1011ea48(&local_24,0,0x14);
  FUN_1011ea48(DAT_1009df20,0,0x14);
  iVar2 = FUN_1012d2d0(DAT_1009df24,&local_24,0x14);
  puVar6 = DAT_1009df20;
  if (iVar2 == 0x14) {
    *DAT_1009df20 = local_24;
    puVar6[1] = uStack_20;
    puVar6[2] = uStack_1c;
    puVar6[3] = uStack_18;
    puVar6[4] = local_14;
  }
  uVar3 = DAT_1009df20[1];
  uVar4 = DAT_1009df20[2];
  uVar5 = DAT_1009df20[3];
  puVar6 = DAT_1009df20 + 4;
  *param_2 = *DAT_1009df20;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  piVar1 = DAT_1009df24;
  param_2[4] = *puVar6;
  *(bool *)((int)param_2 + 0x13) = *piVar1 != piVar1[1];
  return;
}

