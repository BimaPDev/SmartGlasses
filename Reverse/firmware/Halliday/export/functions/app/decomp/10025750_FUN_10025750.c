/* FUN_10025750 @ 0x10025750 */

void FUN_10025750(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_54;
  undefined1 auStack_50 [60];
  int local_14;
  
  local_14 = *DAT_100257e8;
  iVar2 = FUN_10124372();
  iVar5 = *(int *)(iVar2 + 0x10);
  iVar3 = FUN_1012437a(param_1);
  uVar6 = *(uint *)(iVar2 + 0x10);
  if (iVar3 != 7) goto LAB_100257bc;
LAB_10025774:
  if (iVar5 == 1) {
    uVar4 = 2;
  }
  else if (iVar5 == 2) {
    uVar4 = 0x18;
  }
  else {
    if (iVar5 != 0) goto LAB_10025786;
    uVar4 = 1;
  }
  FUN_10025264(uVar4,uVar6 & 0xff);
LAB_10025786:
  local_54 = 0;
  FUN_1011ea48(auStack_50,0,0x3c);
  FUN_1013d306(&local_54,0,0x40,DAT_100257ec,iVar5);
  FUN_10052c38(2,2,&local_54);
  do {
    FUN_1002571c();
    do {
      do {
        if (*DAT_100257e8 == local_14) {
          return;
        }
        iVar3 = FUN_1013cdc0();
LAB_100257bc:
      } while (iVar3 != 0xd);
      iVar2 = FUN_100871bc(param_1);
      if (iVar2 == 10) goto LAB_10025774;
      cVar1 = FUN_100871bc(param_1);
    } while (cVar1 != '\x1b');
  } while( true );
}

