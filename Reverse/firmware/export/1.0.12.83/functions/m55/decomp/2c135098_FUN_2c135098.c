/* FUN_2c135098 @ 0x2c135098 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c135098(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar1 = _DAT_2c135114;
  pcVar5 = (char *)(_DAT_2c135114 + -1);
  pcVar7 = (char *)(_DAT_2c135114 + 0x26);
  FUN_2c135988(4,0x233,_DAT_2c13511c,_DAT_2c135118,_DAT_2c135110);
  uVar4 = _DAT_2c135128;
  uVar3 = _DAT_2c13511c;
  uVar2 = _DAT_2c135118;
  do {
    while( true ) {
      pcVar6 = pcVar5 + (1 - iVar1);
      pcVar5 = pcVar5 + 1;
      if (*pcVar5 == '\0') break;
      FUN_2c135988(4,0x236,uVar3,uVar2,uVar4,pcVar6,*pcVar5);
      if (pcVar5 == pcVar7) goto LAB_2c1350f2;
    }
  } while (pcVar5 != pcVar7);
LAB_2c1350f2:
  FUN_2c135988(4,0x239,_DAT_2c13511c,_DAT_2c135118,_DAT_2c135124,*_DAT_2c135120);
  return;
}

