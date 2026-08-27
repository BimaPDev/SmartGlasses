/* FUN_2c13709c @ 0x2c13709c */

void FUN_2c13709c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  code *pcVar7;
  
  iVar2 = DAT_2c137104;
  iVar1 = DAT_2c137100;
  uVar4 = 10;
  uVar5 = 0;
  pcVar6 = DAT_2c1370fc;
  while( true ) {
    if ((-1 < (int)uVar4) &&
       ((int)((*(uint *)(iVar1 + ((uVar4 >> 5) + 0x80) * 4) >> (uVar4 & 0x1f)) << 0x1f) < 0)) {
      pcVar7 = *(code **)(iVar2 + uVar5 * 4);
      uVar4 = *(uint *)(*(int *)(pcVar6 + -0x16) + 0x34);
      uVar3 = FUN_2c13705c();
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar5 & 0xff,uVar4 & 0xffff,uVar3);
      }
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == 5) break;
    uVar4 = (uint)*pcVar6;
    pcVar6 = pcVar6 + 0xc;
  }
  return;
}

