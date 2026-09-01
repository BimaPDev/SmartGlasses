/* FUN_10070ba0 @ 0x10070ba0 */

undefined4 FUN_10070ba0(undefined4 param_1,undefined1 *param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  FUN_10119dc2(DAT_10070be8,param_1,param_3,param_4,param_4);
  uVar2 = DAT_10070bf0;
  uVar1 = DAT_10070bec;
  puVar3 = param_2;
  while (puVar3 != param_2 + param_3) {
    puVar4 = puVar3 + 1;
    FUN_10119dc2(uVar2,*puVar3);
    puVar3 = puVar4;
    if (((int)puVar4 - (int)param_2 & 0xfU) == 0) {
      FUN_10119dc2(uVar1);
    }
  }
  if ((param_3 & 0xf) != 0) {
    FUN_10119dc2(DAT_10070bec);
  }
  return 0;
}

