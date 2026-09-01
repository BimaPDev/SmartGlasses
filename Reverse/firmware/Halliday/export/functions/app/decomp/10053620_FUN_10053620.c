/* FUN_10053620 @ 0x10053620 */

void FUN_10053620(int param_1,int param_2,undefined4 *param_3,uint param_4,uint *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = DAT_10053680;
  iVar2 = *DAT_1005367c;
  if (param_1 == 0) goto LAB_1005366a;
  if (param_3 == (undefined4 *)0x0) goto LAB_1005366a;
  if (param_5 == (uint *)0x0) goto LAB_1005366a;
  uVar3 = param_2 * 0x4c + 8;
  if (param_4 < uVar3) {
    uVar1 = 0xfffffff9;
  }
  else {
    *(short *)((int)param_3 + 6) = (short)param_2;
    *param_3 = uVar1;
    *(undefined2 *)(param_3 + 1) = 1;
    FUN_1011ea40(param_3 + 2,param_1,param_2 * 0x4c,1,param_1);
    uVar1 = 0;
    *param_5 = uVar3;
  }
  while( true ) {
    if (*DAT_1005367c == iVar2) break;
    FUN_1013cdc0(uVar1);
LAB_1005366a:
    uVar1 = 0xffffffea;
  }
  return;
}

