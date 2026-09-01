/* FUN_100e3b04 @ 0x100e3b04 */

int FUN_100e3b04(int param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  uint uVar6;
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  if (param_1 == 0) {
    uVar2 = (DAT_100e3c3c - DAT_100e3c40) * 0x20 & 0xff00 | 0x3d40011;
    uVar5 = DAT_100e3c44;
    uVar6 = DAT_100e3c40;
  }
  else {
    iVar3 = FUN_100e255c();
    if (iVar3 != 0) {
      if ((*(uint *)(iVar3 + 0x1f0) & 0xff0002) == 0x120000) {
        iVar4 = FUN_100e2fd4(*(undefined4 *)(iVar3 + 0xec),param_2);
        if (iVar4 == 0) {
          uVar5 = thunk_FUN_10115958();
          *(undefined4 *)(iVar3 + 0x1e8) = uVar5;
          uVar5 = FUN_100e2758(param_2);
          *(undefined4 *)(iVar3 + 0x1ec) = uVar5;
          *(byte *)(iVar3 + 0x1f0) = *(byte *)(iVar3 + 0x1f0) | 2;
          FUN_10138356(iVar3,param_2);
          FUN_1013cbaa(DAT_100e3c5c,extraout_r1,500,0);
          iVar3 = FUN_100e3250(iVar3,0,DAT_100e3c60,param_2);
          if (iVar3 < 0) {
            FUN_100a5b78(DAT_100e3c64 | (DAT_100e3c3c - DAT_100e3c40) * 0x20 & 0xff00,DAT_100e3c68,
                         param_2);
            return iVar3;
          }
        }
      }
      else {
        bVar1 = FUN_1011ea10(param_2);
        uStack_14._3_1_ = bVar1;
        if ((uint)((*(int *)(iVar3 + 0x110) + *(int *)(iVar3 + 0x108)) - *(int *)(iVar3 + 0x10c)) <
            bVar1 + 1) {
          uVar6 = (DAT_100e3c3c - DAT_100e3c40) * 0x20 & 0xff00;
          FUN_100a5b78(DAT_100e3c50 | uVar6,DAT_100e3c54,DAT_100e3c40,uVar6,param_1);
          FUN_100b9ec4(DAT_100e3c58,param_2,uStack_14._3_1_);
        }
        else {
          FUN_1012d2f0(iVar3 + 0x108,(int)&uStack_14 + 3,1);
          FUN_1012d2f0(iVar3 + 0x108,param_2,uStack_14._3_1_);
          *(byte *)(iVar3 + 0x1f0) = *(byte *)(iVar3 + 0x1f0) | 1;
        }
      }
      return 0;
    }
    uVar6 = (DAT_100e3c3c - DAT_100e3c40) * 0x20 & 0xff00;
    uVar2 = DAT_100e3c48 | uVar6;
    uVar5 = DAT_100e3c4c;
    param_3 = DAT_100e3c40;
  }
  FUN_100a5b78(uVar2,uVar5,param_3,uVar6,param_1);
  return -0x80;
}

