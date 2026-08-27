/* FUN_2c13c950 @ 0x2c13c950 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13c950(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = *_DAT_2c13ca10;
  uStack_10 = 0;
  FUN_2c13bc94(0x108,&uStack_10,0);
  if (param_1 == 0) {
    uStack_10 = 0x30;
    iVar1 = FUN_2c13c41c(0x108);
    if (iVar1 == 0) {
      FUN_2c135988(4,0x70c,_DAT_2c13ca20,_DAT_2c13ca1c,_DAT_2c13ca18);
      uVar2 = 0;
      uVar3 = extraout_r1;
      goto LAB_2c13c9ac;
    }
    uVar3 = 0x70a;
    uVar2 = _DAT_2c13ca24;
  }
  else {
    uStack_10 = 0x32;
    iVar1 = FUN_2c13c41c(0x108);
    if (iVar1 == 0) {
      FUN_2c135988(4,0x704,_DAT_2c13ca20,_DAT_2c13ca1c,_DAT_2c13ca3c,*_DAT_2c13ca38,*_DAT_2c13ca34,
                   *_DAT_2c13ca30,*_DAT_2c13ca2c,*_DAT_2c13ca28);
      uVar2 = 0;
      uVar3 = extraout_r1_01;
      goto LAB_2c13c9ac;
    }
    uVar3 = 0x702;
    uVar2 = _DAT_2c13ca14;
  }
  FUN_2c135988(4,uVar3,_DAT_2c13ca20,_DAT_2c13ca1c,uVar2);
  uVar2 = 0xffffffff;
  uVar3 = extraout_r1_00;
LAB_2c13c9ac:
  if ((*_DAT_2c13ca10 ^ uStack_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c(uVar2,uVar3,*_DAT_2c13ca10 ^ uStack_c,0);
}

