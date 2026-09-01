/* FUN_100669b8 @ 0x100669b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100669b8(int param_1,int param_2,int param_3,int param_4,ushort param_5,uint param_6,
                 uint param_7,uint param_8,int *param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  
  uVar4 = param_8 & 0xffff;
  param_6 = param_6 & 0xffff;
  param_7 = param_7 & 0xffff;
  if (((param_5 < 0xe11) && (param_6 != 0)) && (param_7 != 0)) {
    uVar1 = 1 << (param_8 & 0xff) & 0xffff;
    iVar2 = uVar1 * uVar1;
    uVar1 = iVar2 / (int)param_6 & 0xffff;
    if ((param_6 != param_7) && (uVar3 = iVar2 / (int)param_7 & 0xffff, uVar1 != uVar3)) {
      sVar5 = 0xe10 - param_5;
      *param_9 = 0x8000;
      param_9[1] = 0x8000;
      param_9[2] = 0x10000;
      param_9[3] = 0;
      param_9[4] = 0;
      param_9[5] = 0x10000;
      FUN_10066074(param_9,param_9 + 1,0x8000,0x8000,(param_3 + param_1) * 0x10000 + 0x8000,
                   (param_4 + param_2) * 0x10000 + 0x8000,sVar5,uVar1,uVar3,uVar4);
      FUN_10066074(param_9 + 2,param_9 + 3,param_9[2],param_9[3],0,0,sVar5,uVar1,uVar3,uVar4);
      FUN_10066074(param_9 + 4,param_9 + 5,param_9[4],param_9[5],0,0,sVar5,uVar1,uVar3,uVar4);
      iVar2 = DAT_10066ad8 + param_2 * -0x10000;
      *param_9 = *param_9 + -0x8000 + param_1 * -0x10000;
      param_9[1] = param_9[1] + iVar2;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x10066a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_000070d0)(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_10066ad4,0x62,DAT_10066ad0,DAT_10066acc);
}

