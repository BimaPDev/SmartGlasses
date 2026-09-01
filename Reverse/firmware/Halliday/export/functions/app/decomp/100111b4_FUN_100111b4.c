/* FUN_100111b4 @ 0x100111b4 */

void FUN_100111b4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_100111f0;
  iVar2 = *DAT_100111f4;
  FUN_1006d138(param_1,*(undefined4 *)(DAT_100111f0 + 0xb4),200,0,param_1);
  if (*DAT_100111f4 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_10061c80(iVar1 + 0x28,2000,0);
  return;
}

