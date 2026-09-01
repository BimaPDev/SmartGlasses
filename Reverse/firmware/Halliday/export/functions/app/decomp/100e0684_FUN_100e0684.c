/* FUN_100e0684 @ 0x100e0684 */

undefined4
FUN_100e0684(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  FUN_100e022c(0xffffffff,0xffffffff,param_3,param_4,param_4);
  iVar1 = FUN_100e0004(param_1,param_2);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x5d) != '\x04')) {
    uVar6 = 0xfffffffb;
  }
  else {
    iVar2 = FUN_10137c44(DAT_100e0750);
    puVar3 = (undefined1 *)FUN_100c1fe4(iVar2 + 8,3);
    *puVar3 = 0x85;
    if ((param_3 & 0x10) == 0) {
      uVar5 = 3;
    }
    else {
      FUN_10137e4e(iVar2,2);
      FUN_10137e4e(iVar2,0);
      uVar5 = 5;
    }
    if ((param_3 & 1) != 0) {
      uVar6 = *(undefined4 *)(iVar1 + 100);
      FUN_10137e4e(iVar2,0xcb);
      FUN_10132808(iVar2 + 8,uVar6);
      uVar5 = uVar5 + 5;
    }
    if (((param_3 & 2) != 0) && (iVar4 = FUN_10137dc8(2,param_4,param_5), -1 < iVar4)) {
      param_4 = param_4 + iVar4 * 8;
      iVar4 = FUN_10137eae(iVar2,*(undefined4 *)(param_4 + 4),*(undefined2 *)(param_4 + 2));
      uVar5 = iVar4 + uVar5 & 0xffff;
    }
    *(ushort *)(puVar3 + 1) = (ushort)((uVar5 & 0xff) << 8) | (ushort)(uVar5 >> 8);
    uVar6 = FUN_100e0080(iVar1,iVar2,0xb);
  }
  FUN_100e0220();
  return uVar6;
}

