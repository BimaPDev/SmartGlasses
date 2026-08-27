/* FUN_2c64610c @ 0x2c64610c */

void FUN_2c64610c(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = DAT_2c646214;
  iVar5 = *(int *)(DAT_2c646214 + 0x14);
  if (param_1 == 0) {
    param_1 = *(int *)(DAT_2c646214 + 0x24);
    if (*(char *)(DAT_2c646214 + 8) != '\x02') {
      return;
    }
    if (param_1 == 0) {
      return;
    }
    cVar3 = *(char *)(iVar5 + 0x20);
    if (*(char *)(param_1 + 0x20) <= cVar3) {
      return;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      *(int *)(*(int *)(param_1 + 0xc) + 8) = iVar7;
      if (iVar7 != 0) {
        *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      cVar3 = *(char *)(iVar5 + 0x20);
    }
    *(undefined1 *)(iVar5 + 1) = 1;
    iVar2 = *(int *)(iVar1 + 0x24);
    iVar7 = DAT_2c646218;
    while (iVar6 = iVar2, iVar6 != 0) {
      if (*(char *)(iVar6 + 0x20) <= cVar3) goto LAB_2c6461a0;
      iVar7 = iVar6;
      iVar2 = *(int *)(iVar6 + 8);
    }
  }
  else {
    if ((*(char *)(DAT_2c646214 + 8) != '\x02') ||
       (*(char *)(param_1 + 0x20) <= *(char *)(iVar5 + 0x20))) {
      *(undefined1 *)(param_1 + 1) = 1;
      iVar5 = *(int *)(iVar1 + 0x24);
      iVar1 = DAT_2c646218;
      while( true ) {
        iVar7 = iVar5;
        if (iVar7 == 0) {
          *(undefined4 *)(param_1 + 8) = 0;
          *(int *)(param_1 + 0xc) = iVar1;
          *(int *)(iVar1 + 8) = param_1;
          return;
        }
        if (*(char *)(iVar7 + 0x20) < *(char *)(param_1 + 0x20)) break;
        iVar5 = *(int *)(iVar7 + 8);
        iVar1 = iVar7;
      }
      *(int *)(param_1 + 8) = iVar7;
      *(int *)(param_1 + 0xc) = iVar1;
      *(int *)(iVar1 + 8) = param_1;
      *(int *)(iVar7 + 0xc) = param_1;
      return;
    }
    *(undefined1 *)(iVar5 + 1) = 1;
    if (*(int *)(iVar1 + 0x24) == 0) {
      iVar7 = iVar1 + 0x1c;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x24);
      iVar7 = iVar1 + 0x1c;
      do {
        iVar6 = iVar2;
        if (*(char *)(iVar6 + 0x20) <= *(char *)(iVar5 + 0x20)) goto LAB_2c6461a0;
        iVar7 = iVar6;
        iVar2 = *(int *)(iVar6 + 8);
      } while (*(int *)(iVar6 + 8) != 0);
    }
  }
  *(undefined4 *)(iVar5 + 8) = 0;
  *(int *)(iVar5 + 0xc) = iVar7;
  *(int *)(iVar7 + 8) = iVar5;
LAB_2c6461a8:
  FUN_2c643a84(iVar5);
  *(undefined1 *)(param_1 + 1) = 2;
  iVar5 = *(int *)(iVar1 + 0x14);
  *(int *)(iVar1 + 0x18) = param_1;
  if (param_1 != iVar5) {
    if (iVar5 != 0) {
      uVar4 = FUN_2c673c88();
      *(undefined4 *)(iVar5 + 0x48) = uVar4;
    }
    uVar4 = FUN_2c673c88();
    *(undefined4 *)(param_1 + 0x44) = uVar4;
  }
  FUN_2c645d84();
  FUN_2c643a88(param_1);
  return;
LAB_2c6461a0:
  *(int *)(iVar5 + 8) = iVar6;
  *(int *)(iVar5 + 0xc) = iVar7;
  *(int *)(iVar7 + 8) = iVar5;
  *(int *)(iVar6 + 0xc) = iVar5;
  goto LAB_2c6461a8;
}

