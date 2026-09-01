/* FUN_10055e80 @ 0x10055e80 */

undefined4 FUN_10055e80(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  switch(param_1) {
  case 4:
  case 5:
  case 6:
  case 7:
    uVar2 = param_2;
    if (param_2 < uRam10056058) {
      uVar5 = (iRam1005605c + param_2) / param_2;
      uVar4 = uRam10056060 / uVar5;
      uVar5 = uVar5 - 1;
    }
    else {
      uVar9 = FUN_10055c70();
      param_2 = (uint)((ulonglong)uVar9 >> 0x20);
      uVar4 = (uint)uVar9;
      if ((uRam10056068 < param_2) && (param_2 < uVar4)) {
        uVar4 = (uVar4 << 1) / 3;
        uVar5 = 0x10e;
      }
      else {
        uVar5 = ((param_2 - 1) + uVar4) / param_2;
        uVar4 = uVar4 / uVar5;
        uVar5 = uVar5 - 1 | 0x100;
      }
    }
    *(uint *)(((int)&DAT_10000404 + param_1) * 4) = uVar5;
    FUN_10119dc2(uRam10056064,param_1 + -4,param_2,uVar4,uVar5,uVar2,param_3);
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0x10:
  case 0x13:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x32:
  case 0x33:
    FUN_10119dc2(uRam10056088,param_1,param_3,param_4,param_1,param_2,param_3);
    break;
  case 0xc:
    uVar9 = FUN_10055c70();
    uVar4 = (uint)((ulonglong)uVar9 >> 0x20);
    uVar2 = ((uVar4 - 1) + (int)uVar9 * 2) / uVar4;
    if (uVar2 == 3) {
      uVar5 = 0xf;
    }
    else if (uVar2 == 5) {
      uVar5 = 0x10;
    }
    else {
      if (uVar2 < 2) {
        uVar5 = 1;
      }
      else if (uVar2 < 0x1e) {
        uVar5 = uVar2 >> 1;
      }
      else {
        uVar5 = 0xe;
      }
      uVar2 = uVar5 << 1;
    }
    uVar2 = (uint)((int)uVar9 << 1) / uVar2;
    *puRam10056074 = uVar5 - 1 | 0x100;
    uVar1 = uRam10056078;
    goto code_r0x10055f7c;
  case 0xd:
    uVar9 = FUN_10055c70();
    uVar2 = (uint)((ulonglong)uVar9 >> 0x20);
    uVar2 = ((uVar2 - 1) + (int)uVar9 * 2) / uVar2;
    if (uVar2 == 3) {
      uVar2 = 0xf;
    }
    else if (uVar2 == 5) {
      uVar2 = 0x10;
    }
    else if (uVar2 < 2) {
      uVar2 = 1;
    }
    else if (uVar2 < 0x1e) {
      uVar2 = uVar2 >> 1;
    }
    else {
      uVar2 = 0xe;
    }
    *puRam10056084 = uVar2 - 1 | 0x100;
    break;
  case 0xe:
    uVar9 = FUN_10055c70();
    uVar1 = uRam10056070;
    uVar4 = (uint)((ulonglong)uVar9 >> 0x20);
    bVar8 = uVar4 < (uint)uVar9 / 0x48;
    uVar2 = (uint)uVar9;
    if (bVar8) {
      uVar2 = uRam10056060;
    }
    if (bVar8) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0x100;
    }
    if (uVar4 < uVar2 / 0xc) {
      iVar6 = 6;
    }
    else {
      iVar6 = 1;
    }
    uVar3 = iVar6 * uVar4;
    if (CARRY4(uVar3,uVar2 - 1)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (uVar3 + (uVar2 - 1)) / uVar3;
      if (0xb < uVar3) {
        uVar3 = 0xc;
      }
    }
    if (iVar6 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x10;
    }
    uVar2 = uVar2 / (uVar3 * iVar6);
    *puRam1005606c = uVar3 - 1 | uVar5 | uVar7;
    goto code_r0x10055f7c;
  case 0xf:
    uVar9 = FUN_10055c70();
    uVar4 = (uint)((ulonglong)uVar9 >> 0x20);
    uVar2 = ((uVar4 - 1) + (int)uVar9 * 2) / uVar4;
    if (uVar2 == 3) {
      uVar5 = 0xf;
    }
    else if (uVar2 == 5) {
      uVar5 = 0x10;
    }
    else {
      if (uVar2 < 2) {
        uVar5 = 1;
      }
      else if (uVar2 < 0x1e) {
        uVar5 = uVar2 >> 1;
      }
      else {
        uVar5 = 0xe;
      }
      uVar2 = uVar5 << 1;
    }
    uVar2 = (uint)((int)uVar9 << 1) / uVar2;
    *puRam1005607c = uVar5 - 1 | 0x1100;
    uVar1 = uRam10056080;
code_r0x10055f7c:
    FUN_10119dc2(uVar1,uVar4,uVar2);
  }
  return 0;
}

