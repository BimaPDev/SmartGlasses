/* FUN_100e5550 @ 0x100e5550 */

undefined1 FUN_100e5550(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  
  uVar3 = (DAT_100e55c8 - DAT_100e55cc) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100e55d0 | uVar3,DAT_100e55d4,DAT_100e55cc,uVar3,param_4);
  if (param_1 == 0) {
    return 0;
  }
  FUN_100e4fc0(0xffffffff,0xffffffff);
  if (((param_1 != *DAT_100e55d8) && (param_1 != DAT_100e55d8[7])) &&
     (piVar1 = (int *)FUN_100e4eac(), piVar1 != (int *)0x0)) {
    *(undefined1 *)((int)piVar1 + 10) = 1;
    *piVar1 = param_1;
    piVar1[1] = param_2;
    piVar1[6] = param_3;
    *(byte *)(piVar1 + 5) = *(byte *)(piVar1 + 5) & 0xfb;
    iVar2 = FUN_100c41fc(param_1,DAT_100e55dc);
    if (iVar2 == 0) {
      uVar4 = *(undefined1 *)((int)piVar1 + 9);
      goto LAB_100e5586;
    }
    FUN_10138a6a(piVar1);
  }
  uVar4 = 0;
LAB_100e5586:
  FUN_100e4fb4();
  return uVar4;
}

