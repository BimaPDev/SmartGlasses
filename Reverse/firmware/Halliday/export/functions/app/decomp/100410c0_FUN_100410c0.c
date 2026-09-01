/* FUN_100410c0 @ 0x100410c0 */

undefined4 FUN_100410c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = DAT_10041144;
  iVar5 = *DAT_10041140;
  iVar2 = (**(code **)(DAT_10041144 + 8))();
  if (iVar2 == 0x6e) goto LAB_100410f0;
  do {
    iVar2 = 0;
    while( true ) {
      do {
        iVar3 = (**(code **)(iVar1 + 8))();
        if (((iVar3 == 0x6f) && (iVar3 = (**(code **)(DAT_10041150 + 4))(), iVar3 != 0)) ||
           (uVar4 = 0, iVar2 != 0)) {
          uVar4 = (**(code **)(iVar1 + 8))();
          FUN_100a5b78((DAT_10041154 - DAT_10041158) * 0x20 & 0xff00U | 0x160031,DAT_10041160,
                       DAT_1004115c,uVar4);
          uVar4 = 1;
        }
        if (*DAT_10041140 == iVar5) {
          return uVar4;
        }
        FUN_1013cdc0();
LAB_100410f0:
        iVar2 = (**(code **)(DAT_10041148 + 0x1c))();
      } while (iVar2 != 0);
      if (*(char *)(DAT_1004114c + 0x6a4) != '\0') break;
      iVar2 = 1;
    }
  } while( true );
}

