/* FUN_10034e64 @ 0x10034e64 */

void FUN_10034e64(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int local_11c;
  undefined1 auStack_118 [252];
  int local_1c;
  
  local_1c = *DAT_10034f68;
  uVar4 = (DAT_10034f6c - DAT_10034f70) * 0x20 & 0xff00;
  if (((param_2 == 0) || (param_1 == 0)) || (iVar3 = FUN_1011ea10(param_2), iVar3 == 0)) {
    uVar1 = DAT_10034f74 | uVar4;
    uVar2 = DAT_10034f78;
  }
  else {
    uVar1 = FUN_1011ea10(param_2);
    if (4 < uVar1) {
      FUN_100a5b78(uVar4 | 0x2980031,DAT_10034f7c,DAT_10034f84,param_2);
      iVar3 = FUN_1011ea08(param_2,0x2e);
      if (iVar3 != 0) goto LAB_10034ef6;
      goto LAB_10034ed6;
    }
    uVar1 = uVar4 | 0x2940011;
    uVar2 = DAT_10034f80;
  }
LAB_10034e8e:
  FUN_100a5b78(uVar1,DAT_10034f7c,uVar2);
  do {
    uVar2 = 0xffffffff;
    while( true ) {
      if (*DAT_10034f68 == local_1c) {
        return;
      }
      iVar3 = FUN_1013cdc0(uVar2);
LAB_10034ef6:
      iVar3 = FUN_1011ea18(iVar3,DAT_10034f90);
      if (iVar3 != 0) break;
      local_11c = iVar3;
      FUN_1011ea48(auStack_118,0,0xfc);
      FUN_10034ab4(&local_11c,param_2);
      param_2 = FUN_1011ea08(&local_11c,0x2e);
      uVar2 = FUN_1011ea10(DAT_10034f94);
      FUN_1011e9f8(param_2 + 1,DAT_10034f94,uVar2);
      FUN_100a5b78(DAT_10034f98 | uVar4,DAT_10034f7c,DAT_10034f9c,DAT_10034f7c,&local_11c);
      iVar3 = FUN_1006ba84(param_1,&local_11c,0x13);
      if (iVar3 < 0) {
        uVar1 = uVar4 | 0x2a40031;
        uVar2 = DAT_10034fa0;
        goto LAB_10034e8e;
      }
      uVar2 = 0;
    }
LAB_10034ed6:
    FUN_100a5b78(DAT_10034f88 | uVar4,DAT_10034f7c,DAT_10034f8c,param_2);
  } while( true );
}

