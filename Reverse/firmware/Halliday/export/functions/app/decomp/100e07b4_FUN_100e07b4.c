/* FUN_100e07b4 @ 0x100e07b4 */

undefined4 FUN_100e07b4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  short sVar4;
  undefined4 uVar5;
  
  FUN_100e022c(0xffffffff,0xffffffff);
  iVar1 = FUN_100e0004(param_1,param_2);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x5d) != '\x04')) {
    uVar5 = 0xfffffffb;
  }
  else {
    iVar2 = FUN_10137c44(DAT_100e0838);
    puVar3 = (undefined1 *)FUN_100c1fe4(iVar2 + 8,3);
    *puVar3 = 0x81;
    if (param_3 << 0x1f < 0) {
      uVar5 = *(undefined4 *)(iVar1 + 100);
      FUN_10137e4e(iVar2,0xcb);
      FUN_10132808(iVar2 + 8,uVar5);
      sVar4 = 8;
    }
    else {
      sVar4 = 3;
    }
    *(short *)(puVar3 + 1) = sVar4 << 8;
    uVar5 = FUN_100e0080(iVar1,iVar2,7);
  }
  FUN_100e0220();
  return uVar5;
}

