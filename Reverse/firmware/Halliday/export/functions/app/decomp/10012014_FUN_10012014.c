/* FUN_10012014 @ 0x10012014 */

void FUN_10012014(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_30 [2];
  undefined1 local_2e;
  undefined1 local_2c;
  uint local_28;
  int local_1c;
  
  local_1c = *DAT_10012168;
  uVar5 = (DAT_1001216c - DAT_10012170) * 0x20 & 0xff00;
  FUN_100a5b78(uVar5 | 0xa80033,DAT_10012174,DAT_10012178,param_1,param_2,param_3);
  uVar2 = FUN_1009e224();
  iVar3 = FUN_1011ea18(DAT_1001217c,uVar2);
  if (iVar3 != 0) goto LAB_10012076;
  uVar4 = uVar5 | 0xab0021;
  uVar2 = DAT_10012180;
  do {
    FUN_100a5b78(uVar4,DAT_10012174,uVar2);
    while( true ) {
      while( true ) {
        while( true ) {
          if (*DAT_10012168 == local_1c) {
            return;
          }
          FUN_1013cdc0();
LAB_10012076:
          puVar1 = DAT_10012184;
          if (param_2 == 1) break;
          if (param_2 == 2) {
            FUN_10012c80((uint)param_3 & 0xff);
          }
          else if ((param_2 == 3) && (iVar3 = FUN_100bf554(), iVar3 != 0)) {
            FUN_100a5b78(uVar5 | 0xdd0031,DAT_10012174,DAT_100121ac);
            FUN_100bee34();
          }
        }
        if (param_3 == (undefined4 *)0x1) break;
        FUN_100b7dc4(*DAT_10012184,param_1);
        FUN_100a5b78(uVar5 | 0xd20031,DAT_10012174,DAT_100121a8);
        FUN_101314da(1);
        param_3 = puVar1;
      }
      FUN_100a5b78(uVar5 | 0xb00031,DAT_10012174,DAT_10012188);
      FUN_101314da(0);
      param_3 = (undefined4 *)FUN_100b7d54(*puVar1,param_1);
      if (param_3 != (undefined4 *)0x0) break;
      FUN_1011ea48(auStack_30,0,0x14);
      FUN_100a5b78(uVar5 | 0x5d0031,DAT_10012194,DAT_10012190);
      iVar3 = FUN_10112e84(DAT_10012198);
      if (iVar3 != 0) {
        FUN_10011e4c(iVar3,0);
      }
      uVar5 = DAT_100121a0;
      *DAT_1001219c = 1;
      param_1 = FUN_1009e224();
      uVar2 = FUN_1011ea10(uVar5);
      iVar3 = FUN_1011ea30(param_1,uVar5,uVar2);
      local_2e = 1;
      uVar4 = uVar5;
      if (iVar3 != 0) {
        local_2c = 8;
        uVar4 = DAT_100121a4;
        local_28 = uVar5;
      }
      FUN_1009ece8(uVar4,auStack_30);
      param_3 = (undefined4 *)0x1;
    }
    uVar4 = uVar5 | 0xb60031;
    uVar2 = DAT_1001218c;
  } while( true );
}

