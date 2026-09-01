/* FUN_10086a1c @ 0x10086a1c */

uint FUN_10086a1c(uint param_1)

{
  short sVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  
  puVar5 = DAT_10086a98;
  if (0xfff < param_1) {
    puVar5 = DAT_10086a9c;
  }
  while( true ) {
    puVar3 = puVar5 + 2;
    uVar4 = (uint)*puVar5;
    if (uVar4 == 0) {
      return param_1;
    }
    if (param_1 < uVar4) {
      return param_1;
    }
    uVar2 = puVar5[1] >> 8;
    uVar6 = (uint)(byte)puVar5[1];
    if ((int)param_1 < (int)(uVar6 + uVar4)) break;
    puVar5 = puVar3;
    if (uVar2 == 0) {
      puVar5 = puVar3 + uVar6;
    }
  }
  sVar1 = (short)param_1;
  switch(uVar2) {
  case 0:
    return (uint)puVar3[param_1 - uVar4];
  case 1:
    uVar2 = sVar1 - (sVar1 - *puVar5 & 1);
    break;
  case 2:
    uVar2 = sVar1 - 0x10;
    break;
  case 3:
    uVar2 = sVar1 - 0x20;
    break;
  case 4:
    uVar2 = sVar1 - 0x30;
    break;
  case 5:
    uVar2 = sVar1 - 0x1a;
    break;
  case 6:
    uVar2 = sVar1 + 8;
    break;
  case 7:
    uVar2 = sVar1 - 0x50;
    break;
  case 8:
    uVar2 = sVar1 + 0xe3a0;
    break;
  default:
    goto switchD_10086a4a_default;
  }
  param_1 = (uint)uVar2;
switchD_10086a4a_default:
  return param_1;
}

