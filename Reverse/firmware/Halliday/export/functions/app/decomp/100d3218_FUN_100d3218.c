/* FUN_100d3218 @ 0x100d3218 */

undefined4 FUN_100d3218(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  FUN_10119dc2(DAT_100d3244,DAT_100d3248);
  uVar1 = DAT_100d324c;
  puVar2 = param_1 + param_2;
  for (; param_1 != puVar2; param_1 = param_1 + 1) {
    FUN_10119dc2(uVar1,*param_1);
  }
  FUN_10119dc2(DAT_100d3250);
  return DAT_100d3248;
}

