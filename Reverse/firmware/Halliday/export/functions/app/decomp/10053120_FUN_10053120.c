/* FUN_10053120 @ 0x10053120 */

undefined4 FUN_10053120(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *DAT_10053168;
  if ((param_2 == 0) || (param_3 < 0x14)) {
    uVar4 = *DAT_10053168 ^ uVar3;
    uVar2 = param_2;
    if (uVar4 == 0) {
      return 0xffffffea;
    }
  }
  else {
    uVar2 = *DAT_10053168 ^ uVar3;
    uVar4 = uVar3;
    uVar3 = param_1;
    if (uVar2 == 0) goto LAB_10053146;
  }
  param_2 = FUN_1013cdc0(param_2,uVar2,uVar4,uVar3,param_1);
LAB_10053146:
  uVar1 = FUN_10118a1c(param_2,param_3,DAT_1005316c);
  return uVar1;
}

