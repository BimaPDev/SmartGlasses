/* FUN_1009eeac @ 0x1009eeac */

undefined4 FUN_1009eeac(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar3 = 0;
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  uStack_14 = 0;
  FUN_10118a1c(&local_20,0x10,DAT_1009ef08,param_2);
  uVar1 = FUN_1011ea10(&local_20);
  iVar2 = FUN_1009efe8(param_1,&local_20,uVar1);
  if (iVar2 == 0) {
    FUN_100a5b78((DAT_1009ef10 - DAT_1009ef0c) * 0x20 & 0xff00U | 0x520012,DAT_1009ef18,DAT_1009ef14
                 ,param_1,param_2);
    uVar3 = 0xfffffff3;
  }
  return uVar3;
}

