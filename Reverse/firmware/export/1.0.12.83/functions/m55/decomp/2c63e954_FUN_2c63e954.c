/* FUN_2c63e954 @ 0x2c63e954 */

undefined4 FUN_2c63e954(uint param_1,uint param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = DAT_2c63ea84;
  pbVar2 = DAT_2c63ea54;
  if (*DAT_2c63ea84 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c63ea74,0x167,DAT_2c63ea70,DAT_2c63ea6c);
  }
  if (*DAT_2c63ea54 == param_2) {
    iVar5 = FUN_2c607e50(*DAT_2c63ea84);
    puVar1 = DAT_2c63ea88;
  }
  else {
    FUN_2c63e350(param_1 & 0xff);
    iVar5 = *piVar4;
    *pbVar2 = (byte)param_2;
    iVar5 = FUN_2c607e50(iVar5);
    puVar1 = DAT_2c63ea88;
  }
  DAT_2c63ea88 = puVar1;
  if ((iVar5 == 0) && (*DAT_2c63ea58 == '\0')) {
    iVar5 = *piVar4;
    *DAT_2c63ea58 = '\x01';
    FUN_2c606abc(iVar5,1);
    FUN_2c602454(*piVar4,DAT_2c63ea5c,0xd,0);
    *puVar1 = 0;
    FUN_2c63e8a0(param_1,0xffff);
    *puVar1 = 1;
    if (param_2 == 0) {
      iVar5 = *piVar4;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c63ea80,0x3a,DAT_2c63ea7c,DAT_2c63ea78);
      }
      FUN_2c6041d4(iVar5);
      iVar6 = FUN_2c6041fc();
      FUN_2c604550(iVar5,iVar6 + -1);
      FUN_2c5ff340(*piVar4);
      uVar3 = DAT_2c63ea64;
      iVar5 = *DAT_2c63ea60;
      *(undefined4 *)(iVar5 + 0x20) = 0;
      *(undefined4 *)(iVar5 + 0x24) = 0;
      *(undefined4 *)(iVar5 + 0x28) = 0xff;
      *(undefined4 *)(iVar5 + 0x1c) = uVar3;
      FUN_2c62e8ec();
      iVar5 = *DAT_2c63ea68;
      *(undefined4 *)(iVar5 + 0x20) = 0x9a;
      *(undefined4 *)(iVar5 + 0x24) = 0x9a;
      *(undefined4 *)(iVar5 + 0x28) = 0x100;
      *(undefined4 *)(iVar5 + 0x1c) = uVar3;
      FUN_2c62e8ec();
    }
  }
  return 1;
}

