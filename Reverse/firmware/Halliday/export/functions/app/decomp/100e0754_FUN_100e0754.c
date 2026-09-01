/* FUN_100e0754 @ 0x100e0754 */

undefined4 FUN_100e0754(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  FUN_100e022c(0xffffffff,0xffffffff,param_3,param_4,param_4);
  iVar1 = FUN_100e0004(param_1,param_2);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x5d) != '\x04')) {
    uVar4 = 0xfffffffb;
  }
  else {
    iVar2 = FUN_10137c44(DAT_100e07b0);
    puVar3 = (undefined1 *)FUN_100c1fe4(iVar2 + 8,3);
    *puVar3 = 0xff;
    puVar3[1] = 0;
    puVar3[2] = 3;
    uVar4 = FUN_100e0080(iVar1,iVar2,6);
  }
  FUN_100e0220();
  return uVar4;
}

