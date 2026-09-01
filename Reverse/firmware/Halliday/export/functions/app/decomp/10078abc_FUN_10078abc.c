/* FUN_10078abc @ 0x10078abc */

int FUN_10078abc(void)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 in_r3;
  uint uVar6;
  uint uVar7;
  
  piVar1 = DAT_10078b20;
  uVar6 = DAT_10078b20[1] - *DAT_10078b20;
  if ((uint)DAT_10078b20[2] < uVar6) {
    FUN_1012d48e();
    iVar4 = 0;
  }
  else {
    if (uVar6 < 0x200) {
      uVar7 = uVar6;
      if (uVar6 == 0) {
        return 0;
      }
    }
    else {
      uVar7 = 0x1fe;
    }
    FUN_1012d2d0(DAT_10078b20,DAT_10078b24,uVar7,uVar6,in_r3);
    puVar2 = DAT_10078b24;
    puVar5 = DAT_10078b24;
    for (iVar4 = 0; uVar3 = DAT_10078b28, (int)uVar7 >> 1 != iVar4; iVar4 = iVar4 + 1) {
      *puVar5 = puVar2[iVar4 * 2];
      puVar5 = puVar5 + 1;
    }
    puVar2[(int)uVar7 >> 1] = 0;
    FUN_10119dc2(uVar3,DAT_10078b24);
    iVar4 = piVar1[1] - *piVar1;
  }
  return iVar4;
}

