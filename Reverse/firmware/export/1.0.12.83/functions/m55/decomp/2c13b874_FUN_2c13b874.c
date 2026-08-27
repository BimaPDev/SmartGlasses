/* FUN_2c13b874 @ 0x2c13b874 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13b874(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short *psVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar6;
  short *psVar7;
  short sVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uStack_24 = *_DAT_2c13bb00;
  uStack_34 = 0;
  FUN_2c13b1dc(0,&uStack_34,param_3,0);
  uStack_28 = 0;
  FUN_2c13b264(0x2c,0xa5);
  func_0x2c13f650(1);
  psVar1 = _DAT_2c13bb04;
  FUN_2c13b1dc(0,&uStack_28);
  func_0x2c13f650(2);
  sVar8 = 4;
  uStack_34 = 3;
  psVar7 = psVar1;
  while( true ) {
    if ((sVar8 == 0x24) && ((int)(uStack_34 << 0x1d) < 0)) {
      FUN_2c13b1dc(0x24,&uStack_34);
      uStack_34 = uStack_34 | 4;
      FUN_2c13b264(8,0xa5);
      FUN_2c13b264(0x24,uStack_34);
      FUN_2c13b264(8,0x5a);
    }
    else {
      FUN_2c13b264(sVar8);
    }
    if (psVar1 + 0x198 == psVar7 + 4) break;
    uStack_34 = *(uint *)(psVar7 + 2);
    sVar8 = *psVar7;
    psVar7 = psVar7 + 4;
  }
  uStack_34 = 0xa5;
  FUN_2c13b264(8);
  uVar12 = FUN_2c13b1dc(0x24,&uStack_34);
  uVar6 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if ((int)uVar12 != 0) {
    FUN_2c135988(4,0x1e5,_DAT_2c13bb10,_DAT_2c13bb0c,_DAT_2c13bb08,uStack_34);
    uStack_34 = uStack_34 | 4;
    FUN_2c13b264(0x24);
    uStack_34 = 0x5a;
    FUN_2c13b264(8);
    uStack_34 = 0x50000;
    FUN_2c13b264(800);
    uStack_34 = _DAT_2c13bb14;
    FUN_2c13b264(0x360);
    uStack_34 = 0x1000000;
    iVar4 = FUN_2c13b264(0x408);
    FUN_2c13b1dc(0x24,&uStack_34);
    uVar6 = extraout_r1;
    if (iVar4 != 0) {
      FUN_2c135988(4,0x209,_DAT_2c13bb10,_DAT_2c13bb0c,_DAT_2c13bb18,uStack_34);
      FUN_2c13b264(0x118,0);
      FUN_2c13b264(0x114,0xffffffff);
      func_0x2c13f650(0x1d);
      FUN_2c13b264(0x118,0xf0f);
      FUN_2c13b264(0x114,0xffffffff);
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      FUN_2c13b1dc(0x300,&uStack_28);
      uStack_28 = (uStack_28 & 0x7f) >> 4;
      if (uStack_28 == 0) {
        fVar11 = 1.0;
      }
      else if (uStack_28 - 1 < 3) {
        fVar11 = (float)VectorSignedToFloat(2 << (uStack_28 - 1 & 0xff),(byte)(in_fpscr >> 0x16) & 3
                                           );
        fVar11 = 1.0 / fVar11;
      }
      else {
        fVar11 = (float)VectorSignedToFloat(2 << (uStack_28 - 4 & 0xff),(byte)(in_fpscr >> 0x16) & 3
                                           );
      }
      FUN_2c13b1dc(0x128,&uStack_2c);
      uStack_2c = ((uStack_2c & 0xffffff) >> 0x14) + 1;
      FUN_2c13b1dc(0x80,&uStack_30);
      uStack_30 = uStack_30 & 0xfffff;
      FUN_2c135988(4,0x1a9,_DAT_2c13bb10,_DAT_2c13bb0c,_DAT_2c13bb1c,uStack_30);
      fVar9 = (float)VectorUnsignedToFloat(uStack_2c,(byte)(in_fpscr >> 0x16) & 3);
      fVar10 = (float)VectorUnsignedToFloat(uStack_30,(byte)(in_fpscr >> 0x16) & 3);
      uStack_30 = VectorFloatToUnsigned((fVar9 / 3.0) * fVar11 * fVar10,3);
      uStack_30 = uStack_30 & 0xfffff;
      FUN_2c135988(4,0x1ac,_DAT_2c13bb10,_DAT_2c13bb0c,_DAT_2c13bb20,uStack_30);
      FUN_2c13b264(8,0xa5);
      FUN_2c13b264(0x80,uStack_30);
      FUN_2c13b264(8,0x5a);
      FUN_2c13b264(0x114,0xffffffff);
      uVar3 = _DAT_2c13bb28;
      puVar2 = _DAT_2c13bb24;
      uVar5 = _DAT_2c13bb10;
      uVar6 = _DAT_2c13bb0c;
      *_DAT_2c13bb24 = 0;
      puVar2[1] = 0xffffffff;
      FUN_2c135988(4,0x211,uVar5,uVar6,uVar3);
      uVar5 = 0;
      uVar6 = extraout_r1_00;
      goto LAB_2c13bac6;
    }
  }
  uVar5 = 0xffffffff;
LAB_2c13bac6:
  if ((*_DAT_2c13bb00 ^ uStack_24) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c13424c(uVar5,uVar6,*_DAT_2c13bb00 ^ uStack_24,0);
  }
  return;
}

