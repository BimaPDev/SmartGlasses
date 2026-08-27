/* FUN_2c600ac0 @ 0x2c600ac0 */

uint FUN_2c600ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  uint extraout_r3;
  uint extraout_r3_00;
  int iVar6;
  uint uVar7;
  
  sVar2 = FUN_2c6033b4(param_1,param_2,0x40,param_4,param_4);
  iVar6 = (int)sVar2;
  uVar5 = extraout_r3;
  if ((iVar6 == 0) ||
     (bVar1 = FUN_2c6033b4(param_1,param_2,0x45), uVar5 = extraout_r3_00, bVar1 < 3)) {
    uVar7 = 0;
  }
  else {
    sVar2 = FUN_2c6033b4(param_1,param_2,0x43);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 1;
    }
    sVar3 = FUN_2c6033b4(param_1,param_2,0x41);
    uVar7 = (uint)sVar3;
    uVar4 = FUN_2c6033b4(param_1,param_2,0x42);
    if ((int)uVar7 < 0) {
      uVar7 = -uVar7;
    }
    if ((short)uVar4 < 0) {
      uVar4 = -uVar4;
    }
    uVar5 = (uint)uVar4;
    if (uVar5 < (uVar7 & 0xffff)) {
      uVar4 = (ushort)uVar7;
    }
    uVar7 = (uint)(short)(sVar2 + 1 + (short)(iVar6 >> 1) + uVar4);
    uVar7 = uVar7 & ~((int)uVar7 >> 0x1f);
  }
  sVar2 = FUN_2c6033b4(param_1,param_2,0x35,uVar5,param_4);
  if ((sVar2 != 0) && (bVar1 = FUN_2c6033b4(param_1,param_2,0x37), 2 < bVar1)) {
    sVar3 = FUN_2c6033b4(param_1,param_2,0x38);
    uVar5 = (int)sVar3 + (int)sVar2;
    if ((int)uVar5 < (int)uVar7) {
      uVar5 = uVar7;
    }
    uVar7 = (uint)(short)uVar5;
  }
  sVar3 = FUN_2c6033b4(param_1,param_2,0x68);
  sVar2 = FUN_2c6033b4(param_1,param_2,0x69);
  if (sVar2 < sVar3) {
    sVar2 = sVar3;
  }
  if (0 < sVar2) {
    uVar7 = (uint)(short)(sVar2 + (short)uVar7);
  }
  return uVar7;
}

