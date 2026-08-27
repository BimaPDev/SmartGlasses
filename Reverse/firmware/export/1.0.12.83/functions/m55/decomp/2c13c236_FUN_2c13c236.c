/* FUN_2c13c236 @ 0x2c13c236 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13c236(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint extraout_r1;
  bool bVar4;
  uint uStack_10;
  uint uStack_c;
  
  uStack_c = *_DAT_2c13c29c;
  uStack_10 = param_4;
  iVar1 = FUN_2c13bc94(0x40,&uStack_10,0);
  if (iVar1 == 0) {
    bVar4 = uStack_10 >> 0x10 != 0x6503;
    uVar2 = 0;
    if (bVar4) {
      uVar2 = 0xffffffff;
    }
    uVar3 = uStack_10 >> 0x10;
    if (!bVar4) {
      *(uint *)(param_1 + 0x5c) = uVar3;
      *(uint *)(param_1 + 0x60) = uStack_10 & 0xff;
    }
  }
  else {
    FUN_2c135988(4,0x3d5,_DAT_2c13c2a8,_DAT_2c13c2a4,_DAT_2c13c2a0);
    uVar2 = 0xffffffff;
    uVar3 = extraout_r1;
  }
  if ((*_DAT_2c13c29c ^ uStack_c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c13424c(uVar2,uVar3,*_DAT_2c13c29c ^ uStack_c,0);
  }
  return;
}

