/* FUN_100699e4 @ 0x100699e4 */

int FUN_100699e4(code *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  pcVar1 = DAT_10069ac8;
  if (param_1 == (code *)0x0) {
    iVar4 = 0;
  }
  else {
    *DAT_10069ac4 = 0;
    puVar2 = DAT_10069acc;
    *pcVar1 = '\0';
    *puVar2 = 0;
    iVar4 = FUN_10069804();
    uVar3 = DAT_10069af8;
    if (iVar4 == 0) {
      FUN_1011e9f0(DAT_10069ad4,DAT_10069ad0);
      (*param_1)(DAT_10069ad4,0x22);
      iVar4 = 0x22;
    }
    else if (iVar4 == 1) {
      FUN_1013d306(DAT_10069ad4,0,0x47,DAT_10069ae0,DAT_10069af8,DAT_10069adc);
      (*param_1)(DAT_10069ad4,0xc);
      iVar4 = FUN_100697ac(DAT_10069ae4,param_1);
      uVar6 = DAT_10069ae8;
      FUN_1013d306(DAT_10069ad4,0,0x47,DAT_10069ae0,uVar3,DAT_10069ae8);
      (*param_1)(DAT_10069ad4,10);
      if (*pcVar1 == '\0') {
        iVar5 = 0x16;
      }
      else {
        iVar5 = FUN_1005d72c(param_1);
        iVar5 = iVar5 + 0x16;
      }
      if (iVar4 == 1) {
        FUN_1011e9f0(DAT_10069ad4,DAT_10069aec);
        iVar4 = 0x1a;
      }
      else if (iVar4 == 0) {
        FUN_1011e9f0(DAT_10069ad4,DAT_10069af0);
        iVar4 = 0x15;
      }
      else {
        iVar4 = FUN_1013d306(DAT_10069ad4,0,0x47,DAT_10069af4,iVar4,uVar6);
      }
      (*param_1)(DAT_10069ad4,iVar4);
      iVar4 = iVar4 + iVar5;
    }
    else {
      iVar4 = FUN_1013d306(DAT_10069ad4,0,0x47,DAT_10069ad8,iVar4,param_2);
      (*param_1)(DAT_10069ad4,iVar4);
    }
  }
  return iVar4;
}

