/* FUN_100cdcb0 @ 0x100cdcb0 */

undefined4 FUN_100cdcb0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  
  uVar2 = CONCAT44(param_2,param_1);
  iVar3 = param_1;
  piVar4 = param_2;
  uVar1 = param_3;
  if (param_1 == 0) {
    FUN_10119dc2(DAT_100cdd2c,DAT_100cdd28,DAT_100cdd24,0xb67,0,param_2,param_3,param_4,0,param_2,
                 param_3);
    FUN_10119dc2(DAT_100cdd30);
    uVar2 = FUN_1011a1f0(DAT_100cdd24,0xb67,param_3,param_4);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if ((param_2 == (int *)0x0) || (param_4 = 0, *param_2 == 0)) {
    FUN_10119dc2(DAT_100cdd2c,DAT_100cdd34,DAT_100cdd24,0xb68,uVar2,param_3,param_4,iVar3,piVar4,
                 uVar1);
    FUN_10119dc2(DAT_100cdd38);
    FUN_1011a1f0(DAT_100cdd24,0xb68,param_3,param_4);
  }
  if (*(char *)(param_1 + 0xd) == '\a') {
    uVar1 = FUN_10134ab0(param_1,DAT_100cdd40,param_2,DAT_100cdd3c,2,2);
  }
  else {
    uVar1 = 0xffffff80;
  }
  return uVar1;
}

