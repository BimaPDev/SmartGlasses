/* FUN_100d32ac @ 0x100d32ac */

undefined4 FUN_100d32ac(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  FUN_10119dc2(DAT_100d3308,DAT_100d3304);
  uVar3 = DAT_100d3310;
  if ((*param_1 == '\0') || (uVar3 = DAT_100d3320, *param_1 == '\x01')) {
    FUN_10119dc2(uVar3);
  }
  else {
    FUN_10119dc2(DAT_100d330c);
  }
  uVar2 = DAT_100d3324;
  uVar1 = DAT_100d3318;
  uVar3 = DAT_100d3314;
  iVar6 = 0;
  pcVar5 = param_1 + 6;
  do {
    uVar4 = uVar2;
    if (iVar6 == 5) {
      uVar4 = uVar3;
    }
    iVar6 = iVar6 + 1;
    FUN_10119dc2(uVar1,*pcVar5,uVar4);
    pcVar5 = pcVar5 + -1;
  } while (iVar6 != 6);
  FUN_10119dc2(DAT_100d331c);
  return DAT_100d3304;
}

