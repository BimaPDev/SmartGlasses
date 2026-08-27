/* FUN_140061ec @ 0x140061ec */

void FUN_140061ec(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  FUN_14003bec();
  if ((*(byte *)(param_1 + 0x22) & 0x10) == 0) {
    iVar8 = 0x60;
  }
  else {
    iVar8 = 0x20;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x38) + iVar8) = param_2;
  iVar4 = FUN_140058b0(param_1);
  iVar5 = DAT_14006254;
  iVar8 = DAT_140061e4;
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    if (*(int *)(iVar5 + 0x24) == 0) {
      iVar5 = iVar5 + 0x1c;
    }
    else {
      iVar8 = iVar5 + 0x1c;
      iVar4 = *(int *)(iVar5 + 0x24);
      do {
        iVar5 = iVar4;
        if (*(char *)(iVar5 + 0x20) < *(char *)(param_1 + 0x20)) {
          *(int *)(param_1 + 8) = iVar5;
          *(int *)(param_1 + 0xc) = iVar8;
          *(int *)(iVar8 + 8) = param_1;
          *(int *)(iVar5 + 0xc) = param_1;
          return;
        }
        iVar8 = iVar5;
        iVar4 = *(int *)(iVar5 + 8);
      } while (*(int *)(iVar5 + 8) != 0);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(int *)(param_1 + 0xc) = iVar5;
    *(int *)(iVar5 + 8) = param_1;
    return;
  }
  iVar5 = *(int *)(DAT_140061e4 + 0x14);
  if (iVar4 == 0) {
    if (*(char *)(DAT_140061e4 + 8) != '\x02') {
      return;
    }
    iVar4 = *(int *)(DAT_140061e4 + 0x24);
    if (iVar4 == 0) {
      return;
    }
    cVar2 = *(char *)(iVar5 + 0x20);
    if (*(char *)(iVar4 + 0x20) <= cVar2) {
      return;
    }
    if (*(int *)(iVar4 + 0xc) != 0) {
      iVar6 = *(int *)(iVar4 + 8);
      *(int *)(*(int *)(iVar4 + 0xc) + 8) = iVar6;
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
      }
      *(undefined4 *)(iVar4 + 0xc) = 0;
      cVar2 = *(char *)(iVar5 + 0x20);
    }
    *(undefined1 *)(iVar5 + 1) = 1;
    iVar1 = *(int *)(iVar8 + 0x24);
    iVar6 = DAT_140061e8;
    while (iVar7 = iVar1, iVar7 != 0) {
      if (*(char *)(iVar7 + 0x20) <= cVar2) goto LAB_14006170;
      iVar6 = iVar7;
      iVar1 = *(int *)(iVar7 + 8);
    }
  }
  else {
    if ((*(char *)(DAT_140061e4 + 8) != '\x02') ||
       (*(char *)(iVar4 + 0x20) <= *(char *)(iVar5 + 0x20))) {
      *(undefined1 *)(iVar4 + 1) = 1;
      iVar5 = *(int *)(iVar8 + 0x24);
      iVar8 = DAT_140061e8;
      while( true ) {
        iVar6 = iVar5;
        if (iVar6 == 0) {
          *(undefined4 *)(iVar4 + 8) = 0;
          *(int *)(iVar4 + 0xc) = iVar8;
          *(int *)(iVar8 + 8) = iVar4;
          return;
        }
        if (*(char *)(iVar6 + 0x20) < *(char *)(iVar4 + 0x20)) break;
        iVar5 = *(int *)(iVar6 + 8);
        iVar8 = iVar6;
      }
      *(int *)(iVar4 + 8) = iVar6;
      *(int *)(iVar4 + 0xc) = iVar8;
      *(int *)(iVar8 + 8) = iVar4;
      *(int *)(iVar6 + 0xc) = iVar4;
      return;
    }
    *(undefined1 *)(iVar5 + 1) = 1;
    iVar1 = *(int *)(iVar8 + 0x24);
    iVar6 = iVar8 + 0x1c;
    if (*(int *)(iVar8 + 0x24) == 0) {
      iVar6 = iVar8 + 0x1c;
    }
    else {
      do {
        iVar7 = iVar1;
        if (*(char *)(iVar7 + 0x20) <= *(char *)(iVar5 + 0x20)) goto LAB_14006170;
        iVar6 = iVar7;
        iVar1 = *(int *)(iVar7 + 8);
      } while (*(int *)(iVar7 + 8) != 0);
    }
  }
  *(undefined4 *)(iVar5 + 8) = 0;
  *(int *)(iVar5 + 0xc) = iVar6;
  *(int *)(iVar6 + 8) = iVar5;
LAB_14006178:
  FUN_14003bf0(iVar5);
  *(undefined1 *)(iVar4 + 1) = 2;
  iVar5 = *(int *)(iVar8 + 0x14);
  *(int *)(iVar8 + 0x18) = iVar4;
  if (iVar4 != iVar5) {
    if (iVar5 != 0) {
      uVar3 = FUN_14002c48();
      *(undefined4 *)(iVar5 + 0x48) = uVar3;
    }
    uVar3 = FUN_14002c48();
    *(undefined4 *)(iVar4 + 0x44) = uVar3;
  }
  FUN_14005d50();
  FUN_14003bf4(iVar4);
  return;
LAB_14006170:
  *(int *)(iVar5 + 8) = iVar7;
  *(int *)(iVar5 + 0xc) = iVar6;
  *(int *)(iVar6 + 8) = iVar5;
  *(int *)(iVar7 + 0xc) = iVar5;
  goto LAB_14006178;
}

