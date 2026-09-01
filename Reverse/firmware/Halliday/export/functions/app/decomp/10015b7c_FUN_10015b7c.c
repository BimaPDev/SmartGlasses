/* FUN_10015b7c @ 0x10015b7c */

void FUN_10015b7c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar1 = DAT_10015c40;
  iVar5 = *DAT_10015c44;
  if (*DAT_10015c40 != 0) {
    iVar2 = FUN_101165e0();
    if (iVar2 != 0) {
      FUN_10116598(*piVar1);
    }
    iVar2 = FUN_101165e0(*piVar1 + 0x1c);
    if (iVar2 != 0) {
      FUN_10116598(*piVar1 + 0x1c);
    }
    FUN_100169f4(*piVar1,0);
    FUN_10017188();
    FUN_10017604();
    FUN_1012d1f4(*piVar1);
    *piVar1 = 0;
    FUN_1012d1ae(0);
    iVar2 = FUN_100a5114();
    if (iVar2 != 0) {
      FUN_100a474c();
      FUN_100a1a7c(0xd,0,0,0);
    }
  }
  FUN_100a474c();
  uVar3 = FUN_1009e224();
  uVar4 = FUN_1011ea10(DAT_10015c48);
  iVar2 = FUN_1011ea30(uVar3,DAT_10015c48,uVar4);
  if (iVar2 != 0) goto LAB_10015c14;
  FUN_1009e248(DAT_10015c48);
  while( true ) {
    if (*DAT_10015c44 == iVar5) break;
    FUN_1013cdc0();
LAB_10015c14:
    if (param_1 != 0) {
      FUN_10016a44();
    }
  }
  FUN_100a5b78((DAT_10015c50 - DAT_10015c4c) * 0x20 & 0xff00U | 0xa20031,DAT_10015c58,DAT_10015c54);
  return;
}

