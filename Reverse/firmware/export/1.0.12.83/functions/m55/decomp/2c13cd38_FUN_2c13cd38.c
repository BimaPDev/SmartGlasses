/* FUN_2c13cd38 @ 0x2c13cd38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c13cd38(int param_1)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_1c = *_DAT_2c13ce08;
  psVar4 = _DAT_2c13ce0c + 500;
  psVar3 = _DAT_2c13ce0c;
  do {
    uStack_20 = *(undefined4 *)(psVar3 + 2);
    if ((*psVar3 != 0x120) || (*(int *)(param_1 + 0x60) == 0)) {
      uVar1 = FUN_2c13c41c();
      if (uVar1 == 0) goto LAB_2c13cd5e;
LAB_2c13cd86:
      FUN_2c135988(4,0x42d,_DAT_2c13ce1c,_DAT_2c13ce18,_DAT_2c13ce14,_DAT_2c13ce10,uVar1);
      goto LAB_2c13cd9e;
    }
    uStack_20 = 0xff;
    uVar1 = FUN_2c13c41c(0x120,0xff);
    if (uVar1 != 0) goto LAB_2c13cd86;
LAB_2c13cd5e:
    psVar3 = psVar3 + 4;
  } while (psVar4 != psVar3);
  uStack_20 = 0xf0f;
  uVar1 = FUN_2c13c41c(0x104);
  uStack_20 = 0xf;
  uVar2 = FUN_2c13c41c(0x100);
  uVar1 = uVar1 | uVar2;
  FUN_2c13bc94(0x100,&uStack_20);
  if (uVar1 != 0) {
    FUN_2c135988(4,0x43d,_DAT_2c13ce1c,_DAT_2c13ce18,_DAT_2c13ce20,_DAT_2c13ce10,uVar1);
  }
  FUN_2c13ca40(param_1,0);
LAB_2c13cd9e:
  if (*_DAT_2c13ce08 == iStack_1c) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

