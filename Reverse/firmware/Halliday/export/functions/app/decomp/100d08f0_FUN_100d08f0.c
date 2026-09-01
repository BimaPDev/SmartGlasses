/* FUN_100d08f0 @ 0x100d08f0 */

void FUN_100d08f0(undefined1 *param_1,undefined1 *param_2,int param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  int iVar5;
  
  if (param_2 < param_1) {
    bVar4 = param_2 + param_3 <= param_1;
    puVar1 = param_2 + param_3;
LAB_100d0904:
    if (bVar4) goto LAB_100d0928;
  }
  else {
    puVar1 = param_4;
    if (param_1 != param_2) {
      bVar4 = param_1 + param_3 <= param_2;
      goto LAB_100d0904;
    }
  }
  iVar5 = param_3;
  FUN_10119dc2(DAT_100d0948,DAT_100d0944,DAT_100d0940,0x217,param_1,param_2,param_3,puVar1,param_4);
  FUN_10119dc2(DAT_100d094c);
  FUN_1011a1f0(DAT_100d0940,0x217,iVar5,puVar1);
LAB_100d0928:
  puVar1 = param_1;
  puVar3 = param_2 + param_3 + -1;
  do {
    puVar2 = puVar1 + 1;
    *puVar1 = *puVar3;
    puVar1 = puVar2;
    puVar3 = puVar3 + -1;
  } while (puVar2 != param_1 + param_3);
  return;
}

