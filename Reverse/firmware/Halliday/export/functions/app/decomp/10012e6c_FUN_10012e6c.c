/* FUN_10012e6c @ 0x10012e6c */

void FUN_10012e6c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar4 = *DAT_10012f08;
  uVar2 = FUN_1011ea10(DAT_10012f0c,param_2,param_3,0,param_1,iVar4,param_3);
  iVar3 = FUN_1011ea30(param_1,DAT_10012f0c,uVar2);
  puVar5 = DAT_10012f10;
  if (iVar3 != 0) goto LAB_10012e9e;
  do {
    uVar1 = *puVar5;
    while( true ) {
      if (*DAT_10012f08 == iVar4) {
        return;
      }
      FUN_1013cdc0(uVar1);
LAB_10012e9e:
      uVar2 = FUN_1011ea10(DAT_10012f14);
      iVar3 = FUN_1011ea30(param_1,DAT_10012f14,uVar2);
      puVar5 = DAT_10012f18;
      if (iVar3 == 0) break;
      uVar2 = FUN_1011ea10(DAT_10012f1c);
      iVar3 = FUN_1011ea30(param_1,DAT_10012f1c,uVar2);
      puVar5 = DAT_10012f20;
      if (iVar3 == 0) break;
      uVar2 = FUN_1011ea10(DAT_10012f24);
      iVar3 = FUN_1011ea30(param_1,DAT_10012f24,uVar2);
      puVar5 = DAT_10012f28;
      if (iVar3 == 0) break;
      FUN_100a5b78((DAT_10012f30 - DAT_10012f2c) * 0x20 & 0xff00U | 0x470031,DAT_10012f38,
                   DAT_10012f34,param_1);
      uVar1 = 1;
    }
  } while( true );
}

