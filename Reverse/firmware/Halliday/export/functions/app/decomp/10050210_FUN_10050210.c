/* FUN_10050210 @ 0x10050210 */

undefined4 FUN_10050210(int param_1,undefined1 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  iVar3 = *DAT_10050280;
  if (param_3 != 0) goto LAB_1005023a;
  FUN_10119dc2(DAT_10050284,param_1,0,0,param_1,iVar3,0);
  while( true ) {
    if (*DAT_10050280 == iVar3) break;
    param_1 = FUN_1013cdc0();
LAB_1005023a:
    if (param_1 != 0) {
      FUN_10119dc2(DAT_10050288,param_1);
    }
    uVar2 = DAT_10050290;
    uVar1 = DAT_1005028c;
    puVar4 = param_2;
    while (puVar4 != param_2 + param_3) {
      puVar5 = puVar4 + 1;
      FUN_10119dc2(uVar2,*puVar4);
      puVar4 = puVar5;
      if (((int)puVar5 - (int)param_2 & 0xfU) == 0) {
        FUN_10119dc2(uVar1);
      }
    }
    if ((param_3 & 0xf) != 0) {
      FUN_10119dc2(DAT_1005028c);
    }
  }
  return 0;
}

