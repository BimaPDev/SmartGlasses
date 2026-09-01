/* FUN_100e0080 @ 0x100e0080 */

undefined4 FUN_100e0080(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_10137c52(param_1 + 0x10);
    iVar1 = (int)uVar3;
    if (iVar1 < 0) {
      FUN_100a5b78((DAT_100e00e8 - DAT_100e00e4) * 0x20 & 0xff00U | 0xda0012,DAT_100e00ec,param_3,
                   iVar1);
      FUN_100c1c90(param_2);
      uVar3 = CONCAT44(extraout_r1,iVar1);
      uVar2 = 100;
      goto LAB_100e00c0;
    }
  }
  if (param_3 == 3) {
    uVar2 = 10000;
  }
  else {
    uVar2 = 5000;
  }
  *(char *)(param_1 + 0x5d) = (char)param_3;
LAB_100e00c0:
  FUN_1013cbaa(param_1 + 0x70,(int)((ulonglong)uVar3 >> 0x20),uVar2,0);
  return (int)uVar3;
}

