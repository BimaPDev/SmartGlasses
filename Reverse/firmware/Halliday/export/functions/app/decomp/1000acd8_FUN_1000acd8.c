/* FUN_1000acd8 @ 0x1000acd8 */

void FUN_1000acd8(undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  int extraout_r2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r3;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar2 = 8;
  iVar4 = *DAT_1000ad2c;
  uVar5 = (uint)*(byte *)(DAT_1000ad30 + 0xd);
  iVar6 = uVar5 + 8;
  iVar7 = DAT_1000ad30 + iVar6 * 8;
  iVar3 = DAT_1000ad30;
  do {
    uVar8 = CONCAT44(uVar2,param_1);
    if (*(char *)(iVar7 + 4) != '\0') goto LAB_1000ad22;
    bVar1 = true;
    *(undefined4 *)(iVar3 + iVar6 * 8) = param_1;
    *(undefined1 *)(iVar7 + 4) = 1;
    while( true ) {
      param_1 = (undefined4)uVar8;
      uVar5 = uVar5 + 1 & 0xff;
      if (7 < uVar5) {
        uVar5 = 0;
      }
      if ((!bVar1) && (uVar2 = (int)((ulonglong)uVar8 >> 0x20) - 1U & 0xff, uVar2 != 0)) break;
      *(char *)(iVar3 + 0xd) = (char)uVar5;
      if (*DAT_1000ad2c == iVar4) {
        return;
      }
      uVar8 = FUN_1013cdc0();
      iVar3 = extraout_r2;
      uVar5 = extraout_r3;
LAB_1000ad22:
      bVar1 = false;
    }
  } while( true );
}

