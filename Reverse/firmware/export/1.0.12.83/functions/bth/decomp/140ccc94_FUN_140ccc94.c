/* FUN_140ccc94 @ 0x140ccc94 */

void FUN_140ccc94(int param_1,undefined4 param_2,byte *param_3,byte *param_4,int param_5,int param_6
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
      FUN_140e5278(param_3,param_4,param_6);
    }
    FUN_140cc080(param_3 + param_6,param_5,param_2);
    return;
  }
  if (uVar2 == 0x10) {
    uVar1 = FUN_140cc580(param_1 + 0x6c);
    uVar2 = FUN_140c5536(uVar1,0x2d);
    if ((*param_4 == uVar2) || (uVar2 = FUN_140c5536(uVar1,0x2b), *param_4 == uVar2)) {
      iVar4 = 1;
      pbVar3 = param_3 + 1;
      *param_3 = *param_4;
      goto LAB_140cccd0;
    }
    uVar2 = FUN_140c5536(uVar1,0x30);
    if (((*param_4 == uVar2) && (1 < param_6)) &&
       ((uVar2 = FUN_140c5536(uVar1,0x78), param_4[1] == uVar2 ||
        (uVar2 = FUN_140c5536(uVar1,0x58), param_4[1] == uVar2)))) {
      pbVar3 = param_3 + 2;
      iVar4 = 2;
      *param_3 = *param_4;
      param_3[1] = param_4[1];
      goto LAB_140cccd0;
    }
  }
  iVar4 = 0;
  pbVar3 = param_3;
LAB_140cccd0:
  FUN_140cc080(pbVar3,param_5,param_2);
  if (param_6 - iVar4 == 0) {
    return;
  }
  FUN_140e5278(pbVar3 + param_5,param_4 + iVar4,param_6 - iVar4,param_4);
  return;
}

