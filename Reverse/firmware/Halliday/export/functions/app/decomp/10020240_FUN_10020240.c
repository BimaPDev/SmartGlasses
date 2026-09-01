/* FUN_10020240 @ 0x10020240 */

void FUN_10020240(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 extraout_r1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *extraout_r3;
  undefined1 *puVar4;
  
  puVar4 = DAT_100202b8;
  iVar3 = *DAT_100202b4;
  if (param_2 < 0x31) {
    uVar2 = (undefined1)param_2;
    if (param_1 == 0) {
      if (DAT_100202b8[3] == '\0') goto LAB_1002029c;
      DAT_100202b8[0x1c] = uVar2;
    }
    else if (DAT_100202b8[3] == '\0') {
      DAT_100202b8[1] = uVar2;
    }
    else {
      DAT_100202b8[0x1d] = uVar2;
    }
    while( true ) {
      FUN_100a5b78(DAT_100202c4 | (DAT_100202c0 - DAT_100202bc) * 0x20 & 0xff00U,DAT_100202cc,
                   DAT_100202c8,*puVar4,puVar4[1],puVar4[0x1c],puVar4[0x1d]);
      FUN_100201cc();
      FUN_1004823c();
      uVar1 = 1;
LAB_1002028e:
      if (*DAT_100202b4 == iVar3) break;
      FUN_1013cdc0(uVar1);
      puVar4 = extraout_r3;
      uVar2 = extraout_r1;
LAB_1002029c:
      *puVar4 = uVar2;
    }
    return;
  }
  uVar1 = 0;
  goto LAB_1002028e;
}

