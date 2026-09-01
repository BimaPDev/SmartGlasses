/* FUN_100e90e8 @ 0x100e90e8 */

undefined4
FUN_100e90e8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined2 uVar1;
  uint uVar2;
  short *extraout_r1;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar4 = DAT_100e9174 - DAT_100e9170;
    uVar2 = DAT_100e9180;
    uVar3 = DAT_100e917c;
    uVar6 = param_1;
  }
  else {
    uVar6 = 0;
    iVar4 = FUN_100e8f54(param_3,param_4,param_5,1,0,param_2,param_3);
    param_2[7] = iVar4;
    if (iVar4 != 0) {
      iVar4 = FUN_100eb648(iVar4,param_1);
      if (iVar4 == 0) {
        return 0xffffffff;
      }
      param_2[6] = iVar4;
      *param_2 = param_1;
      uVar1 = FUN_100e8b74(*(undefined4 *)(iVar4 + 8),iVar4);
      *(undefined2 *)(param_2 + 4) = uVar1;
      param_2[1] = (int)*extraout_r1;
      param_2[2] = (int)extraout_r1[1];
      *(short *)(param_2 + 3) = extraout_r1[2];
      *(short *)((int)param_2 + 0xe) = extraout_r1[3];
      param_2[5] = *(undefined4 *)(extraout_r1 + 6);
      return 0;
    }
    iVar4 = DAT_100e9174 - DAT_100e9170;
    uVar2 = DAT_100e9188;
    uVar3 = DAT_100e9184;
  }
  uVar5 = iVar4 * 0x20 & 0xff00;
  FUN_100a5b78(uVar2 | uVar5,DAT_100e9178,uVar3,uVar5,uVar6);
  return 0xffffffff;
}

