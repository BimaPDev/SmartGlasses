/* FUN_1004d1c4 @ 0x1004d1c4 */

void FUN_1004d1c4(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_r2;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  undefined8 uVar8;
  
  iVar7 = *DAT_1004d23c;
  uVar5 = (DAT_1004d234 - DAT_1004d238) * 0x20 & 0xff00;
  if (param_1 < 4) {
    FUN_100a5b78(uVar5 | 0xbc0031,DAT_1004d244,DAT_1004d248,param_1,param_1,iVar7,param_3);
    *DAT_1004d24c = (char)param_1;
    FUN_1004cd6c();
    if (*DAT_1004d23c == iVar7) {
      iVar7 = *DAT_1004d1c0;
      uVar8 = FUN_1004ced0();
      uVar6 = 0;
      if (*DAT_1004d1c0 != iVar7) {
        uVar8 = FUN_1013cdc0();
        uVar6 = extraout_r2;
      }
      piVar1 = DAT_1004d16c;
      iVar7 = *DAT_1004d168;
      if (*DAT_1004d16c == 0) goto LAB_1004d0fa;
      do {
        uVar2 = 0;
        while( true ) {
          while( true ) {
            if (*DAT_1004d168 == iVar7) {
              return;
            }
            FUN_1013cdc0(uVar2);
LAB_1004d0fa:
            iVar3 = thunk_FUN_1009f30c(0x26d4,DAT_1004d170);
            uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
            *piVar1 = iVar3;
            if (iVar3 != 0) break;
            FUN_100a5b78((DAT_1004d178 - DAT_1004d174) * 0x20 & 0xff00U | 0x430011,DAT_1004d180,
                         DAT_1004d17c,DAT_1004d174,(int)uVar8);
            uVar2 = 0xfffffff4;
          }
          uVar4 = FUN_1004d074();
          iVar3 = FUN_100e90e8(DAT_1004d190,DAT_1004d18c,DAT_1004d188,DAT_1004d184,uVar4,uVar2,uVar6
                               ,iVar7,unaff_r4,unaff_lr);
          uVar8 = CONCAT44(uVar2,uVar4);
          if (-1 < iVar3) break;
          FUN_100a5b78((DAT_1004d178 - DAT_1004d174) * 0x20 & 0xff00U | 0x480011,DAT_1004d180,
                       DAT_1004d194);
          uVar8 = CONCAT44(uVar2,uVar4);
          uVar2 = 0xfffffffe;
        }
      } while( true );
    }
  }
  else if (*DAT_1004d23c == iVar7) goto LAB_1004d1f0;
  uVar5 = FUN_1013cdc0();
LAB_1004d1f0:
  FUN_100a5b78(uVar5 | 0xb90011,DAT_1004d244,DAT_1004d240);
  return;
}

