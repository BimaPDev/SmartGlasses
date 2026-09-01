/* FUN_10029f68 @ 0x10029f68 */

void FUN_10029f68(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_1002a054;
  iVar3 = *DAT_1002a058;
  FUN_1002f5bc(*DAT_1002a054 + 0x158,6,param_1,0,param_1);
  if (param_1 == 3) {
    FUN_1002efe4();
    if (*(int *)(*piVar1 + 0x1c) != 0) {
      FUN_1002eefc();
    }
    uVar2 = FUN_10087308();
    FUN_1012458c(uVar2,1);
    iVar4 = *piVar1;
LAB_10029fc8:
    *(undefined1 *)(iVar4 + 0x2b0) = 1;
LAB_10029fce:
    if (*DAT_1002a058 == iVar3) {
      return;
    }
  }
  else {
    if (param_1 == 4) {
      FUN_1002efe4();
      if (*(int *)(*piVar1 + 0x2c) != 0) {
        FUN_1002eefc();
      }
      if (*(int *)(*piVar1 + 0x34) != 0) {
        FUN_1002eefc();
      }
      if (*(int *)(*piVar1 + 0x30) != 0) {
        FUN_1002eefc();
      }
      FUN_10029d38();
      *(undefined1 *)(*piVar1 + 0x2b1) = 1;
      goto LAB_10029fce;
    }
    if (param_1 == 2) {
      FUN_1002efe4();
      FUN_1002eefc(*(undefined4 *)(*piVar1 + 0x20));
      uVar2 = FUN_10087308();
      FUN_1012458c(uVar2,1);
      iVar4 = *piVar1;
      goto LAB_10029fc8;
    }
    FUN_1002efe4();
    if (*(int *)(*piVar1 + 0xc) != 0) {
      FUN_1002eefc();
      FUN_10124cea(*(undefined4 *)(*piVar1 + 0xc),0x400);
    }
    if (*(int *)(*piVar1 + 8) == 0) goto LAB_10029fce;
    FUN_1002eefc();
    if (*DAT_1002a058 == iVar3) goto LAB_1002a040;
  }
  FUN_1013cdc0();
LAB_1002a040:
  FUN_10124cea(*(undefined4 *)(*piVar1 + 8),0x400);
  return;
}

