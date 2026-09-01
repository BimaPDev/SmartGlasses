/* FUN_10045a78 @ 0x10045a78 */

undefined4 FUN_10045a78(byte *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint extraout_r3;
  
  iVar1 = *DAT_10045ab8;
  uVar2 = (uint)*param_1;
  if (uVar2 != 1) goto LAB_10045aa4;
  pcVar3 = *(code **)(*(int *)(DAT_10045abc + 0x34) + 8);
  do {
    (*pcVar3)();
    do {
      FUN_10045a1c();
      if (*DAT_10045ab8 == iVar1) {
        return 1;
      }
      FUN_1013cdc0();
      uVar2 = extraout_r3;
LAB_10045aa4:
    } while (uVar2 != 0);
    pcVar3 = *(code **)(*(int *)(DAT_10045abc + 0x34) + 0xc);
  } while( true );
}

