/* FUN_1001fe10 @ 0x1001fe10 */

void FUN_1001fe10(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *extraout_r3;
  undefined1 *puVar3;
  
  iVar2 = *DAT_1001fe48;
  if (param_1 == 0) {
    if (param_2 == 0) {
      uVar1 = *DAT_1001fe4c;
    }
    else {
      uVar1 = DAT_1001fe4c[1];
    }
  }
  else {
    puVar3 = DAT_1001fe4c;
    if (param_2 != 0) goto LAB_1001fe32;
    uVar1 = DAT_1001fe4c[0x1c];
  }
  while( true ) {
    if (*DAT_1001fe48 == iVar2) break;
    FUN_1013cdc0(uVar1);
    puVar3 = extraout_r3;
LAB_1001fe32:
    uVar1 = puVar3[0x1d];
  }
  return;
}

