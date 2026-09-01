/* FUN_1001e8e8 @ 0x1001e8e8 */

void FUN_1001e8e8(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_r7;
  undefined4 local_5c;
  undefined1 auStack_58 [60];
  int local_1c;
  
  local_1c = *DAT_1001e9a0;
  iVar2 = FUN_1012437a();
  uVar3 = FUN_10124372(param_1);
  if (iVar2 != 0xd) goto LAB_1001e97c;
  unaff_r7 = *DAT_1001e9a4;
  cVar1 = FUN_100871bc(param_1);
  uVar3 = FUN_1012c10e(uVar3);
  if ((cVar1 != '\n') && (cVar1 != '\x1b')) goto LAB_1001e97c;
  uVar4 = FUN_10124386(param_1);
  iVar2 = DAT_1001e9a8;
  uVar3 = (**(code **)(DAT_1001e9a8 + 4))(uVar4 & 0xff,uVar3);
  (**(code **)(iVar2 + 0x14))(uVar4 & 0xff,uVar3);
  local_5c = 0;
  FUN_1011ea48(auStack_58,0,0x3c);
  FUN_1013d306(&local_5c,0,0x40,DAT_1001e9ac,uVar3);
  iVar2 = (**(code **)(iVar2 + 0x28))();
  if (iVar2 == 0) {
    if (uVar4 == 0) {
      uVar3 = 3;
    }
    else {
      uVar3 = 4;
    }
  }
  else {
    if (uVar4 != 0) goto LAB_1001e98a;
    uVar3 = 5;
  }
  while( true ) {
    FUN_10052c38(6,uVar3);
    if (unaff_r7 != 0) {
      FUN_1001e5ec();
    }
LAB_1001e97c:
    if (*DAT_1001e9a0 == local_1c) break;
    FUN_1013cdc0();
LAB_1001e98a:
    uVar3 = 6;
  }
  return;
}

