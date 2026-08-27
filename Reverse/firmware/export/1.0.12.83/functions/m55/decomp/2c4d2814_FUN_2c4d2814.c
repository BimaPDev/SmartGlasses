/* FUN_2c4d2814 @ 0x2c4d2814 */

undefined4
FUN_2c4d2814(byte *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  
  if ((param_1 == (byte *)0x0) || (0 < param_5)) {
    return 0x202;
  }
  if ((*param_1 < 0xd) && ((int)((0x10c1U >> (uint)*param_1) << 0x1f) < 0)) {
    if (*(int *)(param_1 + 0x318) == 0) {
      param_5 = param_5 * 0x2c;
      FUN_2c4d74c8();
      pbVar2 = param_1 + param_5 + 0x60;
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2 = param_1 + param_5 + 0x3c;
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2 = param_1 + param_5 + 0x40;
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      FUN_2c4d766c(param_1 + param_5 + 0x44,0,0);
      pbVar2 = param_1 + param_5 + 0x3c;
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2 = param_1 + param_5 + 0x40;
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      FUN_2c4d76ac(param_1 + param_5 + 0x44,param_2,param_3,param_4);
      if (*param_4 != 0) {
        return 0x204;
      }
    }
  }
  else if ((*param_4 != 0) && (*(int *)(param_1 + 0x318) < 1)) {
    iVar3 = param_5 * 0x2c;
    if (*(int *)(param_1 + iVar3 + 0x60) == 0) {
      pbVar2 = param_1 + iVar3 + 0x44;
      FUN_2c4d766c(pbVar2,*(undefined4 *)(param_1 + iVar3 + 0x40));
    }
    else if (*(int *)(param_1 + iVar3 + 0x40) == 0) {
      pbVar2 = param_1 + iVar3 + 0x44;
    }
    else {
      pbVar2 = param_1 + iVar3 + 0x44;
      FUN_2c4d7598(pbVar2,*(undefined4 *)(param_1 + iVar3 + 0x3c));
    }
    pbVar1 = param_1 + param_5 * 0x2c + 0x3c;
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    param_1 = param_1 + param_5 * 0x2c + 0x40;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_2c4d76ac(pbVar2,param_2,param_3,param_4);
    return 0;
  }
  return 0;
}

