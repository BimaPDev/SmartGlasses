/* FUN_2c4cdf04 @ 0x2c4cdf04 */

undefined4 FUN_2c4cdf04(uint *param_1,byte *param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = param_1[1];
  uVar3 = 2 - uVar5;
  if ((int)uVar3 < 1) {
    uVar3 = *param_1;
    uVar7 = 0;
  }
  else {
    if (uVar3 == 0x20) {
      uVar7 = 0;
    }
    else {
      uVar7 = *param_1 << (uVar3 & 0xff);
    }
    uVar3 = FUN_2c4d74d4(param_1 + 2);
    *param_1 = uVar3;
    uVar5 = param_1[1] + 0x20;
  }
  iVar1 = DAT_2c4ce010;
  param_1[1] = uVar5 - 2;
  uVar3 = (uVar3 >> (uVar5 - 2 & 0xff) | uVar7) & *(uint *)(iVar1 + 8);
  uVar5 = uVar3 & 0xff;
  *param_2 = (byte)uVar3;
  FUN_2c674268(param_2 + 1,0,param_4);
  param_2[0x42] = 0;
  if (uVar5 == 1) {
    if (0 < (int)param_3) {
      uVar3 = 0;
      do {
        if (0 < param_4) {
          uVar5 = *(uint *)(iVar1 + 4);
          pbVar4 = param_2;
          do {
            uVar6 = param_1[1];
            uVar7 = 0;
            uVar2 = 1 - uVar6;
            if ((int)uVar2 < 1) {
              uVar2 = *param_1;
            }
            else {
              if (uVar2 == 0x20) {
                uVar7 = 0;
              }
              else {
                uVar7 = *param_1 << (uVar2 & 0xff);
              }
              uVar2 = FUN_2c4d74d4(param_1 + 2);
              *param_1 = uVar2;
              uVar6 = param_1[1] + 0x20;
            }
            param_1[1] = uVar6 - 1;
            pbVar4 = pbVar4 + 1;
            *pbVar4 = (byte)(((uVar2 >> (uVar6 - 1 & 0xff) | uVar7) & uVar5) << (uVar3 & 0xff)) |
                      *pbVar4;
          } while (param_2 + param_4 != pbVar4);
        }
        uVar3 = uVar3 + 1;
      } while (param_3 != uVar3);
      return 0;
    }
  }
  else if ((uVar5 == 2) && (0 < param_4)) {
    pbVar4 = param_2 + param_4;
    do {
      param_2 = param_2 + 1;
      *param_2 = 0xff;
    } while (pbVar4 != param_2);
  }
  return 0;
}

