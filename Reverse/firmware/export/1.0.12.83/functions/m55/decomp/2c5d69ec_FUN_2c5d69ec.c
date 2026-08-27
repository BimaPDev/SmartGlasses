/* FUN_2c5d69ec @ 0x2c5d69ec */

undefined4 FUN_2c5d69ec(char *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar1 = DAT_2c5d6a6c;
  FUN_2c629df4();
  pcVar6 = DAT_2c5d6a70;
  FUN_2c66b140();
  cVar3 = 'x';
  do {
    while (pcVar5 = param_1, cVar3 == 'x') {
      uVar2 = FUN_2c66b19c();
      uVar4 = uVar2 & 0xf;
      if (-1 < (int)-uVar2) {
        uVar4 = -(-uVar2 & 0xf);
      }
      *pcVar5 = *(char *)(uVar4 + iVar1 + -8);
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar6;
      param_1 = pcVar5 + 1;
      if (cVar3 == '\0') goto LAB_2c5d6a4a;
    }
    if (cVar3 == 'y') {
      uVar2 = FUN_2c66b19c();
      uVar4 = uVar2 & 3;
      if (-1 < (int)-uVar2) {
        uVar4 = -(-uVar2 & 3);
      }
      *pcVar5 = *(char *)(uVar4 + iVar1);
    }
    else {
      *pcVar5 = cVar3;
    }
    pcVar6 = pcVar6 + 1;
    cVar3 = *pcVar6;
    param_1 = pcVar5 + 1;
  } while (cVar3 != '\0');
LAB_2c5d6a4a:
  pcVar5[1] = '\0';
  return 1;
}

