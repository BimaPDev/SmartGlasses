/* FUN_10045920 @ 0x10045920 */

void FUN_10045920(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *DAT_10045968;
  if (param_2 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    uVar1 = *param_1;
    iVar4 = *(int *)(DAT_1004596c + 4);
    (**(code **)(iVar4 + 8))();
    (**(code **)(iVar4 + 4))(uVar1);
    iVar4 = (**(code **)(DAT_10045970 + 8))();
    if (iVar4 == 0x5c) {
      FUN_10045314();
    }
    uVar2 = 1;
  }
  if (*DAT_10045968 != iVar3) {
    FUN_1013cdc0(uVar2);
  }
  return;
}

