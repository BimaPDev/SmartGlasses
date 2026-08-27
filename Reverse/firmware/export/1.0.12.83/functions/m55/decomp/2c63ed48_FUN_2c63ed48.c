/* FUN_2c63ed48 @ 0x2c63ed48 */

byte FUN_2c63ed48(uint param_1,uint *param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 == 3) {
    param_1 = FUN_2c48edf0();
  }
  if (param_1 == 0xff) {
    param_1 = 1;
    uVar7 = param_1;
  }
  else {
    uVar7 = param_1 & 0xff;
  }
  uVar4 = FUN_2c48ee0c(uVar7);
  uVar5 = FUN_2c48ee50(uVar7);
  if (param_3 == 0) {
    uVar6 = FUN_2c63ecbc();
    bVar2 = FUN_2c48f42c(uVar7);
  }
  else {
    uVar6 = FUN_2c48ee94(uVar7);
    bVar2 = FUN_2c48f42c(uVar7);
  }
  if ((-1 < (int)(uVar4 | uVar5)) && (-1 < (int)uVar6)) {
    bVar1 = uVar4 == 0 && uVar6 == uVar4;
    bVar3 = bVar1 | bVar2;
    *param_2 = param_1;
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
    if (bVar3 != 0) {
      *(undefined1 *)(param_2 + 4) = 1;
      return bVar3;
    }
    *(byte *)(param_2 + 4) = bVar1 | bVar2;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c63ee08,0x66,DAT_2c63ee04,DAT_2c63ee00,param_1,uVar4,uVar5,uVar6);
}

