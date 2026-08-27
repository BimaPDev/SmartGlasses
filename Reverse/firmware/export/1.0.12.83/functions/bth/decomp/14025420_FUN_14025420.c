/* FUN_14025420 @ 0x14025420 */

undefined4 FUN_14025420(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_20;
  uint uStack_1c;
  int local_14;
  
  local_14 = *DAT_14025640;
  FUN_1402ce98(0,0xc,param_3,0);
  FUN_14025410();
  FUN_140b46e8(0xf);
  iVar3 = FUN_14027bd8();
  uVar4 = FUN_140e5998();
  puVar1 = DAT_14025644;
  *DAT_14025644 = uVar4;
  FUN_140259c4();
  FUN_14028cb8(DAT_14025648);
  FUN_14028c30();
  FUN_14028c30();
  FUN_140e53e8();
  FUN_14025414();
  FUN_140b38c4(iVar3);
  FUN_14000098();
  FUN_14025418();
  FUN_140e5288(0,1);
  uVar5 = FUN_140e5248(0);
  if (uVar5 < 0x400000) {
    FUN_1402a6e8(4,0x9c,DAT_14025658,DAT_14025654,DAT_14025660);
    uVar4 = DAT_14025668;
    FUN_1402a6e8(4,0x9d,DAT_14025658,DAT_14025654,DAT_14025664,0x400000,uVar5);
    FUN_1402a6e8(4,0xa0,DAT_14025658,DAT_14025654,uVar4,uVar5);
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1402566c);
  }
  FUN_14039e64();
  FUN_140e5848();
  FUN_140dc044();
  FUN_1409ecc4();
  if (iVar3 << 0x13 < 0) {
    FUN_14027c7c(0x1000);
    iVar3 = FUN_140a6f04(iVar3);
  }
  else if (iVar3 << 0x12 < 0) {
    FUN_14027c7c(0x2000);
    iVar3 = FUN_140a70f8();
  }
  else {
    iVar3 = FUN_140b38e8();
  }
  if (iVar3 == 0) {
    do {
      FUN_140e5098(*puVar1,0xf);
      FUN_140e53d8(&local_20,0,0xffffffff);
      if ((local_20 != 8) || ((uStack_1c & 4) != 0)) {
        FUN_14027fb4(0);
        FUN_140280ac(0);
        FUN_14028078(0,10);
        FUN_14027f98(0);
        FUN_14028db8(1,0);
        FUN_140b3748(0);
        FUN_1402541c(1);
        uVar4 = 1;
        goto LAB_140254ea;
      }
    } while (-1 < (int)(uStack_1c << 0x1c));
    FUN_14027fb4(0);
    FUN_140280ac(0,0);
    FUN_14028078(0,10);
    FUN_14027f98(0);
    FUN_14028db8(1,0);
    FUN_140b3748(0);
    FUN_1402541c(2);
    FUN_1402a6e8(4,0xe1,DAT_14025658,DAT_14025654,DAT_1402564c,2);
    FUN_1402a6e8(4,0xe7,DAT_14025658,DAT_14025654,DAT_1402565c);
    FUN_1403059c();
  }
  else {
    FUN_14027fb4(0);
    FUN_140280ac(0);
    FUN_14028078(0,10);
    FUN_14027f98(0);
    FUN_14028db8(1,0);
    FUN_140b3748(iVar3);
    FUN_1402541c(0);
    uVar4 = 0;
LAB_140254ea:
    uVar2 = DAT_14025650;
    FUN_1402a6e8(4,0xe1,DAT_14025658,DAT_14025654,DAT_1402564c,uVar4);
    FUN_1402a6e8(4,0xe3,DAT_14025658,DAT_14025654,uVar2);
    FUN_14027c7c(0x10000);
    FUN_14030594();
  }
  if (*DAT_14025640 == local_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

