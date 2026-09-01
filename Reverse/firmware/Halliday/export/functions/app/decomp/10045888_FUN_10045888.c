/* FUN_10045888 @ 0x10045888 */

void FUN_10045888(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_100458bc;
  if (param_2 < 3) goto LAB_100458ae;
  (**(code **)(DAT_100458c0 + 4))();
  uVar1 = 0;
  while( true ) {
    if (*DAT_100458bc == iVar2) break;
    FUN_1013cdc0(uVar1);
LAB_100458ae:
    uVar1 = 0xffffffea;
  }
  return;
}

