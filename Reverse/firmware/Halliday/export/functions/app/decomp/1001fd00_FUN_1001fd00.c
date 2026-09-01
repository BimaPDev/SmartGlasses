/* FUN_1001fd00 @ 0x1001fd00 */

void FUN_1001fd00(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *extraout_r3;
  undefined1 *puVar3;
  
  iVar2 = *DAT_1001fd38;
  if (param_1 == 0) {
    puVar3 = DAT_1001fd3c;
    if (DAT_1001fd3c[3] == '\0') goto LAB_1001fd24;
    uVar1 = DAT_1001fd3c[0x1c];
  }
  else if (DAT_1001fd3c[3] == '\0') {
    uVar1 = DAT_1001fd3c[1];
  }
  else {
    uVar1 = DAT_1001fd3c[0x1d];
  }
  while( true ) {
    if (*DAT_1001fd38 == iVar2) break;
    FUN_1013cdc0(uVar1);
    puVar3 = extraout_r3;
LAB_1001fd24:
    uVar1 = *puVar3;
  }
  return;
}

