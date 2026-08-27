/* FUN_2c659c38 @ 0x2c659c38 */

void FUN_2c659c38(int param_1,undefined4 param_2,byte *param_3,byte *param_4,int param_5,int param_6
                 )

{
  undefined4 uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  
  param_5 = param_5 - param_6;
  uVar2 = *(uint *)(param_1 + 0xc) & 0xb0;
  if (uVar2 == 0x20) {
    if (param_6 != 0) {
      FUN_2c674668(param_3,param_4,param_6);
    }
    FUN_2c659024(param_3 + param_6,param_5,param_2);
    return;
  }
  if (uVar2 == 0x10) {
    uVar1 = FUN_2c659524(param_1 + 0x6c);
    uVar2 = FUN_2c6523b2(uVar1,0x2d);
    if ((*param_4 == uVar2) || (uVar2 = FUN_2c6523b2(uVar1,0x2b), *param_4 == uVar2)) {
      iVar4 = 1;
      pbVar3 = param_3 + 1;
      *param_3 = *param_4;
      goto LAB_2c659c74;
    }
    uVar2 = FUN_2c6523b2(uVar1,0x30);
    if (((*param_4 == uVar2) && (1 < param_6)) &&
       ((uVar2 = FUN_2c6523b2(uVar1,0x78), param_4[1] == uVar2 ||
        (uVar2 = FUN_2c6523b2(uVar1,0x58), param_4[1] == uVar2)))) {
      pbVar3 = param_3 + 2;
      iVar4 = 2;
      *param_3 = *param_4;
      param_3[1] = param_4[1];
      goto LAB_2c659c74;
    }
  }
  iVar4 = 0;
  pbVar3 = param_3;
LAB_2c659c74:
  FUN_2c659024(pbVar3,param_5,param_2);
  if (param_6 - iVar4 == 0) {
    return;
  }
  FUN_2c674668(pbVar3 + param_5,param_4 + iVar4,param_6 - iVar4,param_4);
  return;
}

