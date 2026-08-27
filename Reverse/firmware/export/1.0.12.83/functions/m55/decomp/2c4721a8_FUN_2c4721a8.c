/* FUN_2c4721a8 @ 0x2c4721a8 */

void FUN_2c4721a8(undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  *(undefined2 *)(param_2 + 6) = 0;
  uVar1 = DAT_2c472258;
  uVar3 = DAT_2c472254;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_2c648600(uVar1,uVar3);
  uVar3 = FUN_2c4732c0(param_1);
  FUN_2c473180(uVar3,DAT_2c47225c,param_2);
  uVar9 = param_2[2];
  uVar10 = param_2[3];
  uVar7 = 100 - (uVar9 * 100) / *param_2;
  uVar8 = uVar7 & 0xff;
  *(char *)(param_2 + 6) = (char)uVar7;
  if (uVar9 == 0) {
    uVar2 = 0;
    uVar7 = 0;
  }
  else {
    uVar4 = 100 - (uVar10 * 100) / uVar9;
    uVar7 = uVar4 & 0xff;
    uVar2 = (undefined1)uVar4;
  }
  *(undefined1 *)((int)param_2 + 0x19) = uVar2;
  puVar11 = DAT_2c472264;
  uVar3 = DAT_2c472260;
  uVar4 = param_2[5];
  uVar5 = param_2[4];
  puVar12 = DAT_2c472264 + 0xb;
  FUN_2c648600(DAT_2c472268,*param_2,param_2[1],uVar9,uVar10,uVar5,uVar4,uVar8,uVar7);
  uVar1 = DAT_2c47226c;
  uVar6 = DAT_2c472270;
  while( true ) {
    FUN_2c648600(uVar3,uVar6);
    FUN_2c648600(uVar1,param_2[7],param_2[8],param_2[9],uVar10,uVar5,uVar4,uVar8,uVar7);
    param_2 = param_2 + 3;
    if (puVar11 == puVar12) break;
    puVar11 = puVar11 + 1;
    uVar6 = *puVar11;
  }
  FUN_2c648600(DAT_2c472274,DAT_2c472254);
  return;
}

