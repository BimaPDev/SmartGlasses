/* FUN_10043430 @ 0x10043430 */

void FUN_10043430(int param_1,int param_2,undefined4 param_3)

{
  int extraout_r1;
  uint uVar1;
  uint uVar2;
  uint extraout_r3;
  undefined4 uVar3;
  uint unaff_r5;
  undefined1 uStack_20;
  byte local_1f;
  byte local_1e;
  int local_14;
  
  local_14 = *DAT_100434a8;
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_100433f8(&uStack_20,param_2,param_3,0);
    unaff_r5 = (uint)local_1f;
    uVar2 = (uint)local_1e;
    if (*DAT_100434ac != '\0') goto LAB_10043474;
    FUN_10118a1c(param_1,param_2,DAT_100434b0,uVar2,unaff_r5);
  }
  while (*DAT_100434a8 != local_14) {
    FUN_1013cdc0();
    param_2 = extraout_r1;
    uVar2 = extraout_r3;
LAB_10043474:
    uVar1 = uVar2 % 0xc;
    if (uVar1 == 0) {
      uVar1 = 0xc;
    }
    uVar3 = DAT_100434b8;
    if (uVar2 < 0xc) {
      uVar3 = DAT_100434b4;
    }
    FUN_10118a1c(param_1,param_2,DAT_100434bc,uVar1,unaff_r5,uVar3);
  }
  return;
}

