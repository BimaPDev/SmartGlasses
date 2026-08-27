/* FUN_2c4f96c0 @ 0x2c4f96c0 */

int FUN_2c4f96c0(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_r2;
  uint uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  
  uVar2 = param_1[1];
  if (uVar2 < 0x1b) {
    uVar4 = *param_1;
    uVar3 = param_1[2];
    if ((int)(0x1f - uVar2) <= (int)param_1[2]) {
      uVar3 = 0x1f - uVar2;
    }
    uVar5 = FUN_2c4f94ec(param_1 + 2,uVar3,param_3,param_4,param_4);
    uVar5 = uVar5 | uVar4 << (uVar3 & 0xff);
    uVar2 = param_1[1] + uVar3;
    *param_1 = uVar5;
    param_1[1] = uVar2;
    param_3 = extraout_r2;
    if (0x19 < uVar2) goto LAB_2c4f96d0;
    param_3 = 0;
    uVar5 = uVar5 << (0x1a - uVar2 & 0xff);
    param_1[1] = 0;
    uVar2 = 0x1f;
    *param_1 = uVar5;
LAB_2c4f986e:
    uVar3 = param_1[2];
    if ((int)uVar2 <= (int)uVar3) {
      uVar3 = uVar2;
    }
    uVar2 = FUN_2c4f94ec(param_1 + 2,uVar3,param_3,uVar5,param_4);
    uVar5 = uVar2 | uVar5 << (uVar3 & 0xff);
    uVar2 = param_1[1] + uVar3;
    *param_1 = uVar5;
    param_1[1] = uVar2;
    if (uVar2 < 2) {
      uVar3 = 0;
      uVar5 = uVar5 << (2 - uVar2 & 0xff);
      param_1[1] = 0;
      bVar1 = (byte)uVar5;
      *param_1 = uVar5;
      goto LAB_2c4f96e6;
    }
  }
  else {
    uVar5 = *param_1;
LAB_2c4f96d0:
    uVar2 = uVar2 - 0x1a;
    param_1[1] = uVar2;
    if (uVar2 < 3) {
      uVar2 = 0x1f - uVar2;
      goto LAB_2c4f986e;
    }
  }
  uVar3 = uVar2 - 2;
  param_1[1] = uVar3;
  bVar1 = (byte)(uVar5 >> (uVar3 & 0xff));
LAB_2c4f96e6:
  cVar7 = '\0';
  uVar2 = 0;
  do {
    if (uVar3 < 9) {
      uVar4 = 0x1f - uVar3;
      if ((int)param_1[2] <= (int)(0x1f - uVar3)) {
        uVar4 = param_1[2];
      }
      uVar3 = FUN_2c4f94ec(param_1 + 2,uVar4);
      uVar5 = uVar3 | uVar5 << (uVar4 & 0xff);
      uVar3 = param_1[1] + uVar4;
      *param_1 = uVar5;
      param_1[1] = uVar3;
      if (7 < uVar3) goto LAB_2c4f96f6;
      uVar5 = uVar5 << (8 - uVar3 & 0xff);
      *param_1 = uVar5;
      param_1[1] = 0;
    }
    else {
LAB_2c4f96f6:
      uVar5 = uVar5 >> (uVar3 - 8 & 0xff);
      param_1[1] = uVar3 - 8;
    }
    uVar2 = uVar2 * 0x100 + (uVar5 & 0xff);
    if ((byte)(bVar1 & 3) < (byte)(cVar7 + 1U)) break;
    cVar7 = cVar7 + '\x01';
    uVar5 = *param_1;
    uVar3 = param_1[1];
  } while( true );
  FUN_2c4f9684(param_1);
  uVar3 = param_1[1];
  if (uVar2 < uVar3) {
    uVar6 = *param_1;
LAB_2c4f9760:
    uVar5 = uVar3 - uVar2;
    param_1[1] = uVar5;
    if (uVar5 < 0xd) {
      uVar4 = (uVar2 - uVar3) + 0x1f;
      goto LAB_2c4f98e4;
    }
LAB_2c4f976a:
    uVar5 = uVar5 - 0xc;
    param_1[1] = uVar5;
    if (uVar5 < 2) {
      uVar5 = 0x1f - uVar5;
      goto LAB_2c4f98ae;
    }
  }
  else {
    uVar5 = *param_1;
    uVar4 = param_1[2];
    if ((int)(0x1f - uVar3) <= (int)param_1[2]) {
      uVar4 = 0x1f - uVar3;
    }
    uVar6 = FUN_2c4f94ec(param_1 + 2,uVar4);
    uVar6 = uVar6 | uVar5 << (uVar4 & 0xff);
    uVar3 = param_1[1] + uVar4;
    *param_1 = uVar6;
    param_1[1] = uVar3;
    if (uVar2 <= uVar3) goto LAB_2c4f9760;
    uVar4 = 0x1f;
    uVar6 = uVar6 << (uVar2 - uVar3 & 0xff);
    param_1[1] = 0;
    *param_1 = uVar6;
LAB_2c4f98e4:
    uVar5 = param_1[2];
    if ((int)uVar4 <= (int)uVar5) {
      uVar5 = uVar4;
    }
    uVar2 = FUN_2c4f94ec(param_1 + 2,uVar5);
    uVar6 = uVar2 | uVar6 << (uVar5 & 0xff);
    uVar5 = param_1[1] + uVar5;
    *param_1 = uVar6;
    param_1[1] = uVar5;
    if (0xb < uVar5) goto LAB_2c4f976a;
    uVar6 = uVar6 << (0xc - uVar5 & 0xff);
    param_1[1] = 0;
    uVar5 = 0x1f;
    *param_1 = uVar6;
LAB_2c4f98ae:
    uVar2 = param_1[2];
    if ((int)uVar5 <= (int)uVar2) {
      uVar2 = uVar5;
    }
    uVar3 = FUN_2c4f94ec(param_1 + 2,uVar2);
    uVar6 = uVar3 | uVar6 << (uVar2 & 0xff);
    uVar5 = uVar2 + param_1[1];
    *param_1 = uVar6;
    param_1[1] = uVar5;
    if (uVar5 == 0) {
      uVar6 = uVar6 << 1;
      *param_1 = uVar6;
      uVar5 = 0;
      goto LAB_2c4f9780;
    }
  }
  uVar5 = uVar5 - 1;
  param_1[1] = uVar5;
  if ((int)((uVar6 >> (uVar5 & 0xff)) << 0x1f) < 0) {
    if (uVar5 < 9) {
      uVar2 = param_1[2];
      if ((int)(0x1f - uVar5) <= (int)uVar2) {
        uVar2 = 0x1f - uVar5;
      }
      uVar3 = FUN_2c4f94ec(param_1 + 2,uVar2);
      uVar6 = uVar3 | uVar6 << (uVar2 & 0xff);
      uVar5 = uVar2 + param_1[1];
      *param_1 = uVar6;
      param_1[1] = uVar5;
      if (uVar5 < 8) {
        uVar2 = 8 - uVar5;
        uVar5 = 0;
        uVar6 = uVar6 << (uVar2 & 0xff);
        *param_1 = uVar6;
        param_1[1] = 0;
        goto LAB_2c4f9780;
      }
    }
    uVar5 = uVar5 - 8;
    param_1[1] = uVar5;
  }
LAB_2c4f9780:
  iVar8 = 0;
  do {
    if (uVar5 < 9) {
      uVar2 = param_1[2];
      if ((int)(0x1f - uVar5) <= (int)param_1[2]) {
        uVar2 = 0x1f - uVar5;
      }
      uVar3 = FUN_2c4f94ec(param_1 + 2,uVar2);
      uVar6 = uVar3 | uVar6 << (uVar2 & 0xff);
      uVar5 = uVar2 + param_1[1];
      *param_1 = uVar6;
      param_1[1] = uVar5;
      if (7 < uVar5) goto LAB_2c4f978a;
      param_1[1] = 0;
      uVar6 = uVar6 << (8 - uVar5 & 0xff);
      *param_1 = uVar6;
    }
    else {
LAB_2c4f978a:
      uVar6 = uVar6 >> (uVar5 - 8 & 0xff);
      param_1[1] = uVar5 - 8;
    }
    iVar8 = iVar8 + (uVar6 & 0xff);
    if ((uVar6 & 0xff) != 0xff) {
      return iVar8;
    }
    uVar6 = *param_1;
    uVar5 = param_1[1];
  } while( true );
}

