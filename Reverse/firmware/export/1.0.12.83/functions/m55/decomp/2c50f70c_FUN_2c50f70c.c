/* FUN_2c50f70c @ 0x2c50f70c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50f70c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  FUN_2c606e44(param_2,4,0,param_4,param_4);
  FUN_2c62e7b4(param_2 + 0x418);
  puVar2 = PTR_LAB_2c51f64c_1_2c50f834;
  puVar1 = PTR_LAB_2c51f0a8_1_2c50f830;
  *(undefined4 *)(param_2 + 0x444) = 100;
  *(undefined4 *)(param_2 + 0x438) = 100;
  *(undefined4 *)(param_2 + 0x43c) = 100;
  puVar3 = PTR_LAB_2c51fc84_1_2c50f838;
  *(undefined **)(param_2 + 0x420) = puVar1;
  *(undefined **)(param_2 + 0x41c) = puVar2;
  *(undefined **)(param_2 + 0x428) = puVar3;
  *(int *)(param_2 + 0x418) = param_2;
  *(undefined4 *)(param_2 + 0x440) = 0;
  *(undefined4 *)(param_2 + 0x27c) = 0;
  *(undefined1 *)(param_2 + 0x308) = 0;
  *(undefined4 *)(param_2 + 0x274) = 0;
  *(undefined4 *)(param_2 + 0x278) = 0;
  FUN_2c62e7b4(param_2 + 0x280);
  puVar1 = PTR_LAB_2c51f5d8_1_2c50f840;
  *(undefined **)(param_2 + 0x288) = PTR_LAB_2c51f0ac_1_2c50f83c;
  uVar4 = _LAB_2c50f844;
  *(undefined4 *)(param_2 + 0x2ac) = 200;
  *(undefined **)(param_2 + 0x284) = puVar1;
  *(undefined4 *)(param_2 + 0x290) = uVar4;
  *(int *)(param_2 + 0x280) = param_2;
  FUN_2c62e7b4(param_2 + 0x2c4);
  uVar4 = _DAT_2c50f84c;
  *(undefined4 *)(param_2 + 0x2cc) = _LAB_2c50f848;
  uVar5 = _LAB_2c50f850;
  *(undefined4 *)(param_2 + 0x2c8) = uVar4;
  *(undefined4 *)(param_2 + 0x2d4) = uVar5;
  *(undefined4 *)(param_2 + 0x2f0) = 3000;
  *(int *)(param_2 + 0x2c4) = param_2;
  FUN_2c62c928(param_2 + 0x30,0x1c);
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_2c62c928(param_2 + 0x24,0x2c4c);
  puVar6 = (undefined4 *)(param_2 + 0x308);
  *(undefined1 *)(param_2 + 0x40c) = 0;
  *(undefined4 *)(param_2 + 0x410) = 0;
  *(undefined4 *)(param_2 + 0x414) = 0;
  do {
    puVar6 = puVar6 + 1;
    *puVar6 = 0;
  } while (puVar6 != (undefined4 *)(param_2 + 0x408));
  puVar6 = (undefined4 *)(param_2 + 0x144);
  *(undefined1 *)(param_2 + 0x1d8) = 0;
  do {
    puVar6 = puVar6 + 1;
    *puVar6 = 0;
  } while (puVar6 != (undefined4 *)(param_2 + 0x1d4));
  *(undefined1 *)(param_2 + 0x270) = 0;
  puVar6 = (undefined4 *)(param_2 + 0x1d8);
  *(int *)(param_2 + 0x26c) = param_2 + 0x148;
  do {
    puVar6 = puVar6 + 1;
    *puVar6 = 0;
  } while (puVar6 != (undefined4 *)(param_2 + 0x268));
  *(undefined2 *)(param_2 + 0x144) = 0;
  puVar6 = (undefined4 *)(param_2 + 0x3c);
  *(undefined1 *)(param_2 + 0x146) = 0;
  *(int *)(param_2 + 0x140) = param_2 + 0x1dc;
  do {
    puVar6 = puVar6 + 1;
    *puVar6 = 0;
  } while (puVar6 != (undefined4 *)(param_2 + 0x13c));
  return;
}

