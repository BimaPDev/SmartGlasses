/* FUN_10083220 @ 0x10083220 */

void FUN_10083220(uint param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = DAT_100832f8;
  uVar4 = param_1 / DAT_100832f8;
  param_2[5] = (char)(uVar4 + 4) + (char)((uVar4 + 4) / 7) * -7;
  param_1 = param_1 - uVar6 * uVar4;
  uVar6 = uVar4 / 0x16d + 0x7b2;
  uVar3 = uVar4 / 0x16d + 0x7b1;
  iVar5 = (((uVar4 + 0xafaa7 + uVar3 / 100) - (uVar3 >> 2)) - uVar3 / 400) + uVar6 * -0x16d;
  if (iVar5 < 0) {
    if (((uVar3 & 3) == 0) && (uVar3 != (uVar3 / 100) * 100)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (uint)(uVar3 % 400 == 0);
    }
    iVar5 = iVar5 + 0x16d + uVar6;
    uVar6 = uVar3;
  }
  iVar7 = 0;
  *(short *)(param_2 + 6) = (short)uVar6 + -0x76c;
  do {
    iVar2 = FUN_100831e8(iVar7,uVar6);
    iVar2 = iVar5 - iVar2;
    if (iVar2 < 0) break;
    iVar7 = iVar7 + 1;
    iVar5 = iVar2;
  } while (iVar7 != 0xb);
  param_2[3] = (char)iVar5 + '\x01';
  uVar6 = param_1 % 0xe10;
  param_2[2] = (char)(param_1 / 0xe10);
  cVar1 = (char)(uVar6 / 0x3c);
  param_2[1] = cVar1;
  *param_2 = (char)uVar6 + cVar1 * -0x3c;
  param_2[4] = (char)iVar7;
  param_2[8] = '\0';
  param_2[9] = '\0';
  return;
}

