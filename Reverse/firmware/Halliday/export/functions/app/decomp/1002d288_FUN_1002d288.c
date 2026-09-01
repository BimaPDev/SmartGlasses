/* FUN_1002d288 @ 0x1002d288 */

void FUN_1002d288(undefined1 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_1002d304;
  iVar4 = *DAT_1002d308;
  iVar5 = DAT_1002d304 + param_2 * 0xe;
  *(undefined1 *)(iVar5 + 0x236) = *param_1;
  iVar3 = param_2 * 0xe + 0x23a;
  *(undefined1 *)(iVar5 + 0x237) = param_1[2];
  iVar6 = iVar3 + iVar1;
  *(undefined1 *)(iVar5 + 0x238) = param_1[1];
  *(undefined4 *)(iVar3 + iVar1) = *(undefined4 *)(param_1 + 8);
  uVar2 = DAT_1002d30c;
  *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar1 = DAT_1002d310;
  *(undefined2 *)(iVar6 + 8) = *(undefined2 *)(param_1 + 0x10);
  FUN_100a5b78((iVar1 - DAT_1002d314) * 0x20 & 0xff00U | 0xbb0034,DAT_1002d318,uVar2,param_2,
               param_1[1],*param_1,param_1 + 0x14);
  if (*DAT_1002d308 != iVar4) {
    FUN_1013cdc0();
  }
  return;
}

