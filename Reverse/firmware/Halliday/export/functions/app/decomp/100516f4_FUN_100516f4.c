/* FUN_100516f4 @ 0x100516f4 */

void FUN_100516f4(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  undefined4 unaff_r11;
  undefined4 local_268;
  undefined4 uStack_264;
  char local_260;
  char local_25f [263];
  undefined1 auStack_158 [300];
  int local_2c;
  
  local_2c = *DAT_10051834;
  iVar1 = FUN_1004f6cc();
  if (iVar1 == 0) goto LAB_10051798;
  if (param_1 != 1) goto LAB_10051798;
  local_268 = 0;
  uStack_264 = 0;
  iVar1 = FUN_1006be64(&local_268,DAT_10051838);
  param_1 = (DAT_1005183c - DAT_10051840) * 0x20 & 0xff00;
  if (-1 < iVar1) {
    unaff_r7 = DAT_10051844 | param_1;
    unaff_r8 = param_1 | DAT_10051878;
    unaff_r6 = DAT_10051848 | param_1;
    unaff_r9 = param_1 | DAT_1005187c;
    unaff_r5 = DAT_1005184c;
    unaff_r11 = DAT_10051880;
    do {
      iVar1 = FUN_1006c070(&local_268,&local_260);
      if (iVar1 == 0) goto LAB_100517a6;
      FUN_100a5b78(param_1 | 0x2800011,DAT_1005184c,DAT_10051850);
      do {
        FUN_1006c184(&local_268);
        FUN_10034788();
        FUN_100a5b78(DAT_10051854 | param_1,DAT_1005184c,DAT_10051858);
LAB_10051798:
        if (*DAT_10051834 == local_2c) {
          return;
        }
        FUN_1013cdc0();
LAB_100517a6:
      } while (local_25f[0] == '\0');
      FUN_100a5b78(unaff_r7,unaff_r5,DAT_10051860,local_25f);
      if (((local_260 == '\0') && (iVar1 = FUN_1011ea08(local_25f,0x2e), iVar1 != 0)) &&
         ((iVar2 = FUN_1011ea18(iVar1,unaff_r11), iVar2 == 0 ||
          (iVar1 = FUN_1011ea18(iVar1,DAT_10051870), iVar1 == 0)))) {
        FUN_10118a1c(auStack_158,300,DAT_10051864,DAT_10051838,local_25f);
        FUN_100a5b78(unaff_r8,unaff_r5,DAT_10051868,auStack_158);
        iVar1 = FUN_1006c2a0(auStack_158);
        uVar3 = unaff_r9;
        uVar4 = DAT_10051874;
        if (iVar1 != 0) {
          uVar3 = unaff_r6;
          uVar4 = DAT_1005186c;
        }
        FUN_100a5b78(uVar3,unaff_r5,uVar4,auStack_158);
      }
    } while( true );
  }
  FUN_100a5b78(param_1 | 0x2780011,DAT_1005184c,DAT_1005185c,DAT_10051838);
  goto LAB_10051798;
}

