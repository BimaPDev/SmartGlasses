/* FUN_100a6f9c @ 0x100a6f9c */

undefined1
FUN_100a6f9c(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_3 & 0xfff;
  if (uVar3 != 0) {
    uVar4 = uVar3;
    FUN_10119dc2(DAT_100a6fe8,DAT_100a6fe4,DAT_100a6fe0,0x5b,param_1,param_2,uVar3,uVar3,param_1,
                 param_2);
    FUN_1011a1f0(DAT_100a6fe0,0x5b,uVar3,uVar4);
  }
  pcVar2 = *(code **)(*(int *)(param_1 + 8) + 8);
  uVar1 = (*pcVar2)(param_1,pcVar2,param_3,param_4,param_5,0);
  return uVar1;
}

