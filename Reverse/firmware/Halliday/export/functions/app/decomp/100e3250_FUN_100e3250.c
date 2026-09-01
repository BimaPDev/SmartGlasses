/* FUN_100e3250 @ 0x100e3250 */

int FUN_100e3250(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = param_1;
  FUN_10138658(param_1 + 0xd4);
  iVar2 = FUN_10137c44(DAT_100e3320);
  if (iVar2 == 0) {
    FUN_100a5b78((DAT_100e3328 - DAT_100e3324) * 0x20 & 0xff00U | 0x760011,DAT_100e332c);
    iVar4 = -0xc;
  }
  else {
    puVar1 = (undefined4 *)(iVar2 + 8);
    uVar5 = *puVar1;
    iVar3 = FUN_10132790(puVar1);
    iVar4 = FUN_100539c0(uVar5,iVar3 + -1,param_4,&stack0x00000000,iVar4);
    if (iVar4 < 0) {
      FUN_100c1c90(iVar2);
      FUN_100a5b78((DAT_100e3328 - DAT_100e3324) * 0x20 & 0xff00U | 0x7e0011,DAT_100e3330);
    }
    else {
      FUN_100c1fe4(puVar1,iVar4);
      FUN_101327ba(puVar1,0xd);
      FUN_100b9ec4(DAT_100e3334,*(undefined4 *)(iVar2 + 8),*(undefined2 *)(iVar2 + 0xc));
      iVar4 = FUN_10137c52(param_1,iVar2);
      if (iVar4 < 0) {
        FUN_100c1c90(iVar2);
        FUN_100a5b78((DAT_100e3328 - DAT_100e3324) * 0x20 & 0xff00U | 0x8d0011,DAT_100e3338,iVar4);
      }
      else {
        iVar4 = 0;
      }
    }
  }
  return iVar4;
}

