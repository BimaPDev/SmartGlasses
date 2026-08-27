/* FUN_2c4836ac @ 0x2c4836ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4836ac(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar2 = FUN_2c66c568(_LAB_2c4836fc,param_1,0x2c,_LAB_2c4836fc,param_4);
  puVar1 = _LAB_2c483700;
  *(undefined1 *)(iVar2 + 0x2c) = 0;
  puVar8 = param_1;
  do {
    puVar7 = puVar8;
    puVar6 = puVar1;
    puVar8 = puVar7 + 4;
    uVar3 = puVar7[1];
    uVar4 = puVar7[2];
    uVar5 = puVar7[3];
    *puVar6 = *puVar7;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    puVar1 = puVar6 + 4;
  } while (puVar8 != param_1 + 8);
  uVar3 = puVar7[5];
  uVar4 = puVar7[6];
  puVar6[4] = *puVar8;
  puVar6[5] = uVar3;
  puVar6[6] = uVar4;
  return;
}

